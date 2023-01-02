#include <iostream>
#include <windows.h>
using namespace std;
void menu();

main()
{
 
 
   int choice;
   string name1,name2,next;
   float matricmarks1,intermarks1,ecatmarks1,matricmarks2,intermarks2,ecatmarks2;
   float perc1,perc2,perc3,perc4,perc5,perc6,aggregate1,aggregate2;
  while(true)
  {
 system("cls");
   menu();
       cout <<"Enter your choice: ";
       cin>>choice;
     if(choice==1)
       {
        system("cls"); 
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
        system("cls");
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
        system("cls");
        perc1=(matricmarks1/1100*100)*0.3;
        perc2=(intermarks1/550*100)*0.3;  
        perc3=(ecatmarks1/400*100)*0.4;
        aggregate1=perc1+perc2+perc3;
        cout <<"aggregate first student: "  <<aggregate1<<endl;
        cout << "Enter s to be continued";
        cin>>next;
       }  
    if(choice==4)
       {
        system("cls");
        perc4=(matricmarks2/1100*100)*0.3;
        perc5=(intermarks2/1100*100)*0.4;   
        perc6=(ecatmarks2/400*100)*0.4;      
        aggregate2=perc4+perc5+perc6;
        cout <<"aggregate second student: "  <<aggregate2;
        cout <<endl<< "Enter s to be continued";
        cin>>next;
       }  

     if(choice==5)
       {

          if(aggregate1>aggregate2)
         {
                    system("cls");
            cout <<"first roll no first student "   << name1 << endl;
         }
          if(aggregate2>aggregate1)
         {
            system("cls");
            cout <<"first roll no second student "  << name2 << endl;
         }
        cout << "Enter s to be continued  ";
        cin>>next;
       }
  }
}  

 void menu()
   {
    
    cout << " ******************************* " <<endl;
    cout << " *        UET LAHORE           * "<<endl;
    cout << " ******************************* "<<endl;
    cout << endl<<endl<<endl;
    cout  << "UNIVERSITY ADMISSION MANAGEMENT SYSTEM"  <<endl;
    cout << "press 1 to enter the detail of first student! "  <<endl;
    cout << "press 2 to enter the detail of second student! "  <<endl;
    cout << "press 3 to calculate the aggregate of first student! "  <<endl;
    cout << "press 4 to calculate the aggregate of second student! "  <<endl;
    cout << "press 5 to display the student with roll no 01! "   <<endl;


   }
       

  
