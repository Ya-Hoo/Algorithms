#include <iostream>

// Add random numbers from 0 - 99 in array
void initialise(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 100);
    }
}

// Print out all elements of array
void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// Bubble sort
int main() {
    const int n = 1000;
    int list[n];
    initialise(n, list);

    printArr(list, n);

    for (int i = 0; i < n; i++) {
        bool sorted = true;

        for (int j = 0; j < n - 1 - i; j++) {
            if (list[j] > list[j+1]) {
                std::swap(list[j], list[j+1]);
                sorted = false;
            }
        }

        if (sorted) {break;}
    }

    printArr(list, n);
    
    return 0;
}