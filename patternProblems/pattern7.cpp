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
    int count = i;
    int j = 1;

    while(j <= i)
    {
        cout<<count;
        j = j + 1;
        count = count + 1;

    }
    cout<<endl;
    i = i + 1;

    }

}