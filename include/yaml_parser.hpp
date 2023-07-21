
#ifndef YAML_PARSER_HPP_
#define YAML_PARSER_HPP_

#include "yaml.h"
#include <iostream>
#include <string>
#include <filesystem>

class YamlParser {
  public:
    YamlParser();
    ~YamlParser();
    bool Read(const char* file_path);
  private:
    yaml_parser_t parser_;
    yaml_event_t event_;
};

#endif  // YAML_PARSER_HPP_
