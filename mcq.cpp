// #include <iostream>

// class Fraction
// {
// public:
//     int numerator;
//     int denominator;

//     Fraction(int n, int d) : numerator(n), denominator(d) {}

//     Fraction operator+(const Fraction &other) const
//     {
//         int newNumerator = (numerator * other.denominator) + (other.numerator * denominator);
//         int newDenominator = denominator * other.denominator;
//         return Fraction(newNumerator, newDenominator);
//     }
// };

// int main()
// {
//     Fraction f1(1, 2);
//     Fraction f2(2, 3);

//     Fraction result = f1 + f2;
//     std::cout << result.numerator << "/" << result.denominator;

//     return 0;
// }

// #include <iostream>

// class MyClass {
// public:
//     explicit operator int() {
//         return data;
//     }

// private:
//     int data = 5;
// };

// void printInt(int num) {
//     std::cout << num;
// }

// int main() {
//     MyClass obj;
//    printInt(int(obj)); // Line X
//     return 0;
// }

// // // printInt(int(obj()));

// // // printInt(static_cast<int>(obj));

// // // printInt(int(obj));

// // // printInt(obj.int());

// #include <iostream>

// class MyClass {
// public:
//     MyClass(char character) : data(character) {}

//     char getData() const {
//         return data;
//     }

// private:
//     char data;
// };

// int main() {
//     MyClass obj = MyClass('A');
//     //Missing line
//     std::cout << ch;
//     return 0;
// }

// #include <iostream>

// class MyClass {
// public:
//     explicit MyClass(int value) : data(value) {}

//     int getData() const {
//         return data;
//     }

// private:
//     int data;
// };

// int main() {
//     int num = 15;
//     //Missing line
//      MyClass obj(num); // Missing line
//     std::cout << obj.getData();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class student {
// public:
//     int rno, m1, m2;
//     void get() {
//         rno = 15;
//         m1 = 10;
//         m2 = 10;
//     }
// };

// // class sports {
// // public:
// //     int sm;
// //     void getsm() {
// //         sm = 10;
// //     }
// // };

// // class statement : public student, public sports {
// //     int tot, avg;
// // public:
// //     void display() {
// //         tot = (m1 + m2 + sm);
// //         avg = tot / 3;
// //         cout << "Total marks: " << tot << endl;
// //         cout << "Average marks: " << avg << endl;
// //     }
// // };

// // int main() {
// //     statement obj;
// //     obj.get();
// //     obj.getsm();
// //     obj.display();
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// class A {
// public:
//     A(int n) {
//         cout << n;
//     }
// };

// class B : public A {
// public:
//     B(int n, double d) : A(n) {
//         cout << d;
//     }
// };

// class C : public B {
// public:
//     C(int n, double d, char ch) : B(n, d) {
//         cout << ch;
//     }
// };

// int main() {
//     C c(5, 4.3, 'R');
//     return 0;
// }

// // #include <iostream>
// // using namespace std;
// // class BaseClass
// // {
// //     int i;
// //     public:
// //     void setInt(int n);
// //     int getInt( );
// // };
// // class DerivedClass : public BaseClass
// // {
// //     int j;
// //     public:
// //     void setJ(int n);
// //     int mul( );
// // };
// // void BaseClass::setInt(int n)
// // {
// //     i = n;
// // }
// // int BaseClass::getInt()
// // {
// //     return i;
// // }
// // void DerivedClass::setJ(int n)
// // {
// //     j = n;
// // }
// // int DerivedClass::mul( )
// // {
// //     return j * getInt( );
// // }
// // int main() {
// //     DerivedClass ob;
// //     ob.setInt(10);
// //     ob.setJ(4);
// //     cout << ob.mul( );
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // class BaseClass{
// //     int x;
// //     public:
// //     void setx(int n){
// //     x = n;
// //     }
// //     void showx(){
// //         cout << x ;
// //     }
// // };

// // class DerivedClass : private BaseClass{
// //     int y;
// //     public:
// //     void setxy(int n, int m){
// //         setx(n);
// //         y = m;
// //     }

// //     void showxy(){
// //         showx();
// //         cout << y << '\n';
// //     }
// // };

// // int main(){
// //     DerivedClass ob;
// //     ob.setxy(10, 20);
// //     ob.showxy( );
// //     return 0;
// // }

// // #include <iostream>

// // using namespace std;

// // class Component {
// // public:
// //     virtual void traverse() = 0;
// // };

// // class Leaf : public Component {
// //     int value;
// // public:
// //     Leaf(int val) {
// //         value = val;
// //     }

// //     void traverse() {
// //         cout << value << ' ';
// //     }
// // };

// // class Composite : public Component {
// //     Component* children[3];
// //     int size;
// // public:
// //     Composite() {
// //         size = 0;
// //     }

// //     void add(Component* ele) {
// //         if (size < 3) {
// //             children[size++] = ele;
// //         }
// //     }

// //     void traverse() {
// //         for (int i = 0; i < size; i++)
// //             children[i]->traverse();
// //     }
// // };

// // int main() {
// //     Composite containers[4];

// //     for (int i = 0; i < 4; i++) {
// //         for (int j = 0; j < 3; j++) {
// //             containers[i].add(new Leaf(i * 3 + j));
// //         }
// //     }

// //     for (int k = 1; k < 4; k++) {
// //         containers[0].add(&(containers[k]));
// //     }

// //     for (int p = 0; p < 4; p++) {
// //         containers[p].traverse();
// //     }

// //     return 0;
// // }

// #include <iostream>

// class Base {
// public:
//     Base() {
//         std::cout << "Base Constructor" << std::endl;
//     }

//     ~Base() {
//         std::cout << "Base Destructor" << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     Derived() {
//         std::cout << "Derived Constructor" << std::endl;
//     }

//     ~Derived() {
//         std::cout << "Derived Destructor" << std::endl;
//     }
// };

// class AnotherDerived : public Derived {
// public:
//     AnotherDerived() {
//         std::cout << "AnotherDerived Constructor" << std::endl;
//     }

//     ~AnotherDerived() {
//         std::cout << "AnotherDerived Destructor" << std::endl;
//     }
// };

// int main() {
//     AnotherDerived obj;
//     return 0;
// }

// // #include <iostream>

// // class Base {
// // public:
// //     Base() {
// //         std::cout << "Base constructor called." << std::endl;
// //     }

// //     ~Base() {
// //         std::cout << "Base destructor called." << std::endl;
// //     }
// // };

// // class Derived : public Base {
// // public:
// //     Derived() {
// //         std::cout << "Derived constructor called." << std::endl;
// //     }

// //     ~Derived() {
// //         std::cout << "Derived destructor called." << std::endl;
// //     }
// // };

// int main() {
//     Base* b = new Derived();
//     delete b;
//     return 0;
// }

// #include <iostream>

// class Base {
// public:
//     Base() {
//         std::cout << "Creating Base object." << std::endl;
//     }

//     ~Base() {
//         std::cout << "Destroying Base object." << std::endl;
//     }
// };

// class Derived : public Base {
// public:
//     Derived() {
//         std::cout << "Creating Derived object." << std::endl;
//     }

//     ~Derived() {
//         std::cout << "Destroying Derived object." << std::endl;
//     }
// };

// int main() {
//     Derived d;
//     return 0;
// }

#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base Constructor" << std::endl;
    }

    ~Base() {
        std::cout << "Base Destructor" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived Constructor" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};

int main() {
    Derived obj;
    return 0;
}