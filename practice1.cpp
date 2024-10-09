#include <iostream>

using namespace std;


int foo(int *p, int *q){

*p=1;
*q=1;
return *p + *q;

}

char str[] = "0123";


int main(){

int a = 3;
int b = 4;

int c = foo(&a, &a);

(c == a + b ? a : b) = 5;

cout<< a << b;

int i = 0 ;

str[i] = i[str + 2];

cout<< str ;

}