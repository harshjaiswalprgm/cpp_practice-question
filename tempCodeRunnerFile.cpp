
int main() {
    Base* b = new Derived();
    delete b;
    return 0;
}

#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Creating Base object." << std::endl;
    }

    ~Base() {
        std::cout << "Destroying Base object." << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Creating Derived object." << std::endl;
    }

    ~Derived() {
        std::cout << "Destroying Derived object." << std::endl;
    }
};

int main() {
    Derived d;
    return 0;
}
