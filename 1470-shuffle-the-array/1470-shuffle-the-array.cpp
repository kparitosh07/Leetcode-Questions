class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m = nums.size();
        vector<int> ans;
        for(int i=0;i<m/2;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna