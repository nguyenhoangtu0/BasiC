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
int maxdong(int a[][20],int m,int i)
{
    int max=a[i][0];
    for(int j=0;j<m;j++)
        if(a[i][j]>max)
            max= a[i][j];
    return max;
}
int mincot(int a[][20],int n,int j)
{
    int min=a[0][j];
    for(int i=0;i<n;i++)
        if(a[i][j]<min)
            min=a[i][j];
    return min;
}
int main()
{
    int n,m,a[20][20],i,j;
    cout<<"nhap so dong";cin>>n;
    cout<<"nhap so cot";cin>>m;
    nhap(a,n,m);
    xuat(a,n,m);
    cout<<"cac phan tu max dong va min cot la";
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(a[i][j]==maxdong(a,m,i) && a[i][j]==mincot(a,n,j))
    cout<<"a["<<i<<"]["<<j<<"]"<<a[i][j];


}
