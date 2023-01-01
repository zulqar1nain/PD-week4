#include <iostream>
#include <windows.h>
using namespace std;

void printmaze();
void playermove(int x,int y);
void gotoxy(int x,int y);
main()
{
  system("cls");
  printmaze();
  int x=1;
  int y=1;
   while(true)
  {
    playermove(x,y);
   if(y<7)
    {
     y=y+1;
    }
   if(y==7)
    {
     gotoxy(y-1,x);
     cout << " ";
     y=1;
    }  
  }
}
void printmaze()
 {
  cout <<"###########################" <<endl;
  cout <<"#                         #" <<endl;
  cout <<"#                         #" <<endl;
  cout <<"#                         #" <<endl;
  cout <<"#                         #" <<endl;
  cout <<"#                         #" <<endl;
  cout <<"#                         #" <<endl;
  cout <<"#                         #" <<endl;
  cout <<"###########################" <<endl;
 }
 void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
 void playermove(int x,int y)
  {
     gotoxy(x,y);
     cout <<"p";
     Sleep(200);
  }
