#include<bits/stdc++.h>
using namespace std;

template<typename type, int size>
class Array
{
private:
    type* my_array;
    
public:
    // Constructor
    Array()
    {
        my_array = new type[size];
    }

    // Destructor
    ~Array()
    {
        delete[] my_array;
    }

    // Returns the value at a specific index in the array
    type Access(int index)
    {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds");
        }
        return my_array[index];
    }

    // Returns size of the array
    int Len()
    {
        return size;
    }

    // Provides array-like access to elements using the bracket syntax ([]).
    type& operator[](int index)
    {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of bounds");
        }
        return my_array[index];
    }
};

int main()
{
    Array<int, 2> arr;
    arr[0] = 1024;
    arr[1] = 100;

    cout << "Using operator[]:" << endl;
    for (int i = 0; i < arr.Len(); i++)
    {
        cout << arr[i] << endl;
    }
    cout << "\n";

    cout << "Using Access function:" << endl;
    for (int i = 0; i < arr.Len(); i++)
    {
        cout << arr.Access(i) << endl;
    }
    cout << "\n";

    cout << "Array Length: " << arr.Len() << endl;

    return 0;
}