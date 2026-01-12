class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            water = max(water, h * width);

            if (height[left] > height[right])
                right--;
            else
                left++;
        }
        return water;
    }
};
