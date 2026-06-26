class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> tag;
        for(int a:nums){
            tag[a]++;
        }
        for(auto element: tag){
            if(element.second > nums.size()/2)
            return element.first;
        }
    }
};