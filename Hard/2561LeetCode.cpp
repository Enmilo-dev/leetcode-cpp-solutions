// Problem: https://leetcode.com/problems/rearranging-fruits/
// Category: Hard
// Language: C++
// Time Complexity: O(nlogn), Space Complexity: O(n)


class Solution {
public:
    vector<int> el;
    unordered_map<int, int> seen;
    int cal(unordered_map<int, int> f1, unordered_map<int,int> f2){
        for(auto &[k,v]: f1){
            if(seen[k]) continue;
            seen[k]=1;
            if((f1[k]+f2[k])%2!=0){
                return -1;
            }
            if(f1[k]!=f2[k]){
                int count= abs(f1[k]-f2[k]);
                count/=2;
                while(count--){
                    el.push_back(k);
                }
            }
        }
        return 1;
    }

    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> b1, b2;
        int mn=1e9;
        for(auto val: basket1){
            b1[val]++;
            mn=min(mn, val);
        }

        for(auto val: basket2){
            b2[val]++;
            mn=min(mn, val);
        }

        if(cal(b1, b2)==-1) return -1;
        if(cal(b2, b1)==-1) return -1;

        sort(el.begin(), el.end());
        long long ans=0;
        int swap=0;

        for(int i=0; i<el.size()/2; i++){
            if(el[i]<=2*mn){
                swap+=2;
                ans+=el[i];
            }
        }

        ans+=(long)(el.size()-swap)*mn;

        return ans;
    }
};
