// Problem: https://leetcode.com/problems/next-greater-element-i/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> store;
        unordered_map<int, int> res;
        for(int i=nums2.size()-1; i>=0; i--){
            while(store.size()>0 && store.top()<=nums2[i]){
                store.pop();
            }

            if(store.empty()) res[nums2[i]]=-1;
            else res[nums2[i]]=store.top();
            store.push(nums2[i]);
        }

        vector<int> answer;
        for(const auto val: nums1){
            answer.push_back(res[val]);
        }

        return answer;
    }
};
