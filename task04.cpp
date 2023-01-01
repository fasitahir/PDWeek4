#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int, int);
void playermove(int x , int y);
main()
{
  system("cls");
  int x=3;
  int y=3;
  printMaze();
  while(true)
  {
    playermove(x,y);
    if(x<39)
    {
       gotoxy(x,y);
       x=x+1;
       cout<<"p";
         
    }
    
    if(x==39)
    {
      gotoxy(x-1,y);
      cout<<" ";
      x=3;
    }
  }



}

void printMaze()
{
  cout<<"****************************************"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"*                                      *"<<endl;
  cout<<"****************************************"<<endl;
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;  
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void playermove(int x , int y)
{
  gotoxy (x,y);
  cout<<"p";
     
  gotoxy (x-1,y);
  cout<<" ";
 
  Sleep(500);
}



