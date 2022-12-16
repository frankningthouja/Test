#include<stdio.h>

int main(){

int num = 172;
int p = 6;


num = num>>(p-1);

num = num&1;
printf("%d",num);

}
