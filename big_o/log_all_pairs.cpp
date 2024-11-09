#include <iostream>
#include <vector>

using namespace std;

void logAllPairsOfArray(const vector<char> &boxes);

int main() {
    vector<char> boxes = {'a', 'b', 'c', 'd', 'e'};
    logAllPairsOfArray(boxes);
}

void logAllPairsOfArray(const vector<char> &boxes) {
    for (const auto &x: boxes) {
        for (const auto &y: boxes) {
            cout << "(" << x << ", " << y << ")\n";
        }
    }
}