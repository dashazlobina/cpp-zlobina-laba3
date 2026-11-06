#ifndef LABA3_POINT_H_
#define LABA3_POINT_H_

#include <string>

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

#endif  