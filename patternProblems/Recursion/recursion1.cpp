#include<iostream>
using namesapce std;

void f(int l, int r)
{
    if(l>=r)
    {
        return;
    }
    else{
        swap(l,r);
        f(l+1, r-1);
    }
}

int main()
{

}
