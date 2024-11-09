#include <iostream>

using namespace std;

// Rule 4: Drop Non dominants

void printAllNumbersThenAllPairSums(int numbers[], int size);

int main() {
    int items[] = {1, 5, 6, 9, 8};
    printAllNumbersThenAllPairSums(items, size(items));
}

void printAllNumbersThenAllPairSums(int numbers[], int size) {
    cout << "These are numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << endl;
    }

    cout << "And these are their sums:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << numbers[i] + numbers[j] << endl;
        }
    }
} // O(n^2 + n) --> O(n^2)
