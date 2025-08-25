// Problem: hhttps://leetcode.com/problems/range-sum-query-immutable/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class NumArray {
public:
    vector<int> prefixSum;
    NumArray(vector<int>& nums) {
        prefixSum.push_back(nums[0]);
        
        for (auto val: nums) {
            prefixSum.push_back(prefixSum.back() + val);
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSum[right + 1] - prefixSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
