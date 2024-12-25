#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i = 0;
    while(i < n)
    {
        int j = 0;
        while(j<=i)
        {
            char ch = 'A' + i;
            cout<<ch;
            j = j + 1;
            
        }
        cout<<endl;
        i = i + 1;
    }


}