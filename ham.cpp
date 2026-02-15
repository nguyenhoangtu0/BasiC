#include <iostream>
int sln(int a,int b);
using namespace std;
int tinhtong(int a ,int b);
int main()
{
    int x1,x2,y1,y2,z1,z2;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     freopen("ten.INP","r",stdin);
    freopen("ten.OUT","w",stdout);
   cin>>x1>>x2>>y1>>y2>>z1>>z2;
    z1=tinhtong(x1,x2);
    z2=tinhtong(y1,y2);
    cout<<z1<<endl;
    cout<<z2<<endl;
    z1=sln(x1,x2);
    z2=sln(y1,y2);
    cout<<z1<<endl;
    cout<<z2<<endl;
    int max=sln(z1,z2);
    cout<<max;

}
int tinhtong(int a,int b)
{
    return a+b;
}
int sln(int a,int b)
{
    return (a>b)?a:b;
}
