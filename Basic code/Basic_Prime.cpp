#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    int i = 2;

    while(i<n)
    { 
       if(n%i==0)
       {
        cout<<"the number is not a prime number"<<endl;
       } 
       else{
        cout<<"this is a prime number"<<endl;
       }
      i=i+1;
    }
}
