class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i = nums.size()/2;
        nth_element(nums.begin(), nums.begin() + i, nums.end());
        return nums[i];
        
    }
    
    
};

// second approach

class Solution {
public:
int majorityElement(vector<int>& nums) {
sort(nums.begin(),nums.end());

    int n=nums.size();
    if(n==1){
        return nums[0];
    }
    int elem=0,max=1,ans=0;
    for(int i=1;i<n;i++){
      if(nums[i]==nums[i-1]){
          max++;
         if(max>=ans){
        ans=max;
        elem=nums[i];
            }
        }
        else{
            max=1;
        }
        if(max>n/2){
            return elem;
        }

    }
    return elem;
}
};
