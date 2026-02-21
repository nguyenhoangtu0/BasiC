#include<bits/stdc++.h>
using namespace std;
int snt(int n);
int tongsnt(int n);
void xuatsnt(int n);
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(0);
     freopen("ten.INP","r",stdin);
    freopen("ten.OUT","w",stdout);

    int n;
    cin>>n;
    xuatsnt(n);
    cout<<endl;
    cout<<tongsnt(n);
}
int snt(int n)
{
    int dem=0;
    for(int i=1;i<=n;i++)
    if(n%i==0)dem++;
    if(dem==2)
        return 1;
    else
        return 0;
}
void xuatsnt(int n)
{
    for(int i=0;i<=n;i++)
        if(snt(i)==1)
        cout<<" "<<i;
}
tongsnt(int n)
{int tong=0;
    for(int i=1;i<=n;i++)
    if(snt(i)==1)
    tong+=i;
    return tong;

}
