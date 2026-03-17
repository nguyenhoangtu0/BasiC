#include<bits/stdc++.h>
using namespace std;
void nhap(int a[][20],int n,int m)
{
    for(int i =0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
}
void xuat(int a[][20],int n,int m)
{
     for(int i =0;i<n;i++)
        {for(int j=0;j<m;j++)
            cout<<" "<<a[i][j];
             cout<<endl;   }
}
void xaydungb(int a[][20],int n,int m,int b[])
{
    for(int i=0;i<n;i++)
        {int tong=0;
            for(int j=0;j<m;j++)
            tong+=a[i][j];
            b[i]=tong;
            cout<<"tong="<<tong<<endl;
            }
}
void timminmax(int b[],int n,int &vtmax,int &vtmin,int &gtmax,int &gtmin)
{
    gtmax=b[0];gtmin=b[0];
    vtmax=0;vtmin=0;
    for(int i=0;i<n;i++)
    {
        if(gtmax<b[i])
        {gtmax=b[i];
            vtmax=i;
        }
            if(gtmin>b[i])
        {gtmin=b[i];
            vtmin=i;
        }
    }
}
int main()
{
    int n,m,a[20][20],b[50];
    int vtmax,vtmin,gtmax,gtmin;
    cout<<"nhap so dong";cin>>n;
    cout<<"nhap so cot";cin>>m;
    nhap(a,n,m);
    xuat(a,n,m);
    xaydungb(a,n,m,b);
    timminmax(b,n,vtmax,vtmin,gtmax,gtmin);
    cout<<"dong co tong lon nhat"<<vtmax<<endl;
    cout<<"dong co tong be nhat"<<vtmin<<endl;
    cout<<"tong lon nhat"<<gtmax<<endl;
    cout<<"tong be nhat"<<gtmin<<endl;
}
