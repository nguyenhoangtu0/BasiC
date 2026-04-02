#include<bits/stdc++.h>
using namespace std;
void chuoicon(char *st1,char *st2)
{
    if(strstr(st1,st2))
        cout<<"\nchuoi 2 la con chuoi 1";
    else
        cout<<"\nchuoi 2 khong la con chuoi 1";
}
void chenchuoicon(char *st1,char *st2)
{
    char *s;
    st1=strcat(st1," ");
    s=strcat(st1,st2);
    puts(s);

}
int main()
{
    char st1[100],st2[100];
    cout<<"nhap chuoi 1:";gets(st1);
    cout<<"nhap chuoi 2:";gets(st2);
    chuoicon(st1,st2);
    cout<<"\nchuoi sau khi chen: "<<endl;
    chenchuoicon(st1,st2);

}
