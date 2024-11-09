#include <iostream>
#include <vector>

using namespace std;

// Rule 1: Worst case
void findNemo(const vector<string>& arr);

int main() {
    vector<string> everyone = {"dory", "bruce", "marlin", "nemo", "gill", "bloat", "nigel", "squirt", "darla", "hank"};
    findNemo(everyone);
}

void findNemo(const vector<string>& arr) {
    for (const auto & i : arr) {
        if (i == "nemo") {
            cout << "Found Nemo!" << endl;
            break;
        }
    }
}