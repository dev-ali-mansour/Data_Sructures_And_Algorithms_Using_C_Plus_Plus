#include <iostream>

using namespace std;

// Rule 2: Remove Constants

template<class T>
void printFirstItemThenFirstHalfThenSayHi100Times(const T [], int);

template<class T>
void compressBoxesTwice(const T [], int);

int main() {
    int items[] = {1, 5, 6, 9, 8};
    printFirstItemThenFirstHalfThenSayHi100Times(items, size(items));

    compressBoxesTwice(items, size(items));
}

template<class T>
void printFirstItemThenFirstHalfThenSayHi100Times(const T items[], int size) {
    cout << items[0] << endl;
    auto middleIndex = size / 2;
    auto index = 0;

    while (index < middleIndex) {
        cout << items[index]<< endl;
        index++;
    }
    for (int i = 0; i < 100; ++i) {
        cout << "Hi" << endl;
    }
} // O(1 + n/2 + 100) --> O(n/2 + 101) --> O(n + 1) --> O(n)

template<class T>
void compressBoxesTwice(const T boxes[], int size) {
    for (int i = 0; i < size; i++) {
        cout << boxes[i] << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << boxes[i] << endl;
    }
} // O(2n) --> O(n)