#include <iostream>
#include <string>
#include <cassert>

template <class T1, class T2>
class Pair
{
public:
    Pair(T1 First, T2 Second) : first(First), second(Second) {};
    void display() const
    {
        // First: 1, Second: example
        std::cout << "First: " << first << ", Second: " << second << '\n';
    }
    T1 first;
    T2 second;
};

int main()
{
    Pair<int, std::string> p(1, "example");
    p.display(); // Output: First: 1, Second: example

    assert(p.first == 1);
    assert(p.second == "example");

    Pair<double, char> p2(3.14, 'P');
    p2.display(); // Output: First: 3.14, Second: P

    return 0;
}