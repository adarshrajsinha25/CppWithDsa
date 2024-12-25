
#include<iostream>
using namespace std;

void f(int i, int prod)
{

if(i<1)
{
    cout<<prod;
    return;
}
f(i-1, prod*i);
}

int main()
{
    int n;
    cout<<"enter the value of n;"<<endl;
    cin>>n;
    f(n,1);
    
}