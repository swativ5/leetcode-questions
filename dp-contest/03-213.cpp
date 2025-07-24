#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        if (n == 2) {
            return max(nums[0], nums[1]);
        }
        vector<int> dp1(n, 0);
        dp1[0] = nums[0];
        dp1[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n - 1; i++) {
            dp1[i] = max(dp1[i - 1], nums[i] + dp1[i - 2]);
        }
        vector<int> dp2(n, 0);
        dp2[0] = nums[1];
        dp2[1] = max(nums[1], nums[2]);
        for (int i = 2; i < n - 1; i++) {
            dp2[i] = max(dp2[i - 1], nums[i + 1] + dp2[i - 2]);
        }
        return max(dp1[n - 2], dp2[n - 2]);
    }
};

int main()  {
    Solution s;
    vector<int> nums;


    nums = {2,3,2};
    cout << s.rob(nums) << "\n";

    nums = {1,2,3,1};
    cout << s.rob(nums) << "\n";

    nums = {1,2,3};
    cout << s.rob(nums) << "\n";
}