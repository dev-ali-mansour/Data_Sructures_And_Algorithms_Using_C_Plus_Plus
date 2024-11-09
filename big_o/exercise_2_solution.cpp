#include <iostream>
#include <vector>

using namespace std;

template<class T>
void anotherFunChallenge(vector<T> input) {
    int a = 5;                              // O(1)
    int b = 10;                             // O(1)
    int c = 50;                             // O(1)

    for (const auto &item: input) {         // O(n)
        int x = item + 1;                   // O(n)
        int y = item + 2;                   // O(n)
        int z = item + 3;                   // O(n)
    }

    for (const auto &item: input) {         // O(n)
        int p = item * 2;                   // O(n)
        int q = item * 2;                   // O(n)
    }

    string whoAmI = "I don't know";         // O(1)
}   // O(4 + 7n) --> O(n)