#include <array>
#include <iostream>

template <class T, size_t size>
void PrintArray(const std::array<T, size> &array)
{
    for (const T &cur_el : array)
    {
        std::cout << cur_el << ' ';
    }
    std::cout << '\n';
}

template <size_t size>
void PrintArray(const std::array<std::string, size> &array)
{
    for (const std::string &cur_el : array)
    {
        std::cout << cur_el;
    }
    std::cout << '\n';
}

class Tester
{
public:
    Tester() = default;

    Tester(const Tester &) { std::cout << "Валера, валера, меня долго копировать!\n"; }

    Tester &operator=(const Tester &)
    {
        std::cout << "Валера, валера, меня долго копировать!\n";
        return *this;
    }
};

std::ostream &operator<<(std::ostream &o, const Tester &t)
{
    o << "Ку!";
    return o;
}

int main()
{
    const std::array x = {3, 2, 1};
    const std::array y = {std::string{"hello "}, std::string{"world!"}};
    const std::array z = {Tester(), Tester(), Tester()};

    PrintArray(x); // > 3 2 1
    PrintArray(y); // > hello world!
    std::cout << "\n";
    PrintArray(z); // > hello world!
}