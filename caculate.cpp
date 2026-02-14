#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(0);
     freopen("ten.INP","r",stdin);
    freopen("ten.OUT","w",stdout);

int x,y,z,dem;
dem=0;
for(x=1;x<=135;x++)
    for(y=1;y<=135;y++)
       for(z=1;z<=135;z++)
           if(3*x+5*y+7*z==135)
             {cout<<"(x,y,z)= "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
             dem++;}
             cout<<"tong so bo la: "<<dem;
}
