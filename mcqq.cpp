// #include <iostream>
// #include<string.h>
// using namespace std;

// int main(){
//     try{
//         char *p;
//         strcpy(p, "How are you?");
//     }
//     catch(const exception& er){
//     }
// }





#include <iostream>  
using namespace std;  
int main()  
{  
int n,sum=0,m;    
cout<<"Enter a number: ";    
cin>>n;    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
string str="invalid input";
int num;
try{
    if(num<100 && num>999)
        throw str;
cout<<"Sum is= "<<sum<<endl;
}    
catch (string str){
    cout<<str;
}
return 0;  
}  


