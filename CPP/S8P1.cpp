#include <iostream>
#include<fstream>
#include <string>
using namespace std;

int main(){
string filename;
    cout<<"Enter filename:"<<endl;
    cin>>filename;
ifstream file(filename);

if(file.is_open())
{

    string line;
    while( getline(file,line)){
cout<<line<<endl;


    }
    file.close();
}
else 
cout<<"couldnot open file";



}