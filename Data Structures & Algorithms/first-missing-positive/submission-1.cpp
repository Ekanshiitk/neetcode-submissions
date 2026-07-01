class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i = 0;
        if(nums.size() ==1)
        {
            if(nums[0]==1) return 2;
            else return 1;
        }
        while(i<nums.size())
        {
            if(nums[i] > 0 && nums[i] <= nums.size() && nums[i] != nums[nums[i] - 1])
            {
                swap(nums[i],nums[nums[i]-1]);
                continue;
            }
            i++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]!=i+1)
            return i+1;
        }
    }
};