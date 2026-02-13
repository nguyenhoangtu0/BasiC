#include<iostream>
using namespace std;
int main()
{
int i,n,sum=0;
cout << "nhập số nguyên n: "; cin>>n;
i=0;
while(i<=n)
{
sum+=i;
i++;
}
cout << "tổng= " << sum<<endl;
}
