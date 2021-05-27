class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        mergesort(nums,s,e);
        return nums;
        }
    
    void merge (vector<int>&nums , int s, int m, int e){
        int a = m-s+1;
        int b = e-m;
        int L[a], R[b];
        for (int i =0;i<a;++i)
        {
            L[i]=nums[s+i];
        }
        for (int j =0;j<b;++j)
        {
            R[j]=nums[m+1+j];
        }
        int i=0,j=0,k=s;
        while (i < a && j < b) {
        if (L[i] <= R[j]) {
            nums[k] = L[i];
            i++;
        }
        else {
            nums[k] = R[j];
            j++;
        }
        k++;
        }
        while (i < a) {
        nums[k] = L[i];
        i++;
        k++;
    }
        while (j < b) {
        nums[k] = R[j];
        j++;
        k++;
    }
        //return nums;
    }
    
    
     void mergesort(vector<int>& nums , int s , int e){
        if (s>=e){
            return;
        }
        int m = (s+e)/2;
        mergesort (nums,s,m);
        mergesort (nums,m+1,e);
        merge (nums,s,m,e);    
        //return nums;
    }
        
};
