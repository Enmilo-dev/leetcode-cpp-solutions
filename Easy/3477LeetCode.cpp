// Problem: https://leetcode.com/problems/fruits-into-baskets-ii
// Category: Easy
// Language: C++
// Time Complexity: O(n^2), Space Complexity: O(1)


class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        for(int i=0; i<fruits.size(); i++){
            int j=0;
            while(j<baskets.size()){
                if(fruits[i]<=baskets[j]){
                    baskets.erase(baskets.begin()+j);
                    break;
                }else{
                    j++;
                }
            }
        }

        return baskets.size();
    }
};
