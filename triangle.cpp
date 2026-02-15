#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     freopen("ten.INP","r",stdin);
    freopen("ten.OUT","w",stdout);
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
        cout<<" "<<"*";
        cout<<endl;}
        cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        cout<<" "<<"*";
    cout<<endl;

    }
    cout<<endl;
 for(i=0;i<n;i++)
 {
     for(j=0;j<n-i;j++)
     cout<<" "<<"*";
    cout<<endl;

 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<n-i-1;j++)
        cout<<"  ";
        for(j=0;j<2*i+1;j++)
            cout<<" "<<"*";
     cout<<endl;
 }
}
