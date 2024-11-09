#include <iostream>
#include <chrono>
#include <vector>

using namespace std;

void findNemo(const vector<string> &arr);

int main() {
    vector<string> nemo = {"nemo"};
    vector<string> everyone = {"dory", "bruce", "marlin", "nemo", "gill", "bloat", "nigel", "squirt", "darla", "hank"};
    vector<string> large(100000);
    fill(large.begin(), large.end(), "nemo");
    findNemo(large); // O(n) --> Linear Time

    return 0;
}

void findNemo(const vector<string> &arr) {
//    auto t0 = chrono::system_clock::now();
    cout << arr.size() << endl;
    for (const auto &i: arr) {
        if (i == "nemo")
            cout << "Found Nemo!" << endl;
        else cout << i << endl;
    }
//    auto t1 = chrono::system_clock::now();
//    auto duration = chrono::duration_cast<chrono::milliseconds>(t1 - t0).count();
//    cout << "Call to find Nemo took " << duration << " milliseconds" << endl;
}
