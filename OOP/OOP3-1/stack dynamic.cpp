#include <iostream>
using namespace std;

class Stack
{
    int arr[5];
    int size;
    int tos;

public:
    Stack()
    {
        tos = -1;
        size = 5;
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

    int pop(int &d)
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
};
void fun(Stack *s)
{
    s->push(50);
}
void fun1(Stack &s)
{
    s.push(60);
}
void fun2(Stack s)
{
    s.push(70);
}

int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    int x = 0;
    if (s1.pop(x) == 1)
        cout << endl << x;
    if (s1.pop(x) == 1)
        cout << endl << x;
    if (s1.pop(x) == 1)
        cout << endl << x;
    if (s1.pop(x) == 1)
        cout << endl << x;
    if (s1.pop(x) == 1)
        cout << endl << x;

    fun(&s1);
    if (s1.pop(x) == 1)
        cout << endl << x;
    fun1(s1);
    if (s1.pop(x) == 1)
        cout << endl << x;
    fun2(s1);
    if (s1.pop(x) == 1)
        cout << endl << x;

    return 0;
}
