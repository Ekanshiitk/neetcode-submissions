class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = (int)strs.size();
        vector<vector<string>> solution;
        vector<pair<int,string>> tagged;
        for(int i = 0; i < n; i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            tagged.push_back(make_pair(i, s));
        }
        sort(tagged.begin(), tagged.end(), [](const auto&a, const auto&b){return a.second < b.second;});
        vector<string> temp;
        temp.push_back(strs[tagged[0].first]);
        for(int i = 0; i < n-1; i++)
        {
            if(tagged[i+1].second == tagged[i].second)
                temp.push_back(strs[tagged[i+1].first]);
            else{
                solution.push_back(temp);
                temp.clear();
                temp.push_back(strs[tagged[i+1].first]);
            }
        }
        solution.push_back(temp);
        return solution;
    }
};
