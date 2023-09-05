#include <iostream>
#include <string>

#include "simdjson.h"
#include "simdjson.cpp"

int main()
{
  // Read JSON file.
  simdjson::dom::parser parser;
  simdjson::dom::element jsonF = parser.load("test.json");

  std::cout << jsonF["Herausgeber"] << std::endl;


  return 0;
}