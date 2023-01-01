#include<iostream>
#include<windows.h>
using namespace std;

void printMenu(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2, float aggregate2);
void aggregatef1(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2, float aggregate2);
void aggregatef2(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2, float aggregate2);
void compare(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2, float aggregate2);
void student1(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2, float aggregate2);
void student2(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2, float aggregate2);

main()
{
    int choice;  
    string name1;
    float matric1;
    float inter1;
    float ecat1;
    float aggregate1;
    string name2;
    float matric2;
    float inter2;
    float ecat2;
    float aggregate2;

    while(true)
    {
            printMenu( choice ,  name1,  matric1,  inter1 , ecat1,  aggregate1, name2, matric2 ,  inter2,ecat2, aggregate2);
            student1( choice ,  name1,  matric1,  inter1 , ecat1,   aggregate1, name2,  matric2 ,  inter2, ecat2,  aggregate2);
            student2( choice ,  name1,  matric1,  inter1 , ecat1,   aggregate1, name2,  matric2 ,  inter2, ecat2,  aggregate2);
            aggregatef1( choice , name1, matric1, inter1 , ecat1,  aggregate1, name2, matric2 , inter2, ecat2,aggregate2);
            aggregatef2( choice , name1, matric1, inter1 , ecat1,  aggregate1, name2, matric2 , inter2, ecat2,aggregate2);

    }
    
}

void printMenu(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2 ,float aggregate2)
{
    cout<<"Enter 1 to enter the details of first student: "<<endl;
    cout<<"Enter 2 to enter the details of second student: "<<endl ;
    cout<<"Enter 3 to calculate aggregate of first student: "<<endl ;
    cout<<"Enter 4 to calculate aggregate of second student: "<<endl ;
    cout<<"Enter 5 to find first roll number: "<<endl ;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;

    student1( choice ,  name1,  matric1,  inter1 , ecat1,   aggregate1, name2,  matric2 ,  inter2, ecat2,  aggregate2);
    student2( choice ,  name1,  matric1,  inter1 , ecat1,   aggregate1, name2,  matric2 ,  inter2, ecat2,  aggregate2);
    aggregatef1( choice , name1, matric1, inter1 , ecat1,  aggregate1, name2, matric2 , inter2, ecat2,aggregate2);
    aggregatef2( choice , name1, matric1, inter1 , ecat1,  aggregate1, name2, matric2 , inter2, ecat2,aggregate2);


}


void student1(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2, float aggregate2)
{
    char key;
    
    if(choice==1)
    {
        cout<<"Enter the name of student 1: ";
        cin>> name1;

        cout<<"Enter marks in matric(out of 1100): ";
        cin>> matric1;

        cout<<"Enter Your inter marks(out of 550): ";
        cin>> inter1;

        cout<<"Enter Your ecat Marks(out of 400): ";
        cin>> ecat1;
        cout<<"Enter any key to continue....";
        cin>>key;
    }
}    
void student2(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2, float aggregate2)
{       
    char key;
    
    if(choice==2)
    {
        cout<<"Enter the name of student 2: ";
        cin>> name2;

        cout<<"Enter marks in matric(out of 1100): ";
        cin>> matric2;

        cout<<"Enter Your inter marks(out of 550): ";
        cin>> inter2;

        cout<<"Enter Your ecat Marks(out of 400): ";
        cin>> ecat2;
        cout<<"Enter any key to continue....";
        cin>>key;
    }

}
    
void aggregatef1(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2, float aggregate2)
{
    if(choice==3)
    {
        aggregate1=(matric1/1100)*30 + (inter1/550)*30 + (ecat1/100)*40;
        cout<<"Aggregate of student 1 is: "<<aggregate1;
    }
}

void aggregatef2(int choice , string name1, float matric1, float inter1 ,float ecat1,  float aggregate1,string name2, float matric2 , float inter2,float ecat2, float aggregate2)
{
    if(choice==4)
    {
        aggregate2=(matric2/1100)*30 + (inter2/550)*30 + (ecat2/100)*40;
        cout<<"Aggregate of student 1 is: "<<aggregate2;
    }
}




