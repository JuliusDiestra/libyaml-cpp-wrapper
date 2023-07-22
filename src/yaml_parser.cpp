
#include "yaml_parser.hpp"

YamlParser::YamlParser() {
    yaml_parser_initialize(&parser_);
}

YamlParser::~YamlParser() {
    yaml_parser_delete(&parser_);
}

bool YamlParser::OpenFile(const std::string& file_path) {
    if (!IsFileEmpty()) {
        CloseFile();
    }
    file_ = fopen(file_path.c_str(), "rb");
    bool open_file_status{false};
    if (!IsFileEmpty()) {
        open_file_status = true;
    }
    return open_file_status;
}

bool YamlParser::CloseFile() {
    int close_status = 0;
    if (!IsFileEmpty()) {
        close_status = fclose(file_);
    }
    if (close_status == 0) {
        return true;
    } else {
        return false;
    }
}

bool YamlParser::IsFileEmpty() {
    bool is_file_empty;
    if (file_ == nullptr) {
        is_file_empty = true;
    } else {
        is_file_empty = false;
    }
    return is_file_empty;
}

bool YamlParser::Read() {
    return true;
}
