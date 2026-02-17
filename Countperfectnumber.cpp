#include<iostream>
using namespace std;
int sohoanhao(int n);
int main()
{
int n,i;
cout << "nhập n: " ;cin>>n;
for( i=1;i<n;i++)
{
if(sohoanhao(i)==1)
cout << " " << i<<endl;
}
}
int sohoanhao(int n)
{

int tong=0;
for(int i=1;i<n;i++)
if(n%i==0)tong+=i;
if(tong==n)
return 1;
else 
return 0;
}
