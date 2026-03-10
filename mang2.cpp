#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int &n)
{
    cout<<"nhap kich thuoc mang: ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void xuat(int a[], int n)
{
    cout<<"mang vua nhap:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}
int timphantu(int a[],int &n,int x)
{
    int dem=0;
    for(int i=0;i<n;i++)
        if(a[i]==x)
            dem++;
    return dem;
}
void chenphantu(int a[],int &n,int x)
{
    int i,j,p  ;
	for(i=0;i<n;i++)
		if(a[i]>=x) p=i-2 ;
	for(j=n-1;j>=p;j--)
		a[j+1]=a[j];
	a[p]=x;
	n++;
}

int main()
{
    int n, a[100],x,dem;
    nhap(a,n);
    xuat(a,n);
    cout<<"nhap gia tri phan tu can tim: ";
    cin>>x;
    dem=timphantu(a,n,x);
    if(dem!=0)
        cout<<x<<"xuat hien "<<dem<<" lan trong mang\n";
    else
    {
       cout <<x<<" khong xuat hien trong mang\n";
		cout <<"Chen "<<x<<" vao mang\n";
		chenphantu(a,n,x);
		xuat(a,n);
    }
}
