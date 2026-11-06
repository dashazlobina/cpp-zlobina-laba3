#include <iostream>
#include <limits>
#include <string>
#include <vector>

#include "city.h"
#include "fraction.h"
#include "line.h"
#include "name.h"
#include "point.h"

int GetValidIntInput(const std::string& prompt) {
  int value = 0;
  while (true) {
    std::cout << prompt;
    if (std::cin >> value) {
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), 
                      '\n');
      return value;
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), 
                    '\n');
    std::cout << "Error: enter an integer.\n";
  }
}

int main() {
  // 1.1
  std::cout << "Task 1.1:\n";
  Point p1(5, 10);
  Point p2(-3, 7);
  Point p3(0, 0);
  
  std::cout << "Point 1: "; 
  p1.print(); 
  std::cout << "\n";
  
  std::cout << "Point 2: "; 
  p2.print(); 
  std::cout << "\n";
  
  std::cout << "Point 3: "; 
  p3.print(); 
  std::cout << "\n\n";

  // 1.3
  std::cout << "Task 1.3:\n";
  Name n1("", "Cleopatra", "");
  Name n2("Pushkin", "Alexander", "Sergeevich");
  Name n3("Mayakovsky", "Vladimir", "");
  
  std::cout << "Name 1: "; 
  n1.print(); 
  std::cout << "\n";
  
  std::cout << "Name 2: "; 
  n2.print(); 
  std::cout << "\n";
  
  std::cout << "Name 3: "; 
  n3.print(); 
  std::cout << "\n\n";

  // 2.1
  std::cout << "2.1:\n";
  Point start1(1, 3);
  Point end1(23, 8);
  Point start2(5, 10);
  Point end2(25, 10);
  
  Line line1(&start1, &end1);
  Line line2(&start2, &end2);
  Line line3(&start1, &end2);

  line1.print(); std::cout << "\n";
  line2.print(); std::cout << "\n";
  line3.print(); std::cout << "\n";

  start1.set_x(10); start1.set_y(20);
  end2.set_x(30); end2.set_y(30);
  
  std::cout << "After changing lines 1 and 2:\n";
  line3.print(); std::cout << "\n";

  Point new_start1(1, 3);
  line1.set_start(&new_start1); 
  
  std::cout << "After changing start of line 1:\n";
  line1.print(); std::cout << "\n";
  line3.print(); std::cout << "\n\n";

  // 3.3 и 4.8
  std::cout << "3.3 & 4.8:\n";

  City city_b("B");
  City city_c("C");
  City city_d("D");
  City city_e("E");
  City city_f("F");

  std::vector<Route> routes_for_a;
  routes_for_a.push_back({&city_f, 1});
  routes_for_a.push_back({&city_b, 5});
  routes_for_a.push_back({&city_d, 6});
  City city_a("A", routes_for_a); 

  city_b.AddRoute(&city_a, 5);
  city_b.AddRoute(&city_c, 3);

  city_c.AddRoute(&city_b, 3);
  city_c.AddRoute(&city_d, 4);

  city_d.AddRoute(&city_e, 2);
  city_d.AddRoute(&city_a, 6);
  city_d.AddRoute(&city_c, 4);

  city_e.AddRoute(&city_f, 2);

  city_f.AddRoute(&city_b, 1);
  city_f.AddRoute(&city_e, 2);

  city_a.print(); std::cout << "\n";
  city_b.print(); std::cout << "\n";
  city_c.print(); std::cout << "\n";
  city_d.print(); std::cout << "\n";
  city_e.print(); std::cout << "\n";
  city_f.print(); std::cout << "\n\n";

  // 5.5
  std::cout << "5.5:\n";
  Fraction f1(1, 3);
  Fraction f2(2, 3);
  Fraction f3(3, 4);

  std::cout << "Initial fractions: f1="; 
  f1.print(); 
  std::cout << ", f2="; 
  f2.print(); 
  std::cout << ", f3="; 
  f3.print(); 
  std::cout << "\n";

  std::cout << "Addition: "; 
  f1.print(); std::cout << " + "; 
  f2.print(); std::cout << " = "; 
  f1.Sum(f2).print(); 
  std::cout << "\n";

  std::cout << "Subtraction: "; 
  f2.print(); std::cout << " - "; 
  f1.print(); std::cout << " = "; 
  f2.Minus(f1).print(); 
  std::cout << "\n";

  std::cout << "Multiplication: "; 
  f1.print(); std::cout << " * "; 
  f2.print(); std::cout << " = "; 
  f1.Multiply(f2).print(); 
  std::cout << "\n";

  std::cout << "Division: "; 
  f1.print(); std::cout << " / "; 
  f2.print(); std::cout << " = "; 
  f1.Div(f2).print(); 
  std::cout << "\n";
  
  std::cout << "Complex operation f1.Sum(f2).Div(f3).Minus(5): ";
  f1.Sum(f2).Div(f3).Minus(5).print(); 
  std::cout << "\n\n";

  int user_x = GetValidIntInput("Enter X coordinate: ");
  int user_y = GetValidIntInput("Enter Y coordinate: ");
  
  Point user_point(user_x, user_y);
  std::cout << "You entered point: "; 
  user_point.print(); 
  std::cout << "\n";

  return 0;
}