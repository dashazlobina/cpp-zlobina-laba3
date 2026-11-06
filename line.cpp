#include "line.h"

#include <iostream>

Line::Line(Point* start, Point* end) : start_(start), end_(end) {}

void Line::set_start(Point* new_start) { start_ = new_start; }
void Line::set_end(Point* new_end) { end_ = new_end; }
Point* Line::start() const { return start_; }
Point* Line::end() const { return end_; }

void Line::print() const {
  std::cout << "Line from ";
  start_->print();
  std::cout << " to ";
  end_->print();
}