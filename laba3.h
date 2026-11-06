#ifndef LABA3_H_
#define LABA3_H_

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <limits>

class Point {
 public:
  explicit Point(int x, int y);
  void set_x(int x);
  void set_y(int y);
  int x() const;
  int y() const;
  void print() const;

 private:
  int x_;
  int y_;
};

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

class Line {
 public:
  Line(Point* start, Point* end);
  void set_start(Point* new_start);
  void set_end(Point* new_end);
  Point* start() const;
  Point* end() const;
  void print() const;

 private:
  Point* start_;
  Point* end_;
};

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

class Fraction {
 public:
  explicit Fraction(int num, int den = 1);
  
  Fraction Sum(const Fraction& other) const;
  Fraction Minus(const Fraction& other) const;
  Fraction Multiply(const Fraction& other) const;
  Fraction Div(const Fraction& other) const;

  Fraction Sum(int val) const;
  Fraction Minus(int val) const;
  Fraction Multiply(int val) const;
  Fraction Div(int val) const;

  void print() const;

 private:
  int num_;
  int den_;
  void Simplify();
};

int GetValidIntInput(const std::string& prompt);

#endif  // LABA3_H_