#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;

    
    int value = 1;
    int i= 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {   
            char ch = 'A' + value-1;
            cout<<ch;
            value = value + 1;
            j = j +1;

        }
        cout<<endl;
        i = i + 1;
        
    }


}