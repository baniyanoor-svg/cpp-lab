#include <iostream>
#include<string>
using namespace std;
template <class T>
class stringBox{
T string;
public:
void set(T a)
{

    string=a;
}

void get(){
cout<<string<<endl;

}

};

int main(){
stringBox <string> obj;
obj.set("noor");
obj.get();




}