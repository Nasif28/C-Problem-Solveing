#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void sum(int a, int b)
{
    int add = a + b;
    cout << add << endl;
}
void sum(int a, int b, int c)
{
    int add = a + b + c;
    cout << add << endl;
}
int mai()
{

    sum(5,7);
    sum(12,17,15);

    getch();
}
