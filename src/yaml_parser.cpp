
#include "yaml_parser.hpp"

YamlParser::YamlParser() {
    yaml_parser_initialize(&parser_);
}

YamlParser::~YamlParser() {
    yaml_parser_delete(&parser_);
}

bool YamlParser::Read(const char* file_path) {
    FILE* file_ = fopen(file_path,"rb");
    bool open_file_status{false};
    if (file_ != nullptr) {
        open_file_status = true;
    }
    return open_file_status;
}
