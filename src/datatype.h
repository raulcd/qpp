#include "arrow/api.h"
#include <string>

// TODO: Clean public vs private

class DType {
    public:
      std::string type_name_;
      std::shared_ptr<arrow::DataType> data_type_;

      DType(std::string type_name, std::shared_ptr<arrow::DataType> data_type);
      DType();
};

class Column {
  public:
    DType type_;
    int size();
    std::shared_ptr<arrow::Array> values_;
    Column(DType type, std::shared_ptr<arrow::Array> vl);
};