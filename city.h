#ifndef LABA3_CITY_H_
#define LABA3_CITY_H_

#include <string>
#include <vector>

class City;

struct Route {
  City* destination;
  int cost;
};

class City {
 public:
  explicit City(const std::string& name);
  City(const std::string& name, const std::vector<Route>& initial_routes);
  
  void AddRoute(City* dest, int cost);
  std::string GetName() const;
  void print() const;

 private:
  std::string name_;
  std::vector<Route> routes_;
};

#endif 