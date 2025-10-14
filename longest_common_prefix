#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    string prefix = strs[0]; // assume first string as prefix

    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            // shrink prefix until it matches
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";
        }
    }

    return prefix;
}

int main() {
    vector<string> words = {"flower", "flow", "flight"};

    cout << "Longest Common Prefix: " << longestCommonPrefix(words) << endl;

    return 0;
}
