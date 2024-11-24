#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        bool hasDuplicate(vector<int>& nums) {
            unordered_set<int> hashSet = {};
            size_t arrlen = nums.size();
            for (int i=0; i < arrlen; ++i) {
                if (hashSet.count(nums[i])) {
                    return true;
                } else {
                    hashSet.insert(nums[i]);
                }
            }
            return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 3};
    bool result = solution.hasDuplicate(nums);
    
    cout << boolalpha << "output: " << result << endl;
    return 0;
}

