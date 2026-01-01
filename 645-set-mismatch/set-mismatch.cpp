class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int dup = -1, missing = 1;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1]){
                dup = nums[i];
            }
        }
        
        // Find missing using expected sum of 1 to n
        long long n = nums.size();
        long long sum = n * (n + 1) / 2;
        long long arrSum = 0;
        for(int num : nums) arrSum += num;
        
        missing = sum - (arrSum - dup);
        
        return {dup, missing};
    }
};
