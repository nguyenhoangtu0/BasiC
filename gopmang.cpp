#include<iostream>
using namespace std;
void NhapMang(int a[ ], int &n,char ch)
{
	cout <<"Nhap so phan tu cua mang: ";
	cin >>n;
	for (int i=0;i<n;i++)
	{
		cout <<ch<<"["<<i<<"]=";
		cin >> a[i];
	}
}
void XuatMang(int a[ ], int n)
{
	cout <<"Mang vua nhap:"<<endl;
	for(int i=0;i<n; i++)
		cout <<"   "<<a[i]<<endl;
}
void gxk(int a[],int b[],int c[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        c[j++]=a[i];
        c[j++]=b[i];
    }
}
int main()
{
	int a[20],b[20],c[40],n;
	NhapMang(a,n,'A');
	XuatMang(a,n);
    NhapMang(b,n,'B');
	XuatMang(b,n);
	gxk(a,b,c,n);
	XuatMang(c,2*n);

}
