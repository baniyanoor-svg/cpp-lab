#include <iostream>
#include<string>

using namespace std;

class Student
{ 
    public:
    int rollno;
    string name;
    void getData(int r,string y){
      rollno=r;
      name=y;
    }
    void display(){
         cout<<"Rollno:"<<rollno<<endl;
         cout<<"Name:"<<name;
    }

};

int
main()
{
  Student S1;
  S1.getData(2,"noor") ;
  S1.display();
  
   
   
   
    return 0;
}