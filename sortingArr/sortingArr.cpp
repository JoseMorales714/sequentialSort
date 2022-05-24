#include <iostream>
using namespace std;
#define MAX 99

void sortArr(int a[], int size);

int main()
{
    int size = 0;
    int usrArr[MAX];

    cout << "Enter number of elem in the arrar > ";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << "Enter element: [" << i + 1 << "] ";
        cin >> usrArr[i];
    }

    sortArr(usrArr, size);

    return 0;
}

void sortArr(int a[], int size) {
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        } 
    }

    for (int i = 0; i < size; i++) {
        cout << a[i] << endl;
    }
}