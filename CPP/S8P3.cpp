#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){



string destfile;
string sourcefile;
cout<<"\nEnter your source file:"<<endl;
cin>>sourcefile;

cout<<"\nEnter your destination file:"<<endl;
cin>>destfile;

ofstream dest(destfile,ios::out);
ifstream source(sourcefile,ios::in);
if(source.is_open() && dest.is_open()){
    string line;
    while(getline(source,line)){

       dest<<line +"\n" ;

    }
    dest.close();

}
else
cout<<"couldnot file exist "<<endl;



}