#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int lptr = 0;
        int rptr = s.size() - 1;

        while (rptr > lptr) {
            char rptrChar = s[rptr];
            s[rptr] = s[lptr];
            s[lptr] = rptrChar;
            rptr--;
            lptr++;
        }
    }
};

int main() {
    vector<char> s = {};
    Solution sltn;
    sltn.reverseString(s);

    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
    }
    cout << endl;

    return 0;
}