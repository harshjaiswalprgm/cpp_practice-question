#include<iostream>
using namespace std;
int main(){
    int n, i, f;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    f=n;
    for(int i=1; i<n; i++){
        cout<<f<<"*"<<i<<"=";
       f=f*i;
       cout<<f<<endl;
    }
     cout<<"factorial is :"<<f<<endl;
    return 0;
}