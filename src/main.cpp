#include <fmt/core.h>
#include <filesystem>
#include <toml.hpp>
#include <string>
#include <config.h>

//namespace fs = std::filesystem;

int main() {
    config projectConfig{"freight.toml"};
    /*
	fs::path packageTomlPath{"freight.toml"};
	toml::value packageToml;

	fmt::print("checking for...{}\n", packageTomlPath.string());

	if ( fs::exists(packageTomlPath) ) {
		fmt::print("config found...\n");

		try {
			packageToml = toml::parse(packageTomlPath.string());
		} catch(toml::internal_error e) {
			fmt::print("\n-error while parsing freight.toml\n");
			fmt::print("{}\n\n(please fix toml file)\n\n", e.what() );
			exit(1);
		}

		//get table values
		auto name = toml::find<std::string>( toml::find(packageToml, "project"), "name");
		fmt::print("project name is: {}\n", name);


	} else {
		fmt::print("\nconfiguration does not exist\n");
	}*/

    return EXIT_SUCCESS;
}
