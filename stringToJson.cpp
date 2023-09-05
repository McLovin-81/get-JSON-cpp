#include <iostream>
#include <string>

#include "simdjson.h"
#include "simdjson.cpp"

int main()
{
    simdjson::dom::parser parser;

    std::string stringData = R"( { "name": "John", "age": 30 } )";
    simdjson::dom::object jsonData = parser.parse(stringData);

    std::cout << typeid(jsonData).name() << std::endl;
  
  return 0;
}
