//Sum Of N Natural Number Using recursion In CPP
#include<iostream>
using namespace std;

int sumOFN(int);

int sumOFN(int num)
{
    if(num==0 or num==1)
    {
        return 1;

    }
    else
    {
        return sumOFN(num-1)+num;
    }
}

int main()
{
    int num;
    cout<<"Enter your number till where you want to find Sum :"<<endl;
    cin>>num;
    cout<<"Sum of Number is :"<<sumOFN(num) <<endl;
}
