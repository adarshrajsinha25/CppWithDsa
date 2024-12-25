#include<iostream>
using namespace std;

int main()
{
    int i=0; 
    int n;
    int sum=0;

    cout<<"enter the value of n:"<<endl;
    cin>>n;
    while(i<n)
    { 
      
      i=i+2;
      sum=sum+i;
    }
    cout<<sum<<endl;
}