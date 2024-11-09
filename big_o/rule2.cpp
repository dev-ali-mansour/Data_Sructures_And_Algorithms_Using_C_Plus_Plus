#include <iostream>
#include <vector>

using namespace std;

// Rule 2: Remove Constants

template<class T>
void printFirstItemThenFirstHalfThenSayHi100Times(vector<T> items);

template<class T>
void compressBoxesTwice(vector<T> boxes);

int main() {
    vector<int> items = {1, 5, 6, 9, 8};
    printFirstItemThenFirstHalfThenSayHi100Times(items);

    compressBoxesTwice(items);
}

template<class T>
void printFirstItemThenFirstHalfThenSayHi100Times(vector<T> items) {
    cout << items[0] << endl;
    auto middleIndex = items.size() / 2;
    auto index = 0;

    while (index < middleIndex) {
        cout << items[index] << endl;
        index++;
    }
    for (int i = 0; i < 100; ++i) {
        cout << "Hi" << endl;
    }
} // O(1 + n/2 + 100) --> O(n/2 + 101) --> O(n + 1) --> O(n)

template<class T>
void compressBoxesTwice(vector<T> boxes) {
    for (const auto box: boxes) {
        cout << box << endl;
    }

    for (const auto box: boxes) {
        cout << box << endl;
    }
} // O(2n) --> O(n)