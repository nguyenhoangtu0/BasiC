#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(0);
     freopen("ten.INP","r",stdin);
    freopen("ten.OUT","w",stdout);

int m, n, ucln,bcnn,tich;
    cin>>n>>m;
    tich=m*n;
    while(n!=0 && m!=0)
    {
        if(n>m)
            n-=m;
        else
            m-=n;
    }
    if(n==0)
        ucln=m;
    else
        ucln=n;
         bcnn=tich/ucln;
        cout<<ucln<<" la ucln \n";
        cout<<bcnn<<" la bcnn";
}
