#include <iostream>
using namespace std;

class Stack {
    int* arr;
    int size;
    int tos;

public:
    Stack() {
        tos = -1;
        size = 5;
        arr = new int[size];
    }

    Stack(int _size) {
        tos = -1;
        size = _size;
        arr = new int[size];
    }

    void push(int d) {
        if (tos < size - 1) {
            arr[++tos] = d;
        } else {
            cout << "\nStack is full" << endl;
        }
    }

    int pop(int& d) {
        if (tos != -1) {
            d = arr[tos--];
            return 1;
        } else {
            cout << "\nStack is empty" << endl;
            return 0;
        }
    }

    // Copy constructor
    Stack(const Stack& s) {
        tos = s.tos;
        size = s.size;
        arr = new int[size];
        for (int i = 0; i <= tos; i++) {
            arr[i] = s.arr[i];
        }
    }

    //s1=s2
    Stack operator=(const Stack& s) {
        if (this != &s) {
            tos = s.tos;
            size = s.size;
            delete[] arr;
            arr = new int[size];
            for (int i = 0; i <= tos; i++) {
                arr[i] = s.arr[i];
            }
        }
        return *this;
    }

    //com=s1+s2
    Stack operator+( Stack& s) {
        Stack StackComb((tos + 1) + (s.tos + 1));
        for (int i = 0; i <= tos; i++) {
            StackComb.push(arr[i]);
        }
        for (int i = 0; i <= s.tos; i++) {
            StackComb.push(s.arr[i]);
        }
        return StackComb;
    }

    // Destructor
    ~Stack()
    {
        //cout << "\nDestructor called" << endl;
        delete[] arr;
    }
};

int main() {
    Stack s1(3), s2(3);
    s1.push(1);
    s1.push(2);
    s1.push(3);

    s2.push(10);
    s2.push(20);
    s2.push(30);

    Stack com = s1 + s2;

    int x=0;
    if (com.pop(x) == 1)
        cout << endl << x;
    if (com.pop(x) == 1)
        cout << endl << x;
    if (com.pop(x) == 1)
        cout << endl << x;
    if (com.pop(x) == 1)
        cout << endl << x;
    if (com.pop(x) == 1)
        cout << endl << x;
    if (com.pop(x) == 1)
        cout << endl << x;
    /*    int x = 0;
    cout << "elements in combined stack:" << endl;
    while (com.pop(x)) {
        cout << x << " ";
    }
    cout << endl;*/


    return 0;
}
