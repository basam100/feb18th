#include <iostream>


using namespace std;

const int SIZE = 5;

int add(int a, int b, int c){

    return a + b + c;
}

void largest(int arr[], int size) {
    int large = arr[0];
    int index = 0;
    for (int i = 1; i <= size; i++) {
        if (arr[i] > large) {
            large = arr[i];
            index = i;
        }

    }
    cout << "The largest value is " << large << " At index " << index;
    
}


int main()
{
    int list[] = { 1,2,5,5,3 };
    largest(list, SIZE);
   
    return 0;
}

