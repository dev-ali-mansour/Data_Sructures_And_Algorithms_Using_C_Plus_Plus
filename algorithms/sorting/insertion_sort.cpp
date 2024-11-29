#include <iostream>

using namespace std;

void insertionSort(int arr[], int size);

int main() {
    int numbers[] = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
    int size = std::size(numbers);
    insertionSort(numbers, size);

    for (auto num: numbers) {
        cout << num << ", ";
    }

    return 0;
}

void insertionSort(int arr[], int size) {
    int key, j;
    for (int i = 1; i < size; ++i) {
        key = arr[i];
        j = i;
        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
    }
}