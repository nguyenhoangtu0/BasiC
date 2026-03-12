#include<bits/stdc++.h>
using namespace std;
void nhap(int a[], int n)
{
    for(int i=0;i< n*n;i++)
        a[i]=rand()%41+10;
}
void xuat(int a[],int n)
{
    for(int i=0;i<n;i++)
    {for(int j=0;j<n;j++)
        cout<<" "<<a[i*n+j];
    cout<<endl;
    }
}
void sapxep(int a[],int n)
{
    for(int i=0;i<n*n-1;i++)
        for(int j=i+1;j<n*n;j++)
            if(a[i]>a[j])
            {
                int tam=a[i];
                a[i]=a[j];
                a[j]=tam;
            }
}
void chuyen(int a[],int b[][50],int n)
{int i=0,j=0,k=0,l=0,tam;
    while(i<n*n)
    {
        for(j=l;j<n-l;j++)
            b[l][j]=a[i++];
        for( k=l+1;k<n-l;k++)
            b[k][n-l-1]=a[i++];
        for(j=n-l-2;j>=l;j--)
            b[n-l-1][j]=a[i++];
        for(k=n-l-2;k>l;k--)
            b[k][l]=a[i++];
        l++;
    }
}
void xuatmt(int b[][50],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<" "<<b[i][j];
        cout<<endl;
    }
}
int main()
{
    int n,a[400],b[50][50];
    cout<<"nhap so cap cua mang :";
    do
    {
        cin>>n;
        if(n<=1)
            cout<<"nhap sai roi"<<endl;
    }
    while(n<=1);
    nhap(a,n);
    xuat(a,n);
    cout<<"ma tran sau khi sap xep"<<endl;
    sapxep(a,n);
    chuyen(a,b,n);
    xuatmt(b,n);


}



