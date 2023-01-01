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
  int difference;
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
  difference=normgame-timegame;
  cout << "The tom sleep well is: "  <<difference;
 }
}
  
  
   
  