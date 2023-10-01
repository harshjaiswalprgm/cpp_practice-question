/*Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.*/#include<iostream>
using namespace std;
int main(){
    int radius;
            //Area = πr²
            //Perimeter = 2πr
  
    cout<<"Enter radius of circle: "<<endl;
      cin>>radius;
      cout<<"perimeter is: "<<2*3.14*radius<<endl;
      cout<<"area is: "<<radius*3.14*radius<<endl;
    return 0;
}