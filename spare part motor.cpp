/*——————————————————————————————*/
/* Tugas C++ Membuat Program SPARE PART MOTOR   */
/*——————————————————————————————*/

#include <conio.h>
#include <iostream.h>
main()
{
char kobar,nama_barang[20],bns,beli,lagi, yt;
float totbay,jumbel,totbel,potongan,harga;
kembali:
clrscr();
cout<<""<<endl;
cout<<" Masukkan Kode Barang [1..3]  : ";cin>>kobar;
cout<<" Jumlah Pembelian Barang Anda : ";cin>>jumbel;
clrscr();
cout<<"\n ";
cout<<"\t *** HONDA *** \n";
cout<<"\t    JL.Ciater  No.16 \n";
cout<<" -------------------------------------------";
cout<<""<<endl;
cout<<" Nama Spare Part yang Anda Beli     :"<<nama_barang;
switch(kobar)
 {
  case ('1') :
      {
      cout<<" Busi "<<nama_barang;
      harga= 12000*jumbel ;
      }
      break;
  case ('2') :
      {
      cout<<" Aki "<<nama_barang;
      harga= 30000*jumbel;
      }
      break;
  case ('3') :
      {
      cout<<" Kampas Rem "<<nama_barang;
      harga= 45000*jumbel;
      }
      break;
 }
cout<<endl;
cout<<" Harga Barang yang Anda Beli    : Rp."<<harga<<endl;
    if (jumbel >5)
  {
   potongan = 0.3*harga;
  }
  else
  {
   potongan= 0;
  }
cout<<" Jumlah Barang yang Anda Beli   : "<<jumbel<<endl;
cout<<" Total Harga                  : Rp."<<harga<<endl;
cout<<" Potongan Harga               : Rp."<<potongan<<endl;

totbay= harga-potongan;
cout<<" ---------------------------------------------"<<endl;
cout<<" Total Bayar                  : Rp."<<totbay<<endl;

cout<<" Bonus yang Anda Dapatkan     :"<<bns;
     if (jumbel >5)
  {
  cout<<"Oli"<<bns;
  }
   else
  {
   cout<<"Maaf Tidak Dapat Bonus"<<bns;
  }
  cout<<endl;
cout<<" \n ";
cout<<"---------------------------------------------"<<endl;
cout<<"\t **** TERIMA KASIH ****        ";
cout<<endl;
cout<<" Apa Mau Input Data Lagi ? [Y/T] : ";cin>>yt;
cout<<endl;
clrscr();
if(yt=='Y' || yt=='y')
{goto kembali;}
if(yt=='T' || yt=='t')
{goto selesai;}
selesai:
cout<<endl;
cout<<"\t******* Terima Kasih *******"<<endl;
getch();
}