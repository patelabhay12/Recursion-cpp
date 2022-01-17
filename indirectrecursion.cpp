//Indirect recursion 

#include<iostream>
using namespace std;

void funA(int);
void funB(int);

void funA(int num)
{
    if(num>0)
    {
        cout<<num<<endl;
        funB(num-1);
    }
}
void funB(int num)
{
    if(num>0)
    {
        cout<<num<<endl;
        funA(num/2);
    }
}

int main()
{
    int num;
    cout<<"Enter your Number :"<<endl;
    cin>>num;
    cout<<"Numbers Are :"<<endl;
    funA(num);
    return 0;

}