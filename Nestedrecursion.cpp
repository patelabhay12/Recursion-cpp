//Nested recursion 
#include<iostream>
using namespace std;

int  fun(int);
int fun(int num)
 {
     if(num>100){
         return (num-10);
     }
     else
     {
         return fun(fun(num+11));

     }
 }

int main()
 {
     int num;
     cout<<"Enter your Number :"<<endl;
     cin>>num;
     cout<<"Number is :"<<endl;
     cout<<fun(num)<<endl;

     return 0;

 }