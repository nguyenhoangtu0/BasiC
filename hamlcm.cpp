#include<bits/stdc++.h>
using namespace std;
int ucln(int,int);
int bcnn(int,int);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     freopen("ten.INP","r",stdin);
    freopen("ten.OUT","w",stdout);

    int m,n,bcnn;
    cin>>m>>n;
    bcnn=m*n/ucln(m,n);
    cout<<endl;
    cout<<bcnn;
}
ucln(int m,int n )
{
    while(n!=0 && m!=0)
    {
        if(n>m)
            n-=m;
        else
            m-=n;
    }
    if(n==0)
        return m;
    else
        return n;
}
bcnn(int m,int n)
{
    return m*n/ucln(m,n);
}
