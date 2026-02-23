#include<bits/stdc++.h>
using namespace std;
int kiemtrascp(int);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     freopen("ten.INP","r",stdin);
    freopen("ten.OUT","w",stdout);
int n;
int tong=0;
    do
    {
        cin>>n;
        if(kiemtrascp(n)==1)
            tong+=n;
    }
    while(n!=0);
    cout<<tong;
}
kiemtrascp(int n)
{
    if((int)sqrt(n)==sqrt(n))
        return 1;
    else
        return 0;

}
