class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int m1=m-1, n1=n-1;
        for(int i= m+n-1;i>=0, n1>=0;i--)
        {
            if(m1>=0 and nums1[m1]>nums2[n1])
            {nums1[i] = nums1[m1];
             --m1;}
            
            else
            {nums1[i] = nums2[n1];
             --n1;}
        }
    }
};
