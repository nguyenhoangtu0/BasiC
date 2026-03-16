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
void somax(int a[][20],int n,int m)
{int Max,vtdong=0,vtcot=0;
    for(int i=0;i<n;i++)
        {for(int j=0;j<m;j++)
            {if(a[i][j]>Max)
                Max=a[i][j];
                vtdong=i;
                vtcot=j;}}
cout<<"phan tu lon nhat: "<<Max<<" a["<<vtdong<<"]["<<vtcot<<"]";

}
int doixung(int a[][20],int n,int m)
{
    for(int i =1;i<n-1;i++)
        for(int j=0;j<n;j++)
            if(a[i][j]!=a[j][i])
                return 0;
    return 1;

}
int main()
{int n,m,a[20][20];
    cout<<"nhap so dong :";cin>>n;
    cout<<"nhap so cot :";cin>>m;
    nhap(a,n,m);
    xuat(a,n,m);
    somax(a,n,m);
    cout<<endl;
    if(doixung(a,n,m)==1)
        cout<<"ma tran doi xung";
    else
        cout<<"ma tran khong doi xung";
}
