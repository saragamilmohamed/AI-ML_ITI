#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
struct emp
{
    int id;
    int age;
    char name[30];
};

int main()
{
     emp e;
    cin>>e.id;
    cin>>e.age;

    cin>>e.name;
    //e1.id=111;
   // e1.age=20;
    strcpy(e.name,e.name);
    cout<<"id : "<<e.id<<" age : "<<e.age<<" name : "<<e.name<<endl;
    return 0;
}
