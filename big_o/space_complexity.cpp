#include <iostream>
#include <vector>

using namespace std;

void booooo(const vector<int> &);

vector<string> arrayOfHiNTimes(int n);

int main() {
    vector<int> input = {1, 2, 3, 4, 5};
    booooo(input);

    auto hiArray = arrayOfHiNTimes(6);
    for (const auto &item: hiArray) {
        cout << item << endl;
    }
}

void booooo(const vector<int> &input) {
    for (int i = 0; i < input.size(); ++i) {
        cout << "boooooooo" << endl;
    }
} // O(1)

vector<string> arrayOfHiNTimes(int n) {
    vector<string> hiArray(n);
    for (int i = 0; i < n; ++i) {
        hiArray[i] = "Hi";
    }
    return hiArray;
} // O(n)
