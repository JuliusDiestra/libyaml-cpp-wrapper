
#ifndef YAML_PARSER_HPP_
#define YAML_PARSER_HPP_

#include <iostream>
#include <string>

#include "yaml.h"

class YamlParser {
  public:
    YamlParser();
    ~YamlParser();
    bool OpenFile(const std::string& file_path);
    bool CloseFile();
    bool IsFileEmpty();
    bool Read();

  private:
    FILE* file_;
    yaml_parser_t parser_;
    yaml_event_t event_;
};

#endif  // YAML_PARSER_HPP_
