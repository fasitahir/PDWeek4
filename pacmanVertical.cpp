#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x , int y);
void playerMove(int , int);

main()
{
  int x =3;
  int y =2; 
  system("cls");
  printMaze();
  gotoxy(x,y);
  playerMove(x,y);
  
  while(true)
  {
    playerMove(x,y);
    if(y<23)
    {
      gotoxy(x,y);
      cout<<"p";
      y=y+1;
    }
    if(y==23)
    {
      gotoxy(x,y-1);
      cout<<" ";
      y=2;
    }
  }         
}

void printMaze()
{
cout << "########################################################################" <<endl;
cout << "||.. .......................................................  ......  ||" <<endl;                                                 
cout << "||.. %%%%%%%%%%%%%%%%%         ...    %%%%%%%%%%%%%%   |%|..   %%%%   ||" <<endl;            
cout << "||..      |%|    |%|        |%|...    |%|       |%|    |%|..    |%|   ||" <<endl;     
cout << "||..      |%|    |%|        |%|...    |%|       |%|    |%|..    |%|   ||" <<endl;      
cout << "||..      %%%%%%%%%%%       |%|...    %%%%%%%%%%%%%            %%%%   ||" <<endl;                 
cout << "||..      |%|               |%|...   ..............   |%| ..          ||" <<endl;             
cout << "||..      %%%%%%%%%%%       |%|...                    |%| ..   %%%%   ||" <<endl;          
cout << "||..               |%|                %%%%%%%%%%%     |%| ..    |%|   ||" <<endl;      
cout << "||..               |%|           P    |%|.....            ..          ||" <<endl;
cout << "||.                |%|                |%|.....|%|         ..|%|       ||" <<endl; 
cout << "||..|%|   |%|%%|%|        |%|            .....|%|           |%|       ||" <<endl;
cout << "||..|%|   |%|  |%|        %%%%%%%%%%%%%  .....|%|           |%|       ||" <<endl;         
cout << "||..|%|   |%|  |%|                   |%|    %%%%%           |%|       ||" <<endl;  
cout << "||..|%|                              |%|              |%| ..|%|       ||" <<endl; 
cout << "||..|%|   %%%%%%%%%%%%               |%|%%%%%%%%      |%| ..|%|%%%%   ||" <<endl;                       
cout << "||..................................................  |%| .........   ||" <<endl;                                              
cout << "||   ...............................................                  ||" <<endl;                                   
cout << "||..|%|   |%|  |%|..   %%%%%%%%%%%%          |%|      |%|  ..|%|      ||" <<endl;                
cout << "||..|%|   |%|  |%|..            |%|     %%%%%%%%      |%|  ..|%|      ||" <<endl;         
cout << "||..|%|            .       G    |%|                   |%|  ..|%|      ||" <<endl;
cout << "||..|%|   %%%%%%%%%%%           |%|%%%%%%%%%%         |%|  ..|%|%%%   ||" <<endl;                      
cout << "||..................................................  |%| .........   ||" <<endl;
cout << "||  ................................................         ......   ||" <<endl;
cout << "########################################################################";
}


void playerMove(int x , int y)
{
  gotoxy(x,y);
  cout<<"p";

  gotoxy(x,y-1);
  cout<<" ";
  
  Sleep(200);

}


void gotoxy(int x , int y)
{

  COORD coordinates;
  coordinates.X=x; 
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

