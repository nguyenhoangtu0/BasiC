    #include<bits/stdc++.h>
    using namespace std;
    int f1(int n)
    {
        float kq=0;
        for(int i=0;i<=n;i++)
            kq+=i;
        return kq;
    }
    int f2(int n)
    {
        float kq=0;
        for(int i=0;i<=n;i++)
            if(i%2==1)
            kq+=i;
        return kq;
    }
    float f3(int n)
    {
        float kq=0;
        for(int i=1;i<=n;i++)
            kq+= (float)1/i;
        return kq;
    }
    float f4(int n)
    {
        float kq=0;
        for(int i=1;i<=n;i++)
        if(i%2==1)
            kq+= (float)1/i;
        else
            kq-= (float)1/i;

        return kq;
    }
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
         freopen("ten.INP","r",stdin);
        freopen("ten.OUT","w",stdout);
    int n;
    cin>>n;
    cout<< f1(n);
    cout<<endl;
    cout<< f2(n);
    cout<<endl;
    cout<<f3(n);
    cout<<endl;
    cout<<f4(n);

    }
