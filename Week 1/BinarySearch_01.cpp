class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h = nums.size()-1;
        int l = 0;
        
        
        
        if (0==h+1)
            return -1;
         
        while (h>=l){
            int mid = (h+l)/2;
            if(nums[mid]==target)
                return mid;
            if(target<nums[l] || target>nums[h])
                return -1;
            if (target>nums[mid])
                l=mid+1;
            else 
                h=mid-1;
        }
        return -1;
    }
};
