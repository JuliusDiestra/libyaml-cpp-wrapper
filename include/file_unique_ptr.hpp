
#ifndef FILE_UNIQUE_PTR_HPP_
#define FILE_UNIQUE_PTR_HPP_

#include <memory>

namespace file {

class pointer_deleter {
  public:
    void operator()(FILE* file) {
        success_ = !fclose(file); // fclose returns 0 if it is successful.
    }
    bool success() {
        return success_;
    }
  private:
    bool success_;
};

std::unique_ptr<FILE, ::file::pointer_deleter> factory_unique_ptr(const std::string& file_path) {
    auto file_ptr = std::unique_ptr<FILE, ::file::pointer_deleter>(fopen(file_path.c_str(),"rb"));
    return file_ptr;
}

}  // namespace file

#endif  // FILE_UNIQUE_PTR_HPP_


