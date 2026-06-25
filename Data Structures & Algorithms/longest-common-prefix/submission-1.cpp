class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string solution = "";
        int n = strs.size();
        for(int i = 0; i< strs[0].size() ; i++){
            for(int j = 0; j < n-1; j++){
                if(strs[j][i] != strs[j+1][i])
                    return solution;
            }
            solution.push_back(strs[0][i]);
        }
        return solution;
    }
};