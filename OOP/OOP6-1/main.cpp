#include <iostream>
#include <string.h>
using namespace std;
class Person
{
protected:
    int id;
    char name[30];
    int age;
public:
    Person(){
      //  cout<<"Person Constructor"<<endl;
        id=0;
        strcpy(name , "No Name");
        age=30;
    }
    Person(int _id)
    {
       // cout<<"Person Constructor"<<endl;
        id = _id;
        strcpy(name , "No Name");
        age = 30;
    }
    Person(int _id,char* _name)
    {
       // cout<<"Person Constructor"<<endl;
        id = _id;
        strcpy(name , _name);
    }
    Person(int _id ,char* _name,int _age)
    {
       // cout<<"Person Constructor"<<endl;
        id = _id;
        strcpy(name , _name);
        age = _age;
    }
    void setId(int _id){id = _id;}
    void setName(char* _name){strcpy(name , _name);}
    void setAge(int _age){age = _age;}
    int getId(){return id;}
    char* getName(){return name;}
    int getAge(){return age;}

    void printPerson()
    {
        cout<<"Person Data : "<<id<<" : "<<name<<" : "<<age<<endl;
    }
   // ~Person(){cout<<"Person Destructor"<<endl;}


};

class Emp:public Person
{
    int salary;
public:
    Emp():Person()
    {
      //  cout<<"Emp Constructor"<<endl;
        /*setId(0);
        setName("sara");
        setAge(30);*/
        salary = 3000;
    }
    Emp(int _id,char* _name,int _age):Person(_id, _name)
    {
     //   cout<<"Emp Constructor"<<endl;
        /*setId(_id);
        setName(_name);*/

        setAge(_age);
        salary = 3000;
    }
    Emp(int _id,char* _name,int _age,int _salary):Person(_id,_name,_age)
    {
      // cout<<"Emp Constructor"<<endl;
        /*setId(_id);
        setName(_name);
        setAge(_age);*/
        salary = _salary;
    }
    void setSalary(int _salary){salary = _salary;}
    int getSalary(){return salary;}

    void printEmp()
    {
        //printPerson();
        //cout<<"Emp Data : "<<salary<<endl;
        cout<<"Emp Data : "<<getId()<<":"<<name<<":"<<age<<":"<<salary<<endl;
    }
   // ~Emp(){cout<<"Emp Destructor"<<endl;}
};
class Student :public Person
{
    int grade;
public:
    Student():Person()
    {
       // cout<<"Student Constructor"<<endl;
        grade=50;
    }
    Student(int _id, char* _name ):Person(_id,_name)
    {
       // cout<<"Student Constructor"<<endl;
        grade=80;
       // setAge(25);
        age=25;
    }
    Student(int _id,char* _name,int _age,int _grade):Person(_id,_name,_age)
    {
        //cout<<"Student Constructor"<<endl;
        /*setId(_id);
        setName(_name);
        setAge(_age);*/
        grade = _grade;
    }
    void setGrade(int _grade){grade = _grade;}
    int getGrade(){return grade;}
    void printStudent()
    {
        //printPerson();
        //cout<<"Student Data : "<<grade<<endl;
        cout<<"Student Data : "<<getId()<<":"<<name<<":"<<age<<":"<<grade<<endl;
    }
   //~Student(){cout<<"Student Destructor"<<endl;}

};
void myfun(Person p)
{
    p.printPerson();
}

int main()
{
    Person p;
    p.printPerson();

    Emp e;
    e.printEmp();
    Emp e1(11,"ali",30,4000);
    e1.printEmp();
    Emp e2(222,"saja",20);
    e2.printEmp();

    Student s;
    s.printStudent();
    Student s1(333,"alaa");
    s1.printStudent();
    Student s2(444,"ola",30,90);
    s2.printStudent();
    s2.Person::printPerson();
    myfun(s2);
    myfun(e);
    myfun(p);

    return 0;
}
