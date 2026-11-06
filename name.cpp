#include "name.h"

#include <iostream>

Name::Name(const std::string& last_name, 
           const std::string& first_name, 
           const std::string& patronymic)
    : last_name_(last_name), 
      first_name_(first_name), 
      patronymic_(patronymic) {}

void Name::print() const {
  bool has_output = false;
  if (!last_name_.empty()) {
    std::cout << last_name_;
    has_output = true;
  }
  if (!first_name_.empty()) {
    if (has_output) std::cout << " ";
    std::cout << first_name_;
    has_output = true;
  }
  if (!patronymic_.empty()) {
    if (has_output) std::cout << " ";
    std::cout << patronymic_;
  }
}