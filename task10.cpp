#include <iostream>
using namespace std;
main()
{
   while(true)
  {
	string country;
	float amount;
	float discount;
        float Finalprize;
	cout<<"Enter your country name: ";
	cin>>country;
	cout<<"Enter Ticket Amount: ";
	cin>>amount;


     if(country=="pakistan")
    {
       discount=amount*5/100;
      cout <<"Amount after discount is: "  <<discount;
    }
     if(country=="ireland")
    {
       discount=amount*10/100;
      cout <<"Amount after discount is: "  <<discount;
    }
     if(country=="india")
    {
       discount=amount*20/100;
      cout <<"Amount after discount is: "  <<discount;
    }
     if(country=="England")
    {
       discount=amount*30/100;
      cout <<"Amount after discount is: "  <<discount;
    }
     if(country=="Canada")
    {
       discount=amount*45/100;
      cout <<"Amount after discount is: "   <<discount;
    }
    
    Finalprize=amount-discount;
    cout <<" Final prize after discount: "   <<Finalprize;
 }

}
    
    
    


