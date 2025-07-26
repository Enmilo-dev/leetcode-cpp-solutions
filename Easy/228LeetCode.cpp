// Problem: https://leetcode.com/problems/summary-ranges
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        if(nums.empty()) return answer;
        int st=nums[0];
        int en=nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i]==en+1){
                en=nums[i];
            }else{
                if(st==en){
                    answer.push_back(to_string(st));
                }else{
                    answer.push_back(to_string(st)+"->"+to_string(en));
                }
                st=nums[i];
                en=nums[i];
            }
        }

        if(st==en){
            answer.push_back(to_string(st));
        }else{
            answer.push_back(to_string(st)+"->"+to_string(en));
        }

        return answer;
    }
};
