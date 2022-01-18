// Taylar Series Using Recursion

#include<bits/stdc++.h>
using namespace std;

int e(int,int);
int e(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;

    }
}
int main()
{
    double n,x;
    cout<<"Enter your Number "<<endl;
    cin>>n;
    cout<<"Enter your x "<<endl;
    cin>>x;
    cout<<"Taylar series is = "<<e(4,15);
    return 0;
}