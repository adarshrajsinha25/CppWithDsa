#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;

    int i = 0;
    while(i<n)
    {
        int j = 0;
        while(j<=i)
        {
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }

}