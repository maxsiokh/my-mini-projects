#include <iostream>
#include <cassert>

using namespace std;



class Massiv
{
    int* a_array;

    int a_size;
public:
    Massiv(int size)
    {
        assert(size > 0);

        a_size = size;
        a_array = new int[a_size];
    }

    ~Massiv()
    {
        delete[] a_array;
    }

    void setValue(int index, int value) {

        a_array[index] = value;

    }
    int getValue(int index) {

        return a_array[index];

    }

    int getLength() {

        return a_size;

    }

    //====================================
    void show()
    {

        for (int n = 0; n < a_size; ++n)
        {
            cout << a_array[n] << " ";
        }

    }


    //====================================
    Massiv operator ++ ()
    {
        int chislo = 25;
        ++a_size;
        int* newMassiv = new int[a_size];
        for (int i = 0; i < a_size - 1; i++)
        {
            newMassiv[i] = a_array[i];

        }
        newMassiv[a_size - 1] = chislo;

        delete[] a_array;
        a_array = newMassiv;
        return *this;

    }
};



int main()
{
    setlocale(LC_ALL, "");
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    Massiv arr(size); 
    for (int n = 0; n < size; ++n)
    {
        arr.setValue(n, n + 1);
    }
    cout << "значення елемента 8 дорiвнює " << arr.getValue(9);
    cout << endl;
    ++arr;
    arr.show();
    return 0;
}
