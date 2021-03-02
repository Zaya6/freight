#pragma once

#include <string>
#include <filesystem>
#include <toml.hpp>
#include <fmt/core.h>

#include <iostream>

class config {
    public:
        config(std::string path);
        config();
        virtual ~config();

        std::filesystem::path Getpath() { return _path; }
        void Setpath(std::string val) { _path = val; }

    protected:

    private:
        std::filesystem::path _path;
        toml::value _data;

    public:
        std::string projectName;
        std::string projectVersion;
};
