#include <iostream>
#include <windows.h>
using namespace std;
void menu();
void gotoxy(int x,int y);
main()
{
  system("cls");
  while(true)
  {
   int choice;
   string name1,name2,next;
   float matricmarks1,intermarks1,ecatmarks1,matricmarks2,intermarks2,ecatmarks2;
   float perc1,perc2,perc3,aggregate1,aggregate2;
   menu();
       cout <<"Enter your choice: ";
       cin>>choice;
     if(choice==1)
       { 
        cout << "Enter your name: ";
        cin>>name1;
        cout << "Enter matric marks: ";
        cin>>matricmarks1;
        cout << "Enter inter marks: ";
        cin>>intermarks1;
        cout << "Enter ecat marks: ";
        cin>>ecatmarks1;
        cout << "Enter s to be continued  ";
        cin>>next; 
       }
     if(choice==2)
       { 
        cout << "Enter your name:   "  ;
        cin>>name2;
        cout << "Enter matric marks:  "  ;
        cin>>matricmarks2;
        cout << "Enter inter marks:   "   ;
        cin>>intermarks2;
        cout << "Enter ecat marks:   "   ;
        cin>>ecatmarks2;
        cout << "Enter s to be continued  "  ;
        cin>>next; 
       }
     if(choice==3)
       {
        perc1=matricmarks1*30/100;
        perc2=intermarks1*30/100;  
        perc3=ecatmarks1*40/100;
        aggregate1=perc1+perc2+perc3;
        cout <<"aggregate first student: "  <<aggregate1;
        cout << "Enter s to be continued";
        cin>>next;
       }  
    if(choice==4)
       {
        perc1=matricmarks2*30/100;
        perc2=intermarks2*30/100;   
        perc3=ecatmarks2*40/100;      
        aggregate2=perc1+perc2+perc3;
        cout <<"aggregate second student: "  <<aggregate2;
        cout << "Enter s to be continued";
        cin>>next;
       }  

     if(choice==5)
       {
          if(aggregate1>aggregate2)
         {
            cout <<"first roll no first student"   <<name1;
         }
          if(aggregate2>aggregate2)
         {
            cout <<"first roll no second student"  <<name2;
         }
       }
  }  
}  
  void gotoxy(int x,int y)

   {
     COORD coordinates;
     coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
   }
 void menu()
   {
    gotoxy(35,1);
    cout << " ******************************* " <<endl;
    gotoxy(35,2);
    cout << " *        UET LAHORE           * "<<endl;
    gotoxy(35,3);
    cout << " ******************************* "<<endl;
    gotoxy(1,11);
    cout  << "UNIVERSITY ADMISSION MANAGEMENT SYSTEM"  <<endl;
    cout << "press 1 to enter the detail of first student! "  <<endl;
    cout << "press 2 to enter the detail of second student! "  <<endl;
    cout << "press 3 to calculate the aggregate of first student! "  <<endl;
    cout << "press 4 to calculate the aggregate of second student! "  <<endl;
    cout << "press 5 to display the student with roll no 01! "   <<endl;
    cout << "Enter your choice: "  <<endl;

   }
       

  