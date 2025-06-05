class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int end=nums.size()-1;
        int start=0;
        int mid=start+ (end-start)/2;

        while(start<end)
        {
            mid= start + (end-start)/2;
            if(nums[mid]>nums[mid+1])end=mid;
            else start=mid+1;
        }
        return end;
    }
};