#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,tong,i;
cout<<"nhap n: ";cin>>n;
tong=0;
for(i=1;i<n;i++)
{
    if(n%i==0)
        tong+=i;
}
if(n==tong)
    cout<<n<<" la so hoan hao"<<endl;
else
    cout<<n<<" khong la so hoan hao"<<endl;
}
