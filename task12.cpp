#include<iostream>
using namespace std;

void payable(float,float,float);

main()
{
  float numofredrosses;
  float numofwhiterosses;
  float numoftulips;

  cout<<"Number of Red rosses: ";
  cin >> numofredrosses;

  cout<<"Number of White rosses: ";
  cin>> numofwhiterosses;

  cout<<"Number of Tulips: ";
  cin>> numoftulips;
  
  payable(numofredrosses,numofwhiterosses,numoftulips);
}

void payable(float numofredrosses , float numofwhiterosses , float numoftulips)
{
  float bill= numofredrosses*2.00+numofwhiterosses*4.10+numoftulips*2.50;
  cout<<"Total Bill is: "<<bill<<endl; 
  if(bill>200)
  {
    float discountbill=bill-bill*0.2;
    cout<<"The bill after discount is: "<<discountbill<<endl;
  }  
  
}


