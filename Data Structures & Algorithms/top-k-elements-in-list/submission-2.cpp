class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> freq(n+1);
        unordered_map<int,int> m;
        for(int i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        for(auto [key,value]:m){
            freq[value].push_back(key);
        }
        vector<int> sol;
        for(int i = n;(int)sol.size()!= k; i--)
        {
            if(!freq[i].empty()) {
                for(int l:freq[i])
                {
                    sol.push_back(l);
                }
            }
        }
        return sol;
    }
};
