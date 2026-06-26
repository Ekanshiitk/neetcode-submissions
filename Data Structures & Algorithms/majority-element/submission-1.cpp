class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> tag;
        for(int a:nums){
            tag[a]++;
        }
        int m = 0;
        for(auto element: tag){
            if(element.second > nums.size()/2)
            return element.first;
        }
    }
};