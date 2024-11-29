#include <iostream>

using namespace std;

void selectionSort(int arr[], int size);

int main() {
    int numbers[] = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
    int size = std::size(numbers);
    selectionSort(numbers, size);

    for (auto num: numbers) {
        cout << num << ", ";
    }

    return 0;
}

void selectionSort(int arr[], int size) {
    int temp, min;
    for (int i = 0; i < size; ++i) {
        // Set the current index as the minimum
        min = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[min]) {
                // Update the minimum if the current is lower than what we had previously
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}