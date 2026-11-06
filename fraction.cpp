#include "fraction.h"

#include <cmath>
#include <iostream>

Fraction::Fraction(int num, int den) : num_(num), den_(den) {
  if (den_ == 0) {
    den_ = 1;
  }
  Simplify();
}

void Fraction::Simplify() {
  int a = std::abs(num_);
  int b = std::abs(den_);
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  int gcd = a;
  if (gcd != 0) {
    num_ /= gcd;
    den_ /= gcd;
  }
  if (den_ < 0) {
    num_ = -num_;
    den_ = -den_;
  }
}

Fraction Fraction::Sum(const Fraction& other) const {
  return Fraction(num_ * other.den_ + other.num_ * den_,
                  den_ * other.den_);
}

Fraction Fraction::Minus(const Fraction& other) const {
  return Fraction(num_ * other.den_ - other.num_ * den_,
                  den_ * other.den_);
}

Fraction Fraction::Multiply(const Fraction& other) const {
  return Fraction(num_ * other.num_, den_ * other.den_);
}

Fraction Fraction::Div(const Fraction& other) const {
  return Fraction(num_ * other.den_, den_ * other.num_);
}

Fraction Fraction::Sum(int val) const { return Sum(Fraction(val)); }
Fraction Fraction::Minus(int val) const { return Minus(Fraction(val)); }
Fraction Fraction::Multiply(int val) const { 
  return Multiply(Fraction(val)); 
}
Fraction Fraction::Div(int val) const { return Div(Fraction(val)); }

void Fraction::print() const {
  std::cout << num_ << "/" << den_;
}