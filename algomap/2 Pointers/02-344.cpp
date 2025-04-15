#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;
        while (left <= right)   {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};

int main() {
    Solution sol;
    vector<char> s = {'h','e','l','l','o'};

    sol.reverseString(s);

    cout << "Answer: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
