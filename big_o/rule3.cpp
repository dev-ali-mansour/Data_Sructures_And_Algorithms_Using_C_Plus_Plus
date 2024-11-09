#include <iostream>

using namespace std;

//Rule 3: Different terms for inputs

template<class T>
void compressBoxesTwice(const T [], const T[], int, int);

template<class T>
void compressBoxesTwice2(const T [], const T[], int, int);

int main() {
    int items[] = {1, 5, 6, 9, 8};
    int items2[] = {3, 2, 4, 7, 0};
    compressBoxesTwice(items, items2, size(items), size(items));
    compressBoxesTwice2(items, items2, size(items), size(items));
}

template<class T>
void compressBoxesTwice(const T boxes[], const T boxes2[], int size1, int size2) {
    for (int i = 0; i < size1; ++i) {
        cout << boxes[i];
    }
    cout << endl;
    for (int i = 0; i < size2; ++i) {
        cout << boxes2[i];
    }
    cout << endl;
} // O(a + b)

template<class T>
void compressBoxesTwice2(const T boxes[], const T boxes2[], int size1, int size2) {
    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            cout << "(" << boxes[i] << ", " << boxes2[j] << ")" << endl;
        }
    } // O(a * b)
}