#include "config.h"

namespace fs = std::filesystem;

config::config(std::string path) {

	fmt::print("checking config...{}\n", path);

	fs::path checkPath{path}; //test path to check


	if ( fs::exists(checkPath) ) {

        //alert success and use path
		fmt::print("config found...\n");
		_path = checkPath;

        //proceed to parse toml file
        try {
			_data = toml::parse(_path.string());
		} catch(toml::internal_error& e) {
			fmt::print("\n-error while parsing freight.toml\n");
			fmt::print("{}\n\n(please fix toml file)\n\n", e.what() );
			exit(EXIT_FAILURE);
		}

		//pull project values
		auto projectTable = toml::find(_data, "project");
		projectName = toml::find<std::string>( projectTable, "name");
		projectVersion = toml::find<std::string>( projectTable, "version");

		fmt::print("project name is: {}\n", projectName);
		fmt::print("project version is: {}\n", projectVersion);

	} else {
        //alert failure to find file and give help
        fmt::print("\nconfig not found!!\n");
        fmt::print("\n\n(Make sure you're config filename is 'frieght.toml')\n");
        exit(EXIT_FAILURE);
	}


	//std::cout << _path << std::endl;
	//std::cout << fs::current_path() << std::endl;
}

config::~config() {
	//dtor
}
