#ifndef LABA3_LINE_H_
#define LABA3_LINE_H_

#include "point.h"

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

#endif  