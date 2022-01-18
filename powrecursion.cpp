// Calculating Power of a number using recursion m^n

#include<bits/stdc++.h>
using namespace std;

int power1(int);
int pow(int);
//Method First 
int power1(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else{

        return power1(m,n-1)*m;
    }
}
//method Second 
int pow(int m, int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return pow(m*m,n/2);
    }
    else
    {
        return m*pow(m*m,(n-1)/2);
    }
}


int main()
{
    int m,n;
    cout<<"Enter your Number "<<endl;
    cin>>m;
    cout<<"Enter how much power you want in "<<endl;
    cin>>n;
    cout<<"Power of Number is = "<<pow(m,n);
    return 0;
}
