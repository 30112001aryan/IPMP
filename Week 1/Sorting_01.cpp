void swap(int *x, int *y)
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
    void sort(vector<int>& nums) {
          int n=nums.size();
        for(int i=0;i<n-1;i++)
            for(int j=0;j<n-1-i;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(&nums[j],&nums[j+1]);
                }
            }
    }
