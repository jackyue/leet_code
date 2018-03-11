/*************************************************************************************** 
 *
 * 时间复杂度O(n)，空间复杂度O(1)。
 *
 ***************************************************************************************/
 
class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int result = nums[0];
        int count = 1;
        for (uint32_t i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i-1]) {
                if (count == 1) {
                    return nums[i-1];
                } else {
                    count = 1;
                }
            } else {
                ++count;
            }
        }
        return nums[nums.size() - 1];
    }
};