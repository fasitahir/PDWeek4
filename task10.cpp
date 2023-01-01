#include<iostream>
using namespace std;
void ticket(int price,string country);

main()
{
  int price;
  string country;

  while(true)
  {
   
    cout<<"Enter ticket price: ";
    cin>>price;
  
    cout<<"Enter country name: ";
    cin >> country;

    ticket(price,country);
  }
} 

void ticket(int price,string country)
{
  
  if(country=="Pakistan")
  { 
    float discount= price - 0.05 * price; 
    
    cout<<"Amount you need to pay is: "<<discount<<endl;
  }

  if(country=="Ireland")
  { 
    float discount= price - 0.1 * price; 
    
    cout<<"Amount you need to pay is: "<<discount<<endl;
  }

  if(country=="India")
  { 
    float discount= price - 0.2 * price; 
    
    cout<<"Amount you need to pay is: "<<discount<<endl;
  }

  if(country=="England")
  { 
    float discount= price - 0.3 * price; 
    
    cout<<"Amount you need to pay is: "<<discount<<endl;
  }


  if(country=="Canada")
  { 
    float discount= price - 0.45 * price; 
    
    cout<<"Amount you need to pay is: "<<discount<<endl;
  }

}
  

