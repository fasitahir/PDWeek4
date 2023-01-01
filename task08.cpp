#include <iostream>
using namespace std;
main()
{ 
  int num1;
  int num2; 
  while(true)
  {
    cout<<"Enter Number 1 : ";
    cin>> num1;
    cout<<"Enter Number 2 : ";
    cin>> num2;
    
    if(num1==num2)
    {
      cout<<"true"<<endl;
    }
    if(num1!=num2)
    {
      cout<<"false"<<endl;
    }

  }
}