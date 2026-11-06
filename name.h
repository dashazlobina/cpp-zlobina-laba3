#ifndef LABA3_NAME_H_
#define LABA3_NAME_H_

#include <string>

class Name {
 public:
  Name(const std::string& last_name = "", 
       const std::string& first_name = "", 
       const std::string& patronymic = "");
  void print() const;

 private:
  std::string last_name_;
  std::string first_name_;
  std::string patronymic_;
};

#endif  