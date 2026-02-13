#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,tong =0;
int i=0;
cout<<"nhap so nguyen n: ";cin>>n;
tinh:tong+=i;
i++;
if(i<=n)
    goto tinh ;
cout<<"1+2+..."<<n<<"="<<tong;

}
