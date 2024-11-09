#include <iostream>
#include <vector>

using namespace std;

//Rule 3: Different terms for inputs

template<class T>
void compressBoxesTwice(vector<T> boxes, vector<T> boxes2);

template<class T>
void compressBoxesTwice2(vector<T> boxes, vector<T> boxes2);

int main() {
    vector<int> items = {1, 5, 6, 9, 8};
    vector<int> items2 = {3, 2, 4, 7, 0};
    compressBoxesTwice(items, items2);
    compressBoxesTwice2(items, items2);
}

template<class T>
void compressBoxesTwice(vector<T> boxes, vector<T> boxes2) {
    for (int i = 0; i < boxes.size(); ++i) {
        cout << boxes[i];
    }
    cout << endl;
    for (int i = 0; i < boxes2.size(); ++i) {
        cout << boxes2[i];
    }
    cout << endl;
} // O(a + b)

template<class T>
void compressBoxesTwice2(vector<T> boxes, vector<T> boxes2) {
    for (int i = 0; i < boxes.size(); ++i) {
        for (int j = 0; j < boxes2.size(); ++j) {
            cout << "(" << boxes[i] << ", " << boxes2[j] << ")" << endl;
        }
    } // O(a * b)
}