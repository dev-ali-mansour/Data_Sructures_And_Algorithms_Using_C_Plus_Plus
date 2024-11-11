#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasPairWithSum(const vector<int> &arr, int sum);

bool hasPairWithSum2(const vector<int> &arr, int sum);


int main() {
    cout << boolalpha;
    vector<int> arr = {6, 4, 3, 2, 1, 7};
    cout << hasPairWithSum2(arr, 5) << endl;
}

// Naive
bool hasPairWithSum(const vector<int> &arr, int sum) {
    for (const auto &num1: arr) {
        for (const auto &num2: arr) {
            if (num1 + num2 == sum) return true;
        }
    }
    return false;
}

// Better
bool hasPairWithSum2(const vector<int> &arr, int sum) {
    unordered_set<int> set;
    for (const auto &num: arr) {
        if (set.find(num) != set.end()) return true;
        else set.insert(sum - num);
    }
    return false;
}