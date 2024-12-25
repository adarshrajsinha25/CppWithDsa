#include<iostream>
using namespace std;

void f(int i, int sum, int n)
{
    if(i>n)
    {
        cout<<sum;
        return;
    }
    f(i+1, sum+i,n);
}
int main()
{
    int n;
    cout<<"enter the value of N:"<<endl;
    cin>>n;
    
    f(1,0,n);
}