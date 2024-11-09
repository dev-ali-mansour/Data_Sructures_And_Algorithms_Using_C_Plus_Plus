#include <iostream>

using namespace std;

// Rule 1: Worst case
void findNemo(const string arr[], int size);

int main() {
    string everyone[] = {"dory", "bruce", "marlin", "nemo", "gill", "bloat", "nigel", "squirt", "darla", "hank"};
    findNemo(everyone, size(everyone));
}

void findNemo(const string arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == "nemo") {
            cout << "Found Nemo!" << endl;
            break;
        }
    }
}