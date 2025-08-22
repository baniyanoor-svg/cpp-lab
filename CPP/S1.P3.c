//increment a variable using pointer 
#include<stdio.h>
void increment (int*p){
  (*p)=(*p)+1;


}

int main(){ 
int num =10;
printf("before increment %d\n",num);
increment(&num);
printf("after increment %d\n",num);

return 0;
}