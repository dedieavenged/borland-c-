#include <iostream.h>
#include <conio.h>
#include <windows.h>
void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}
main (void){
int username, password;
int x;
setcolor (10);

cout << "--------------------------------------------------------------------------------";
cout << "=============| Pogram untuk membaca input password dari  user  |==================";
cout << "--------------------------------------------------------------------------------";
int user = 123;
int pass = 123;
x = 1;
do {
cout <<"\n";
cout << "Username : ";
cin >> username;
cout << "Password : ";
cin >> password;
cout <<"\n";

if (username = user && password == pass) {
cout << "============================ \n";
cout << "Anda Berhasil Login" << endl;
cout << "============================ \n\n";
} else {

cout << "\n====================================\n";
cout << "Maaf USERNAME & PASSWORD ANDA Salah!" << endl;
cout << "====================================\n\n";
x = x +1;
}
}
while (x <= 3);
cout << "Anda Telah 3x Memasukan ID & PASSWORD Yang Salah\n";
cout << "Mohon Maaf kesempatan Anda hanya 3x ";

getch();
}
