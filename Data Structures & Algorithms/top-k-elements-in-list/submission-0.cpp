class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> solution;
        for(int i = 0 ; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int, int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b){return a.second>b.second;});
        int count = 0;
        for( auto [key, value]:vec)
        {
            if(count < k) solution.push_back(key);
            else break;
            count++;
        }
        return solution;
    }
};
