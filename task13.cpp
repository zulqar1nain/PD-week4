#include <iostream>
using namespace std;
main()
{ 
 while(true)
 {
  int workday;
  int holiday;
  int Wperday;
  int Hperday;
  int timegame;
  int normgame;
  int totalmin;
  int differencemin;
  int differencehour;
  cout <<" Enter working day per year: ";
  cin>>workday;
  cout <<" Enter Holidays per year: ";
  cin>>holiday;
  cout << "IN working per day play with tom: ";
  cin>>Wperday;
  cout << "IN holiday per day play with tom: ";
  cin>>Hperday;
  timegame=Wperday*workday+Hperday*holiday;
  cout << "Time play with tom: "   <<timegame   <<endl;
  cout << "The norm game: ";
  cin>>normgame;
  totalmin=normgame-timegame;
  differencehour=totalmin/60;
  differencemin=totalmin%60;
  cout << "total minute: "  <<totalmin  <<endl;
  cout << "difference in hour: "    <<differencehour    <<endl;
  cout << "difference in minute: "  <<differencemin     <<endl;
  if(timegame<30000)
   { 
     cout<<"Tom sleep well";
   }
   if(timegame>30000)
   {  
     cout<<"Tom will run way";
   }
 }
}
  
  
   
  
