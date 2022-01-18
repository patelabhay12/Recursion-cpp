// factorial of a number Using recursion function 

#include<bits/stdc++.h>
using namespace std;

int fact(int);
int fact(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        return fact(num-1)*num;
    }
}
int main()
{
    int num;
    cout<<"Enter your Number "<<endl;
    cin>>num;
    cout<<"Factorial of "<<num<<" is = "<<fact(num)<<endl;

    return 0;

}