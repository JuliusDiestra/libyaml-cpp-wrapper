
#include "gtest/gtest.h"

#include "file_unique_ptr.hpp"

TEST(FileUniquePtr, create_pointer) {
    std::string file_path = "../../test/test_yaml.yaml";
    auto file_ptr = file::factory_unique_ptr(file_path);
    EXPECT_TRUE(file_ptr);
}

TEST(FileUniquePtr, delete_pointer) {
    std::string file_path = "../../test/test_yaml.yaml";
    auto file_ptr = file::factory_unique_ptr(file_path);
    EXPECT_TRUE(file_ptr);
    file::pointer_deleter& pointer_deleter_ = file_ptr.get_deleter();
    auto raw_file_ptr = file_ptr.release();
    pointer_deleter_(raw_file_ptr);
    EXPECT_TRUE(pointer_deleter_.success());
}
