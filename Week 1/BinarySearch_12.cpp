class Solution {
public:
   int findMin(vector<int>& nums) {
        
        int l, r, mid =0, n= nums.size();
        
        l=0, r= n-1;
        
        while(l<r){
            
            mid = l+(r-l)/2;
            
            if(nums[mid] > nums[r])
                l = mid+1;
            else
                r = mid;
        }
        
        return nums[l];
    }
};
