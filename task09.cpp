#include <iostream>
using namespace std;
main()
{
  string TrueorFalse;
  while(true)
  {
    cout<<"Enter true or false: ";
    cin>>TrueorFalse;
    if(TrueorFalse=="true")
    {
      cout<<"false."<<endl;
    }
  
    if(TrueorFalse=="false")
    {
      cout<<"true."<<endl;
    }
  }
}