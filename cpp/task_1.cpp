#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (m.find(complement) != m.end()) {
                return {i, m[complement]};
            }

            m[nums[i]] = i;
        }

        return {};
    }
};