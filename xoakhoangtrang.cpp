#include<bits/stdc++.h>
using namespace std;
int demkhoangtrang(char st[100],int l)
{
    int dem=0;
    for(int i=0;i<l;i++)
    {
        if(st[i]==' ')
            dem++;
    }
    return dem;
}
void xoakhoangtrang(char st[100],int &l)
{int i;
    while (st[0]==' ')
        strcpy(st,st+1);
    l=strlen(st);
    while(st[l-1]==' ')
        {strcpy(st+l-1,st+l);
        l--;}
    i=0;
    while(st[i]!='\0')
    {
        if(st[i]==' ')
            if(st[i+1]==' ')
        {
            strcpy(st+i,st+i+1);
            i--;
            l--;
        }
        else
            i++;
        i++;
    }


}
int main()
{int l;
char st[100];
cout<<"nhap chuoi: ";
gets(st);
l=strlen(st);
cout<<"so khoang trang: "<<demkhoangtrang(st,l);
xoakhoangtrang(st,l);
cout<<"chuoi sau khi chinh lai: "<<endl;
puts(st);
}
