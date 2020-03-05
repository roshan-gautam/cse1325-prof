#include <iostream>

class Base {
  public:
    // void virtual test() {std::cout << "Base" << std::endl;}
    virtual void test() {std::cout << "Base" << std::endl;}
};

class Derived : public Base {
  public:
    void test() {std::cout << "Derived" << std::endl;}
};

int main() {
  Base *b = new Derived{ };
  b->test();
}

