#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i = 1;
    while(i <= n)
    {
      int j = 0;
      char ch = 'A';
      while(j<n)
      { 
        
        cout<< ch;
        j = j + 1;
        ch = 'A' + j;
      }
      cout<<endl;
      i = i + 1;
    }
   

}