#include <iostream>


using namespace std;

const int SIZE = 5;

int add(int a, int b, int c){

    return a + b + c;
}

int largest(int arr[], int size) {
    int large = arr[0];
    for (int i = 1; i <= size; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }

    }
    return large;
}


int main()
{
    int list[] = { 1,2,5,5,3 };
    cout << largest(list, SIZE);
   
    return 0;
}

