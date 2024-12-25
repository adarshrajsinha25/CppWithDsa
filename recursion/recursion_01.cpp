#include<iostream>
using namespace std;

void f(int i, int j, int n)
{
    if(i>n/2)
    return;
   
    cout<<i;
    cout<<j;
    
    f(i+1, j+1, n);
    
}
int main()
{
    int n = 9;
    f(2,7, n);
}