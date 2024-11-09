#include <iostream>
#include <vector>

using namespace std;

void anotherFunction();

// What is the Big O of the below function? (Hint, you may want to go line by line)

template<class T>
int funChallenge(vector<T> input) {
    auto a = 10;                // O(1)
    a = 50 + 3;                 // O(1)

    for(const T item:input){    // O(n)
        anotherFunction();      // O(n)
        auto stranger = true;   // O(n)
        a++;                    // O(n)
    }
    return a;                   // O(1)
}   // O(3 + 4n) --> O(n)