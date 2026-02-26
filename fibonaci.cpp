#include<bits/stdc++.h>
using namespace std;
long fibonaci(unsigned int n)
{
    if(n==0 || n==1)
        return 1;
    return fibonaci(n-1)+fibonaci(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonaci(n);
}
