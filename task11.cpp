#include <iostream>
using namespace std;

void challan(float speed);

main()
{
  float speed;
  while(true)
  {
    cout<<"What is the speed of car (in Km/h): "<<endl;
    cin>> speed;
    challan(speed);
  }
}

void challan(float speed)
{

  if(speed>100)
  {
    cout<<"Halt..You will be CHALLENGED!!! "<<endl;
  }
  
  if(speed<=100)
  {
    cout<<"Keep Going!!";
  }
}
  