#include <iostream>
#include <chrono>

using namespace std;

void findNemo(const string [], int);

int main() {
    string nemo[] = {"nemo"};
    string everyone[] = {"dory", "bruce", "marlin", "nemo", "gill", "bloat", "nigel", "squirt", "darla", "hank"};
    string large[10000];
    fill_n(large, size(large), "nemo");
    findNemo(large, size(large)); // O(n) --> Linear Time

    return 0;
}

void findNemo(const string arr[], int size) {
//    auto t0 = chrono::system_clock::now();
    for (int i = 0; i < size; ++i) {
        if (arr[i] == "nemo")
            cout << "Found Nemo!" << endl;
    }
//    auto t1 = chrono::system_clock::now();
//    auto duration = chrono::duration_cast<chrono::milliseconds>(t1-t0).count();
//    cout<<"Call to find Nemo took "<<duration<< " milliseconds"<<endl;
}
