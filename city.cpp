#include "city.h"

#include <iostream>

City::City(const std::string& name) : name_(name) {}

City::City(const std::string& name, 
           const std::vector<Route>& initial_routes)
    : name_(name), routes_(initial_routes) {}

void City::AddRoute(City* dest, int cost) {
  routes_.push_back({dest, cost});
}

std::string City::GetName() const {
  return name_;
}

void City::print() const {
  std::cout << name_ << ": ";
  for (size_t i = 0; i < routes_.size(); ++i) {
    if (i > 0) std::cout << ", ";
    std::cout << routes_[i].destination->GetName() 
              << ":" << routes_[i].cost;
  }
}