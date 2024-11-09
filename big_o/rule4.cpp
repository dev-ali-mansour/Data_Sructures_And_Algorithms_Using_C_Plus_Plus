#include <iostream>
#include <vector>

using namespace std;

// Rule 4: Drop Non dominants

void printAllNumbersThenAllPairSums(vector<int> numbers);

int main() {
    vector<int> items = {1, 5, 6, 9, 8};
    printAllNumbersThenAllPairSums(items);
}

void printAllNumbersThenAllPairSums(vector<int> numbers) {
    cout << "These are numbers:" << endl;
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << endl;
    }

    cout << "And these are their sums:" << endl;
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = 0; j < numbers.size(); ++j) {
            cout << numbers[i] + numbers[j] << endl;
        }
    }
} // O(n^2 + n) --> O(n^2)
