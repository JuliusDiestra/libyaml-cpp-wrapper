
#ifndef YAML_PARSER_HPP_
#define YAML_PARSER_HPP_

#include <iostream>
#include <memory>
#include <string>

#include "file_unique_ptr.hpp"
#include "yaml.h"

class YamlParser {
  public:
    YamlParser();
    ~YamlParser();
    bool OpenFile(const std::string& file_path);
    bool CloseFile();
    bool Read();

  private:
    std::unique_ptr<FILE, file::pointer_deleter> file_;
    yaml_parser_t parser_;
    yaml_event_t event_;
};

#endif  // YAML_PARSER_HPP_
