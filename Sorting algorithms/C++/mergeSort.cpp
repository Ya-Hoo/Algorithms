#include <iostream>

void initialise(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 100);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void merge(int arr[], int start, int middle, int end) {
    int n1 = middle - start + 1;
    int n2 = end - middle;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = arr[start + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[middle + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = start;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        
        int m = left + (right - left) / 2;

        mergeSort(arr, left, m);
        mergeSort(arr, m + 1, right);

        merge(arr, left, m, right);
    }
}

int main() {
    const int size = 10000;
    int arr[size];
    initialise(size, arr);

    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printArray(arr, size);

    return 0;
}