#include<iostream>
using namespace std;
int main()
{
int n,pass;
n=5;
for(int i=0;i<=n;i++)
{cout << "nhập mật khẩu";cin>>pass ;
if(pass==1)
break;
cout << "bạn nhập sai r" << endl;
}
}
