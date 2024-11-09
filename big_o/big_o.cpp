#include <iostream>

using namespace std;

template<class T>
void logBoxes(T boxes[], int size);

template<class T>
void logFirstBox(T boxes[]);

template<class T>
void logFirstTwoBoxes(T boxes[]);

int main() {
    int size = 5;
    int boxes[] = {1, 2, 3, 4, 5};

    cout << "Log All Boxes" << endl;
    logBoxes(boxes, size);
    cout << "Log First Box" << endl;
    logFirstBox(boxes);
    cout << "Log First Two Boxes" << endl;
    logFirstTwoBoxes(boxes);

    return 0;
}

// O(n) --> Linear Time
template<class T>
void logBoxes(T boxes[], int size) {
    for (int i = 0; i < size; i++) {
        cout << boxes[i] << endl;
    }
}

// O(1) --> Constant Time
template<class T>
void logFirstBox(T boxes[]) {
    cout << boxes[0] << endl;
}

// O(2) --> O(1) --> Constant Time
template<class T>
void logFirstTwoBoxes(T boxes[]) {
    cout << boxes[0] << endl;
    cout << boxes[1] << endl;
}

