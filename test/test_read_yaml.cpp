
#include "gtest/gtest.h"

#include "yaml_parser.hpp"

TEST(ReadYaml, read_yaml_01) {
    YamlParser yaml_parser_;
    const char* file_path = "../../test/test_yaml.yaml";
    bool read_status = yaml_parser_.Read(file_path);
    EXPECT_TRUE(read_status);
}

