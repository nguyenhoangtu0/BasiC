#include<bits/stdc++.h>
using namespace std;
void dem(char st[100],int l)
{
    int dem1=0, dem2=0,dem3=0;
    for(int i=0;i<l;i++)
    {
        if(islower(st[i]))
            dem1++;
        if(isupper(st[i]))
            dem2++;
        if(isalpha(st[i])==0)
            dem3++;
    }
    cout<<"so ky tu thuong: "<<dem1<<endl;
    cout<<"so ky hoa : "<<dem2<<endl;
    cout<<"so ky tu dac biet : "<<dem3<<endl;
}int main()
{
    char st[100];
    cout<<"nhap chuoi:";
    gets(st);
    int l=strlen(st);
    dem(st,l);
}
