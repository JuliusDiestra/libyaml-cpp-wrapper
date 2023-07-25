
#include "yaml_parser.hpp"

YamlParser::YamlParser() {
    yaml_parser_initialize(&parser_);
}

YamlParser::~YamlParser() {
    yaml_parser_delete(&parser_);
}

bool YamlParser::OpenFile(const std::string& file_path) {
    file_ = file::factory_unique_ptr(file_path);
    bool open_file_status{false};
    if (file_) {
        open_file_status = true;
    }
    return open_file_status;
}

bool YamlParser::CloseFile() {
    return true;
}

bool YamlParser::Read() {
    return true;
}
