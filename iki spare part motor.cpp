#include <stdio.h>
#include <constrea.h>
#include <iomanip.h>
main()
{
int i,data,jumbel[5];
char nakas[20],lg;
char napem[20],kode[5],barang[5][20];
long int harga[5],total[5],tobay,ukem,ubay;
exis:
clrscr();
tobay=0;
cout<<"..... HONDA ....."<<endl;
cout<<"======================"<<endl;
cout<<"nama kasir \t:";gets(nakas);
cout<<"nama pembeli \t:";gets(napem);
cout<<"\nbanyak data \t:";cin>>data;
cout<<"======================"<<endl;
for(i=1;i<=data;i++)
{
cout<<"data ke-:"<<i<<endl;
cout<<"kode barang [A/B/C] \t:";cin>>kode[i];
if (kode[i]=='A'||kode[i]=='a')
{
strcpy(barang[i],"busi");
harga[i]=12000;
}
else if (kode[i]=='B'||kode[i]=='b')
{
strcpy(barang[i],"aki");
harga[i]=300000;
}
else if (kode[i]=='C'||kode[i]=='c')
{
strcpy(barang[i],"kampas rem");
harga[i]=40000;
}
cout<<"nama barang \t:"<<barang[i]<<endl;
cout<<"harga barang \t:"<<harga[i]<<endl;
cout<<"jumlah beli \t:";cin>>jumbel[i];cout<<endl;
total[i]=harga[i]*jumbel[i];
}
clrscr();
cout<<"nama pembeli :"<<napem<<endl;
cout<<"-----------------------------------------------------"<<endl;
cout<<"no kode barang nama barang jumlah beli harga     total"<<endl;
cout<<"-----------------------------------------------------"<<endl;
	 //1234567890123456789012345678901234567890123456789012345
for(i=1;i<=data;i++)
{
gotoxy(1,4+i);cout<<i;
gotoxy(7,4+i);cout<<kode[i];
gotoxy(15,4+i);cout<<barang[i];
gotoxy(33,4+i);cout<<jumbel[i];
gotoxy(40,4+i);cout<<harga[i];
gotoxy(50,4+i);cout<<total[i]<<endl;

tobay+=total[i];
}
cout<<"-----------------------------------------------------"<<endl;
cout<<"\t\t\t total bayar = Rp. "<<tobay<<endl;
cout<<"\t\t\t uang bayar  = Rp. ";cin>>ubay;
ukem=ubay-tobay;
cout<<"\t\t\t kembalian   = Rp. "<<ukem<<endl;
cout<<"ingin input data [Y/T] :" ;
lg = getche();
if(lg=='Y'||lg=='y')
goto exis;
getch();
}
