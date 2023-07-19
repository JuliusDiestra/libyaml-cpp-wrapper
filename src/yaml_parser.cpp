
#include "yaml_parser.hpp"

YamlParser::YamlParser() {
    yaml_parser_initialize(&parser_);
}

YamlParser::~YamlParser() {
    yaml_parser_delete(&parser_);
}


