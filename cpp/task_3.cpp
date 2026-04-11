#include <string>
#include <map>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0) {
            return 0;
        }

        int lptr = 0;
        int rptr = 0;

        map<char, int> charCounter;

        int bestLength = 0;
        int currentLength = 0;
        do {
            if (charCounter[s[rptr]] == 0) {
                currentLength++;
                charCounter[s[rptr]]++;
                rptr++;
            } else {
                bestLength = bestLength > currentLength ? bestLength : currentLength;
                currentLength--;
                charCounter[s[lptr]]--;
                lptr++;
            }
        } while (rptr != s.length());
        bestLength = bestLength > currentLength ? bestLength : currentLength;

        return bestLength;
    }
};

int main() {
    string s = "aabc";
    Solution sln;
    cout << sln.lengthOfLongestSubstring(s) << endl;

    return 0;
}