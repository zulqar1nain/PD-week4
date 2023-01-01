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
  gotoxy(47,5);
  cout << 'S';
  gotoxy(48,5);
  cout << 'A';
  gotoxy(49,5);
  cout << 'Q';
  gotoxy(50,5);
  cout << 'L';
  gotoxy(51,5);
  cout << 'A';
  gotoxy(52,5);
  cout << 'I';
  gotoxy(53,5);
  cout << 'N';
 }