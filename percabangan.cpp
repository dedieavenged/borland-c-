#include <iostream>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char** argv) {
 int pilihan;
 cout <<"=========================="<<endl;
 cout <<"Daftar Menu"<<endl;
 cout <<"1. Penjumlahan"<<endl;
 cout <<"2. Pengurangan"<<endl;
 cout <<"3. Perkalian"<<endl;
 cout <<"4. Pembagian"<<endl;
 cout <<"5. Luas Segitga"<<endl;
 cout <<"6. Luas Persegi Panjang"<<endl;
 cout <<"7. Keluar"<<endl;
 cout <<"=========================="<<endl;
 while (pilihan>=0){
  cout <<"Masukkan Pilihan Anda (1/2/3/4/5/6/7) : ";cin>>pilihan;
  if (pilihan ==1){
   cout <<"===================================="<<endl;
   cout <<"Penjumlahan"<<endl;
   float a;
   cout <<"Masukkan Nilai A :";cin>>a;
   float b;
   cout <<"Masukkan Nilai B :";cin>>b;
   float c= a+b;
   cout <<"Hasil Penjumlahan :"<<c<<endl;
   cout <<"===================================="<<endl;
  }
  else if(pilihan ==2){
   cout <<"===================================="<<endl;
   cout <<"Pengurangan"<<endl;
   float a;
   cout <<"Masukkan Nilai A :";cin>>a;
   float b;
   cout <<"Masukkan Nilai B :";cin>>b;
   float c= a-b;
   cout <<"Hasil Pengurangan :"<<c<<endl;
   cout <<"===================================="<<endl;
  }
  else if(pilihan ==3){
   cout <<"===================================="<<endl;
   cout <<"Perkalian"<<endl;
   float a;
   cout <<"Masukkan Nilai A :";cin>>a;
   float b;
   cout <<"Masukkan Nilai B :";cin>>b;
   float c= a*b;
   cout <<"Hasil Perkalian :"<<c<<endl;
   cout <<"===================================="<<endl;
  }
  else if(pilihan ==4){
   cout <<"===================================="<<endl;
   cout <<"Pembagian"<<endl;
   float a;
   cout <<"Masukkan Nilai A :";cin>>a;
   float b;
   cout <<"Masukkan Nilai B :";cin>>b;
   float c= a/b;
   cout <<"Hasil Pembagian :"<<c<<endl;
   cout <<"===================================="<<endl;
  }
  else if (pilihan ==5){
   cout <<"===================================="<<endl;
   cout <<"Luas Segitiga"<<endl;
   float alas;
   cout <<"Masukkan alas :";cin>>alas;
   float tinggi;
   cout <<"Masukkan tinggi :";cin>>tinggi;
   float LS= 0.5*alas*tinggi;
   cout <<"Hasil Luas Segitiga :"<<LS<<endl;
   cout <<"===================================="<<endl;
  }
  else if (pilihan ==6){
   cout <<"===================================="<<endl;
   cout <<"Luas Persegi Panjang"<<endl;
   float panjang;
   cout <<"Masukkan Panjang : ";cin>>panjang;
   float lebar;
   cout <<"Masukkan Lebar :";cin>>lebar;
   float LP= panjang*lebar;
   cout <<"Luas Persegi Panjang :"<<LP<<endl;

   cout <<"===================================="<<endl;
  }
  else if (pilihan ==7){
   exit(7);
  }
  else {
   cout <<"-------------------------------------------"<<endl;
   cout <<"Maaf Pilihan Anda Diluar Jangkauan"<<endl;
   cout <<"Pilihan Anda Hanya 1 Sampai 7"<<endl;
   cout <<"........Terima Kasih........."<<endl;
   cout <<"-------------------------------------------"<<endl;
  }
 }
 return 0;
}
