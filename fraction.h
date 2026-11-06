#ifndef LABA3_FRACTION_H_
#define LABA3_FRACTION_H_

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

#endif 