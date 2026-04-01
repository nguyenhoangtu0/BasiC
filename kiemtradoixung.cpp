#include<bits/stdc++.h>
using namespace std;
int kiemtradoixung(char st[100], int l)
{
    int kq=1;
    for(int i=0;i<l/2;i++)
    {
        if(st[i]!=st[l-i-1])
            {
                kq=0;
                break;
            }

    }
    return kq;
}
int main()
{
    char st[100];
    int l;
    gets(st);
    l=strlen(st);
    kiemtradoixung(st,l);
    if(kiemtradoixung(st,l)==1)
        cout<<"day doi xung"<<endl;
    if(kiemtradoixung(st,l)==0)
        cout<<"day khong doi xung"<<endl;
}
