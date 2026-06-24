class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store: Key = Number value, Value = Index of that number
        std::unordered_map<int, int> num_map;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in our map
            if (num_map.find(complement) != num_map.end()) {
                // If found, return the index of the complement and current index
                return {num_map[complement], i};
            }
            
            // If not found, store the current number and its index in the map
            num_map[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (though the problem guarantees one)
        return {};
    }
};
