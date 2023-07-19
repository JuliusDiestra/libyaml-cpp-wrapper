
#ifndef YAML_PARSER_HPP_
#define YAML_PARSER_HPP_

#include "yaml.h"
#include <string>

class YamlParser {
  public:
    YamlParser();
    ~YamlParser();
    bool Read(std::string file_path);
  private:
    yaml_parser_t parser_;
    yaml_event_t event_;
};

#endif  // YAML_PARSER_HPP_