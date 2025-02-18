#include <iostream>


using namespace std;

const int SIZE = 10;

int add(int a, int b, int c){

    return a + b + c;
}

int largest(int arr[], int size) {
    static int largest = arr[0];
    for (int i = 1; i <= size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }

    }
    return largest;
}


int main()
{
    cout << "Hello World!\n";
}

