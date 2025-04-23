#include <iostream>
#include <string.h>
using namespace std;
class String
{
protected:
    static const int size=80;
    char str[size];

public:
    String()
    {
        strcpy(str,"");
    }
    String(char* s)
    {
        strcpy(str, s);
        str[size-1]='\0';
    }
    void display()
    {
        cout<<str<<endl;
    }
    char* getStr(){return str;}

};
class Pstring:public String
{
public:
    Pstring(char * _s):String()
    {
        if(strlen(_s)>=size)
        {
            strncpy(str, _s,size-1);
            str[size-1]='\0';
            cout<<"please enter string to fit buffer"<<endl;
        }
        else
        {
            strcpy(str,_s);
        }
    }
    void pdisplay()
    {
        cout<<str<<endl;
    }

};
class PString2:public Pstring
{
public:
    PString2() : Pstring("") {}
    PString2(char* s):Pstring(s){}
    PString2 left(Pstring& s1,int n)
    {
        for(int i=0;i<n&& i<size-1;i++)
        {
            str[i]=s1.getStr()[i];
        }
        str[n]='\0';
        return *this;
    }
    void display()
    {
        cout<<str<<endl;
    }
    PString2 mid(Pstring&s1,int s,int e)
    {
        int j=0;
        for(int i=s;i<e &&i<size-1;i++)
            {
            str[j]=s1.getStr()[i];
             j++;
            }
         str[j]='\0';
        return *this;

    }

    PString2 right(Pstring& s1,int n)
    {
        int j=0;
        for(int i=n;i<strlen(s1.getStr())&&i<size-1;i++)
        {
             str[j]=s1.getStr()[i];
             j++; }
          str[j]='\0';
        return *this;       }



};
int main()
{
    PString2 s("helloworld");
    PString2 s2;
    s2.left(s,5);
    s2.display();
    s2.mid(s,3,8);
    s2.display();
    s2.right(s,5);
    s2.display();
    return 0;
}
