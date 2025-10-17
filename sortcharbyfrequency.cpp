#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    string s = "banana";
    unordered_map<char, int> freq;

    // Count frequency
    for (char c : s)
        freq[c]++;

    // Move map data to vector
    vector<pair<char, int>> arr;
    for (auto &x : freq)
        arr.push_back(x);

    // Manual sort (selection sort)
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j].second > arr[i].second ||
               (arr[j].second == arr[i].second && arr[j].first < arr[i].first)) {
                swap(arr[i], arr[j]);
            }
        }
    }

    // Output characters
    for (auto &p : arr)
        cout << p.first << " ";
}
