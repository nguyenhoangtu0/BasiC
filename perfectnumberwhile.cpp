
#include<iostream>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
freopen("ten.INP","r",stdin);
freopen("ten.OUT","w",stdout);
int n,tong=0;
cout<<"nhap n: ";cin>>n;
int i=1;
while(i<n)
{
    if(n%i==0)
        tong+=i;
    i++;
}
if(n==tong)
    cout<<n<<" la so hoan hao";
else
cout<<n<<" khong la so hoan hao";

}
