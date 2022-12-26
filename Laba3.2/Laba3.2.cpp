#include <iostream>

using namespace std;
int main()
{
    int a = 10;
    int* ptrA = &a;
    cout << "pointer: " << ptrA << " " << "value: " << a << endl;
    *ptrA = 8;
    cout << "value: " << a << endl;
    int arr[5];
    *(arr) = 5;
    *(arr + 1) = 7;
    *(arr + 2) = 8;
    *(arr + 3) = 11;
    *(arr + 4) = 23;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "]" << *(arr + i) << endl;
    }
    int b = 5;
    int* const ptrB = &b;
    //ptrB = ptrA; //VS сразу выдаёт ошибку.
    *ptrB = 71;
    cout << "value b: " << b << endl;
}