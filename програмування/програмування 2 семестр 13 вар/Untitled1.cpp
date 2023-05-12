#include <iostream>
using namespace std;

int * add_element(int *source, int size) {
    int *dest = new int[size+1], i;
    for (i = 0, dest[size]=0; i<size; i++)
        dest[size] += (dest[i] = source[i]);
    delete[] source;
    return dest;
}

int main()
{
    const int size = 5;
    int *initial = new int[size], i;
    for (i=0; i<size; i++)
        initial[i] = i;
    int *result = add_element(initial, size);
    for (i=0; i<=size; i++)
        cout << result[i] << endl;
}
