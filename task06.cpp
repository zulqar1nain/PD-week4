#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
 {
   system("cls");
   gotoxy(15,1);
  cout << 'A';
   gotoxy(15,2);
  cout << 'W';
   gotoxy(15,3);
  cout << 'A';
   gotoxy(15,4);
  cout << 'I';
   gotoxy(15,5);
  cout << 'S';
 }