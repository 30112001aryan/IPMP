class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        return binsearch (nums,h,l);
    }
    
    int binsearch (vector<int>& nums,int h,int l){
                int low = 0;
        int high = nums.size() - 1;
        int mid = (low + high)/2;
        while(low < high)
        {
            if(nums[mid] > nums[mid + 1])
                high = mid;
            else
                low = mid+1;
            mid = (low + high)/2;
        }
        return mid;
        
        
    }
};

//short approach
return max_element(nums.begin(), nums.end()) - nums.begin();
