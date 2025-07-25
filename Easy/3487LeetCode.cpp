// Problem: https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(n)


class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int>numsTwo;
        vector<int>nT;
        int k=0;

        while(k<nums.size()){
            if(numsTwo.count(nums[k])){
                k++;
                continue;
            }else{
                if(nums[k]<0){
                    k++;
                    continue;
                }
                numsTwo.insert(nums[k]);
                nT.push_back(nums[k++]);
            }
        }

        unordered_set<int> s;
        int maxS=INT_MIN, temp=0;
        int st=0;

        if(nT.size()==0){
            for(auto val: nums){
                maxS=max(maxS, val);
            }
        }

        for(int en=0; en<nT.size(); en++){
            while(s.find(nT[en])!=s.end()){
                temp-=nT[st];
                s.erase(nT[st++]);
            }

            s.insert(nT[en]);
            temp+=nT[en];

            maxS=max(maxS, temp);
        }

        return maxS;
    }
};
