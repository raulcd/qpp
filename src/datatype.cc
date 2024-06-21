
#include "arrow/api.h"
#include <string>
#include "datatype.h"


DType::DType(std::string type_name, std::shared_ptr<arrow::DataType> data_type){
    type_name_=type_name;
    data_type_=data_type;
};
DType::DType(){};

Column::Column(DType type, std::shared_ptr<arrow::Array> values) {
    type_=type;
    values_=values;
};


int Column::size() {
    return values_->length();
};
