#include <iostream>

class Parent
{
public:
    const char* getName() { return "Parent"; }
};

class Child : public Parent
{
public:
    const char* getName() { return "Child"; }
};

int main()
{
    Child child;
    Parent& rParent = child;
    std::cout << "rParent is a " << rParent.getName() << '\n';
}