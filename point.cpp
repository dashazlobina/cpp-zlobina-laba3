#include "point.h"

#include <iostream>

Point::Point(int x, int y) : x_(x), y_(y) {}

void Point::set_x(int x) { x_ = x; }
void Point::set_y(int y) { y_ = y; }
int Point::x() const { return x_; }
int Point::y() const { return y_; }

void Point::print() const {
  std::cout << "{" << x_ << ";" << y_ << "}";
}