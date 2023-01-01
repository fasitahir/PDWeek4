#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printF(int , int);
void printA(int , int);
void printS(int , int);
void printI(int , int);

main()
{ 
  system("cls");
  int x=20;
  int y=15;

  gotoxy(20,15);
  printF(x,y);
  printA(x,y);
  printS(x,y);
  printI(x,y);
}
void printF(int x , int y)
{ 

  gotoxy(x,y);
  cout<<"**********  "<<endl;

  gotoxy(x,y+1);
  cout<<"*               "<<endl;

  gotoxy(x,y+2);
  cout<<"*               "<<endl;

  gotoxy(x,y+3);
  cout<<"*               "<<endl;
  
  gotoxy(x,y+4);
  cout<<"**********  "<<endl;

  gotoxy(x,y+5);
  cout<<"*               "<<endl;

  gotoxy(x,y+6);
  cout<<"*               "<<endl;

  gotoxy(x,y+7);
  cout<<"*               "<<endl;

}


void printA(int x , int y)
{
 
  gotoxy(x+13,y);
  cout<<"    **      "<<endl;

  gotoxy(x+13,y+1);
  cout<<"  **  **    "<<endl;

  gotoxy(x+13,y+2);
  cout<<" **    **    "<<endl;

  gotoxy(x+13,y+3);
  cout<<"**      **    "<<endl;

  gotoxy(x+13,y+4);
  cout<<"**********    "<<endl;

  gotoxy(x+13,y+5);
  cout<<"**      **    "<<endl;

  gotoxy(x+13,y+6);
  cout<<"**      **    "<<endl;

  gotoxy(x+13,y+7);
  cout<<"**      **    "<<endl;
}

void printS(int x, int y)
{ 
  gotoxy(x+26,y);
  cout<<" ******        "<<endl;

  gotoxy(x+26,y+1);
  cout<<"**    **       "<<endl;

  gotoxy(x+26,y+2);
  cout<<"**    **    "<<endl;

  gotoxy(x+26,y+3);
  cout<<"**            "<<endl;

  gotoxy(x+26,y+4);
  cout<<" *****         "<<endl;

  gotoxy(x+26,y+5);
  cout<<"      **       "<<endl;

  gotoxy(x+26,y+6);
  cout<<"**    **      "<<endl;

  gotoxy(x+26,y+7);
  cout<<"**    **      "<<endl;

  gotoxy(x+26,y+8);
  cout<<" ******       "<<endl;
}

void printI(int x , int y)
{
  gotoxy(x+37,y);
  cout<<"**********  "<<endl;

  gotoxy(x+37,y+1);
  cout<<"    **      "<<endl;
  
  gotoxy(x+37,y+2);
  cout<<"    **      "<<endl;

  gotoxy(x+37,y+3);
  cout<<"    **      "<<endl;

  gotoxy(x+37,y+4);
  cout<<"    **      "<<endl;

  gotoxy(x+37,y+5);
  cout<<"    **      "<<endl;

  gotoxy(x+37,y+6);
  cout<<"    **      "<<endl;

  gotoxy(x+37,y+7);
  cout<<"**********  "<<endl;
}  

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;  
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}



   