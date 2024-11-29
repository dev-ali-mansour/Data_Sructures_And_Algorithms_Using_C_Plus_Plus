#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size);

int main() {
    int numbers[] = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
    int size = std::size(numbers);
    bubbleSort(numbers, size);
    for (auto number: numbers) {
        cout << number << ", ";
    }

    return 0;
}

void bubbleSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap numbers
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}