#include <iostream>
#include <string>

class Pair {
public:
  void display() const {}
};

int main() {
  Pair<int, std::string> p(1, "example");
  p.display(); // Output: First: 1, Second: example

  assert(p.first == 1);
  assert(p.second == "example");

  Pair<double, char> p2(3.14, 'P');
  p2.display(); // Output: First: 3.14, Second: A

  return 0;
}