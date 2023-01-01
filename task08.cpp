#include <iostream>
using namespace std;
void name(int,int );
main()
{
  int a,b;
    cin >>a;
  cin >>b;

  name(a,b);

}
  void name(int x,int y)
 {
 	cout<<x;
 	cout<<y;
   if(x==y)
  {
    cout <<"print true";
  }
   if(x!=y)
  {
    cout <<"print false";
  }
 }
  
