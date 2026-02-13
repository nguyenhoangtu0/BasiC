#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(0);
     freopen("ten.INP","r",stdin);
    freopen("ten.OUT","w",stdout);


    int i,n;
    cin>>n;
    for(int k ;k<=n;k++)
    {
    int dem=0;
    for(int i=1;i<=k;i++)
        if(k%i==0)dem++;
    if(dem==2)
        cout<<k<<" ";
    //else
    //cout<<n<<" khong la snt";
    }
}
