// Problem: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Category: Easy
// Language: C++
// Time Complexity: O(n), Space Complexity: O(1)


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> answer;

        int st=0;
        int en=numbers.size()-1;

        while(st<en){
            if(numbers[st]+numbers[en]==target){
                answer.push_back(st+1);
                answer.push_back(en+1);
                break;
            }else if(numbers[st]+numbers[en]<target){
                st++;
            }else{
                en--;
            }
        }

        return answer;
    }
};
