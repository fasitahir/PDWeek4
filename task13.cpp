#include <iostream>
using namespace std;
void tomsleep(int);

main()
{
  int holidays;

  cout<<"Enter number of Holidays:";
  cin>>holidays;
   
  tomsleep(holidays);
}

void tomsleep(int holidays)
{
  int workingday=365-holidays;
  int time= workingday*63+127*holidays;
  if(time>=30000)
  {
    cout<<"Tom is happy and can sleep well!!";
  }
  
  if(time<30000)
  {
    int diff=30000-time;
    
    cout<<"Tom is not happy and can't sleep well!!"<<endl;
    cout<<"Difference from norm is: "<<diff<<" minutes."<<endl;
    
  }
}
  