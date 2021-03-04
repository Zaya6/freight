#include <fmt/core.h>
#include <filesystem>
#include <toml.hpp>
#include <string>
#include <config.h>

//namespace fs = std::filesystem;

int main() {
    config projectConfig{"freight.toml"};

    return EXIT_SUCCESS;
}
