#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iomanip.h>


    main() {

   clrscr();
   cout<<"\n\n-----------------------------------------------\n";
   cout<<"\n\tMENGHITUNG IPK MAHASISWA";
   cout<<"\n\n-----------------------------------------------\n";
   {
            int jml_makul, sks[5], nilai[5];
         char nilai_huruf[15], nama_makul[20];
         float total_nilai=0,total_sks=0,ipk;

         cout<<"\n-----------------------------------------------\n";
         cout<<"\n Jumlah Mata Kuliah : "; cin>>jml_makul;

         for (int i=1; i<=jml_makul; i++)
        {
         cout<<"\n-----------------------------------------------\n";
         cout<<"\n Nama Mata Kuliah "<<i<<" \t: "; gets(nama_makul);
         cout<<"\n Nilai Huruf \t\t: "; cin>>nilai_huruf[i];
         cout<<"\n Bobot SKS \t\t: ";cin>>sks[i];
         cout<<"\n-----------------------------------------------\n";
         if(nilai_huruf[i]=='a')
                 nilai[i]=4*sks[i];
         else if(nilai_huruf[i]=='b')
                 nilai[i]=3*sks[i];
         else if(nilai_huruf[i]=='c')
                 nilai[i]=2*sks[i];
         else if(nilai_huruf[i]=='d')
                 nilai[i]=1*sks[i];
         else if(nilai_huruf[i]=='e')
                 nilai[i]=0*sks[i];

            cout<<" Total Nilai : "<<nilai[i];
             total_nilai += nilai[i];
             total_sks += sks[i];
          }

         ipk=total_nilai/total_sks;
         cout<<"\n-----------------------------------------------\n";
         cout<<"\n Jumlah Total Nilai \t\t: "<<total_nilai;
         cout<<"\n\n Jumlah Seluruh SKS \t\t: "<<total_sks;
         cout<<"\n\n Selamat Anda Mendapat IPK \t: "<<setprecision(2)<<ipk;
         cout<<"\n\n-----------------------------------------------\n";
    }
      cout<<"===============================================\n";
      cout<<"\t\tTERIMAKASIH";
      cout<<"\n===============================================";

getch();}
