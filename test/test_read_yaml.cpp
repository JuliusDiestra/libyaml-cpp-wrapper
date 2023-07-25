
#include "gtest/gtest.h"

#include "yaml_parser.hpp"

TEST(ReadYaml, open_file_01) {
    YamlParser yaml_parser_;
    std::string file_path = "../../test/test_yaml.yaml";
    bool open_file_status = yaml_parser_.OpenFile(file_path);
    EXPECT_TRUE(open_file_status);
}

