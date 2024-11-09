#include <iostream>
#include <vector>

using namespace std;

template<class T>
void logBoxes(vector<T> boxes);

template<class T>
void logFirstBox(vector<T> boxes);

template<class T>
void logFirstTwoBoxes(vector<T> boxes);

int main() {
    vector<int> boxes = {1, 2, 3, 4, 5};

    cout << "Log All Boxes" << endl;
    logBoxes(boxes);
    cout << "Log First Box" << endl;
    logFirstBox(boxes);
    cout << "Log First Two Boxes" << endl;
    logFirstTwoBoxes(boxes);

    return 0;
}

// O(n) --> Linear Time
template<class T>
void logBoxes(vector<T> boxes) {
    for (int i = 0; i < boxes.size(); i++) {
        cout << boxes[i] << endl;
    }
}

// O(1) --> Constant Time
template<class T>
void logFirstBox(vector<T> boxes) {
    cout << boxes[0] << endl;
}

// O(2) --> O(1) --> Constant Time
template<class T>
void logFirstTwoBoxes(vector<T> boxes) {
    cout << boxes[0] << endl;
    cout << boxes[1] << endl;
}

