
 #include <iostream>
 using namespace std;

 class Array                     //models a normal C++ array
 {
 private:
     int* ptr;                 //pointer to Array contents
     int size;                 //size of Array
 public:
     Array(int s)              //one-argument constructor
     {
         size = s;              //argument is size of Array
         ptr = new int[s];      //make space for Array
     }
     ~Array()                  //destructor
     {
         delete[] ptr;
     }
     int& operator [] (int j)  //overloaded subscript operator
     {
         return *(ptr+j);
     }

    Array operator=(Array& A)
    {
        delete  [] ptr;
        size=A.size;
        ptr=new int[size];
        for(int i=0;i<size;i++)
        {
            ptr[i]=A.ptr[i];
        }
        return *this;
    }
    Array(Array& A2)
    {
        size=A2.size;
        ptr=new int[size];
        for(int i=0;i<size;i++)
        {
            ptr[i]=A2.ptr[i];
        }
    }
    void display() const {
        for (size_t i = 0; i < size; i++) {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }
 };

 int main()
 {
     const int ASIZE = 10;        //size of array
     Array arr(ASIZE);            //make an array
     for(int j=0; j<ASIZE; j++)
     {
        arr[j] = j*j;
     }

     for(int j=0; j<ASIZE; j++)
     {
         cout << arr[j] << " ";
     }

     cout << endl;

     Array arr1(arr);
     Array arr3;
     arr3=arr1;
     arr3.display();


     return 0;
 }
