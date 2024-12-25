#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int count = 0;
    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while (j <= n)
        {
          char ch = 'A' + count;
          cout<< ch;
          count = count + 1;
          j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}