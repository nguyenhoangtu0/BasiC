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
int tong(int a[][20],int n,int m)
{int s;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(a[j][j]>0)
                s+=a[i][j];

        return s;
}
int kiemtra(int a[][20],int n,int m)
{
    int sodong=0;
    for(int i=0;i<n;i++)
        {int dem=0;
            for(int j=0;j<m-1;j++)
                if(a[j][j]<a[i][j+1])
                dem++;

    if(dem ==m-1)
        sodong++;}
    return sodong;
}
int main()
{
    int n,m,a[20][20] ;
    cout<<"nhap so hang: ";cin>>n;
    cout<<"nhap so cot : ";cin>>m;
    nhap(a,n,m);
    xuat(a,n,m);
    cout<<"tong duong la: "<< tong(a,n,m);
    cout<<"so dong co day so tang dan: "<<kiemtra(a,n,m);
}
