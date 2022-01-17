// Tree recursion 
#include<iostream>
using namespace std;
void func(int);
void func(int num)
{
    if(num>0)
    {
        cout<<num<<endl;
        func(num-1);
        func(num-1);
    }
}
int main()
{
    int num;
    cout<<"Enter your Number :"<<endl;
    cin>>num;
    cout<<"Ouput Are :"<<endl;
    func(num);
    return 0;
}