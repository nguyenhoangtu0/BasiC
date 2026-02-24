    #include<bits/stdc++.h>
    using namespace std;
   int KiemTraSoChinhPhuong(int n)
{
	if ((int)sqrt(n) == sqrt(n))
		return 1;
  	else
		return 0;
}
int KiemTraSNT (int n)
{
	int dem = 0;
	for (int i=1;i<=n;i++)
		if (n%i==0) dem+=1;
	if (dem==2)
		return 1;
}
int KiemTraSoHoanHao (int x)
{
	int tong = 0;
  	for (int i=1;i<x;i++)
  		if (x%i==0) tong+=i;
	if (tong == x)
  		return 1;
	else
		return 0;
}
    void xuatmenu()
    {
        cout << "-----Danh muc cac chuc nang-----"<<endl;
	cout << "1. So nguyen to"<<endl;
	cout << "2. So hoan hao"<<endl;
	cout << "3. So chinh phuong"<<endl;
	cout << "4. Xem menu"<<endl;
	cout << "0. Thoat chuong trinh"<<endl;
    }
int main()
{
    int chon;
    xuatmenu();
    do
    {
        cout<<"nhap chuc nang: ";cin>>chon;
        switch(chon)
        {
        case 1:
            int snt;
            cout<<"nhap snt";cin>>snt;
            if(KiemTraSNT(snt)==1)
                cout<<snt<<" la snt"<<endl;
            else
                cout<<"khong phai snt";
                break;
        case 2:
            int shh;
            cout<<"nhap so shh: ";cin>>shh;
            if(KiemTraSoHoanHao(shh)==1)
                cout<<shh<<" la so hh";
            else
                cout<<shh<<"k la shh";
                break;
        case 3:
				int scp;
				cout << "\nNhap scp: ";
				cin >>scp;
				if (KiemTraSoChinhPhuong(scp))
					cout <<scp<<" la so nguyen to.";
				else
				 	cout <<scp<<" khong la so nguyen to.";
				break;
        case 4:
			 	xuatmenu();
				break;
        }

    }
    while(chon!=0);
}
