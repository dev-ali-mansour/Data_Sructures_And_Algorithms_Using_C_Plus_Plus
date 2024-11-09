#include <iostream>
#include <utility>
#include <vector>

using namespace std;

// Find 1st and nth

struct Tweet {
    string message;
    int date;

    Tweet(string tweet, int date) : message(std::move(tweet)), date(date) {}
};

void getFirstAndLastTweet(vector<string> input);

void getFirstAndLastTweet(vector<Tweet> input);


int main() {
    vector<string> arr = {"Hi", "my", "teddy"};
    vector<Tweet> arr2 = {
            Tweet("hi", 2012),
            Tweet("my", 2019),
            Tweet("teddy", 2018)
    };

    getFirstAndLastTweet(arr);  // O(1)
    getFirstAndLastTweet(arr2); // O(n)

    return 0;
}

void getFirstAndLastTweet(vector<string> input) {
    const auto &first = input[0];   // O(1)
    const auto &last = input[input.size() - 1]; // O(1)
    cout << "First: " << first << endl << "Last: " << last << endl;
}   // O(1)

void getFirstAndLastTweet(vector<Tweet> input) {
    auto &first = input[0];
    auto &last = input[input.size() - 1];

    for (auto &tweet: input) {
        if (tweet.date < first.date)
            first = tweet;
        else if (tweet.date > last.date)
            last = tweet;
    }
    cout << "First: " << first.message << endl
         << "Last: " << last.message << endl;
}   // O(n)
