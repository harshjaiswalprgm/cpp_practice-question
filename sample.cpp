// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     try{

// // //     throw;}
// // //     catch(int a){

// // //     };
// // //     cout<<"hello my name is harsh"<<endl;
// // //     cout<<"hii"<<endl;
// // //     cout<<endl;
    
// // //     return 0;
// // // }

// // #include <iostream>

// // using namespace std;

// // class A {
// // public:
// //     int value;

// //     A(int val) {
// //         value = val;
// //         cout << value << " ";
// //     }

// //     ~A() {
// //         cout << "A_Over";
// //     }
// // };

// // class B : protected A {
// // public:
// //     B(int val) : A(val) {
// //         perform();
// //         cout << value << " I r ";
// //     }

// //     ~B() {
// //         cout << "B_Over";
// //     }

// //     int perform() {
// //         int r = value;



// //         return r;
// //     }
// // };

// // int main() {
// //     B obj(13);
// //     return 0;
// // }



// #include <iostream>

// using namespace std;

// class Cricket {
// public:
//     void func() { cout << "Hello"; }
//     void print() { cout << "Cricket"; }
// };

// class Bat : public Cricket {
// public:
//     void print() {
//         Cricket::func();
//         Cricket::print();
//     }
// };

// int main() {
//     Bat obj;

//     Cricket* ptr = &obj;
//     ptr->print();

//     obj.print();

//     return 0;
// }






#include <iostream>

using namespace std;

int main() {
    int* data = new int[5];

    for (int i = 0; i < 5; i++) {
        data[i] = i * 3 + 2;
    }

    delete[] data;

    cout << data[2];

    return 0;
}