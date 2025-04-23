
#include <iostream>
using namespace std;

class Stack
{
    int* arr;
    int size;
    int tos;

public:
    Stack()
    {
        tos = -1;
        size = 5;
        arr = new int[size];
    }

    Stack(int _size)
    {
        tos = -1;
        size = _size;
        arr = new int[size];
    }

    void push(int d)
    {
        if (tos < size - 1)
        {
            tos++;
            arr[tos] = d;
        }
        else
        {
            cout << "\nStack is full" << endl;
        }
    }

    int pop(int& d)
    {
        if (tos != -1)
        {
            d = arr[tos];
            tos--;
            return 1;
        }
        else
        {
            cout << "\nStack is empty" << endl;
            return 0;
        }
    }

    Stack(Stack& s)
    {
        tos = s.tos;
        size = s.size;
        //delete [] arr;
        arr = new int[size];
        for (int i = 0; i <= tos; i++)
        {
            arr[i] = s.arr[i];
        }
    }

    ~Stack()
    {
        cout << "\nDestructor called" << endl;
        delete[] arr;
    }
};

void fun2(Stack s)
{
    s.push(70);
}

void fun3(Stack s)
{
     int x=0;
    if (s.pop(x) == 1)
        cout << endl << x;
      s.push(80);
      s.push(90);
        if (s.pop(x) == 1)
        cout << endl << x;
}

int main()
{
    Stack s2(2);
    s2.push(1);
    s2.push(2);
    s2.push(3);

    int x = 0;
    if (s2.pop(x) == 1)
        cout << endl << x;
    if (s2.pop(x) == 1)
        cout << endl << x;

    fun3(s2);

    if (s2.pop(x) == 1)
        cout << endl << x;


    return 0;
}

