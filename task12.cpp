#include <iostream>
using namespace std;
main()
 {

  float a,b,c;
  float discount;
  float totalprize;
  cout<<"Enter red rose number";
  cin>>a;
  cout<<"Enter white rose number";
  cin>>b;
  cout<<"Enter tulips rose number";	
  cin>>c;
   a=a*2.00;
   cout << "Red rose prize: "     <<a;
   b=b*4.10;
   cout << "white rose prize: "  <<b;
   c=c*2.50;
   cout << "tulips rose prize: "  <<c;
  int tprize;
  tprize=a+b+c;
   cout <<"total amount: "  <<tprize;
  if (tprize>200)
   {
     discount=tprize*20/100;
    cout<<"discount: "  <<discount;
   }
    totalprize=tprize-discount;
    cout<< "total prize after discount: "   <<totalprize;

}