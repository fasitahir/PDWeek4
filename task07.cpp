#include <iostream>
#include <windows.h>
using namespace std;

void getoxy(int,int);
void playermove(int x, int y);
void printMaze();
main()
{
  int x=3;
  int y=3;
  system("cls");
  printMaze();
  while(true)
  {
    playermove(x,y);
    if(y<12)
    {
      y=y+1;
    }
 
    if(y==12)
    {
      getoxy(x,y-1);
      cout << " ";
      y=3;
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


void playermove(int x, int y)
{
  getoxy(x,y);
  cout<<"p";
 
  getoxy(x,y-1);
  cout<<" ";
  Sleep(200);
}




void getoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
