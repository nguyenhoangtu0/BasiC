#include<bits/stdc++.h>
using namespace std;
int main()
{
int ng,t,n;
int flag;
cout<<"nhap ngay: ",cin>>ng;
cout<<"nhap thang: ",cin>>t;
cout<<"nhap nam: ",cin>>n;
switch(t)
{
case 1:
    case 3:if(n<=31)flag=1 ;break;
    case 5:if(n<=31)flag=1 ;break;
    case 7:if(n<=31)flag=1 ;break;
    case 8:if(n<=31)flag=1 ;break;
    case 10:if(n<=31)flag=1 ;break;
    case 12:if(n<=31)flag=1 ;break;
    case 4:if(n<=30)flag=1; break;
    case 6:if(n<=30)flag=1; break;
    case 9:if(n<=30)flag=1; break;
    case 11:if(n<=30)flag=1; break;
    case 2 :
				if((((n%4==0)&&(n%100!=0)) || (n%400==0)) && (ng<=29)) flag = 1 ;
				if(ng<=28) flag = 1 ; break ;

    default: cout<<"nhap sai"<<endl;
}
 if (flag == 1)
    {
		cout <<"Ngay nay hop le"<<endl;
		if(((n%4==0)&&(n%100!=0)) || (n%400==0))
    		cout <<"Nhuan"<<endl;
		else
			cout <<"Khong nhuan"<<endl;
	}
	else
		cout <<"Ngay nay khong hop le"<<endl;
}
