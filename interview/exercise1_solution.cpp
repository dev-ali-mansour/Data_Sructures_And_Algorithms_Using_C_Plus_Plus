#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

template<class T>
bool contain_Common_item(const vector<T> &arr1, const vector<T> &arr2);

template<class T>
bool contain_Common_item2(const vector<T> &arr1, const vector<T> &arr2);

int main() {
    vector<char> array = {'a', 'b', 'c', 'x'};
    vector<char> array2 = {'z', 'y', 'x'};
    vector<char> emptyArray = {};

    cout<<boolalpha;
    cout << contain_Common_item(array, array2) << endl;
    cout << contain_Common_item2(array, array2) << endl;
    cout << contain_Common_item(emptyArray, emptyArray) << endl;
    cout << contain_Common_item(emptyArray, emptyArray) << endl;

}

// Brute Force Solution --> O(a*b) Time Complexity, O(1) Space Complexity
template<class T>
bool contain_Common_item(const vector<T> &arr1, const vector<T> &arr2) {
    for (const auto &first: arr1) {
        for (const auto &second: arr2) {
            if (first == second) return true;
        }
    }
    return false;
}

// O(a+b) Time Complexity, O(a) Space Complexity
template<class T>
bool contain_Common_item2(const vector<T> &arr1, const vector<T> &arr2) {
    // Loop through the first array and create
    // HashMap where keys == items in the array
    // Can we assume always 2 parameters?
    unordered_map<T, bool> map;
    for (const auto &item: arr1) {
        map[item] = true;
    }
    // Loop through the second array and check
    // if item in the second array exists in
    // the created HashMap
    for (const auto &item: arr2) {
        if (map.find(item) != map.end()) return true;
    }
    return false;
}
