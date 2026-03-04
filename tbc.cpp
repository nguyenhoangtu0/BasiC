#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int &n)
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void xuat(int a[],int &n)
{
	cout <<"Mang vua nhap:"<<endl;
	for(int i=0;i<n; i++)
		cout <<"   "<<a[i]<<endl;
}
void tbc(int a[],int n,float &duongtbc,float &amtbc)
{
    int demduong=0,tongduong=0;
    int demam,tongam;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            {demduong++;
            tongduong+=a[i];
            }
        if(a[i]<0)
        {
            demam++;
            tongam+=a[i];
        }
    }
    duongtbc=(float)tongduong/demam;
    amtbc=(float)tongam/demam;
}
int main()
{
    int n;
    int i;
    int a[20];
    nhap(a,n);
    xuat(a,n);
    float duong,am;
    tbc(a,n,duong,am);
    cout<<"tbc duong= "<<duong<<endl;
    cout<<"tbc am= "<<am<<endl;
}
