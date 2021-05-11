class Solution {
public:
int Find(vector<int> & a, int target, int res) {
        int l = 0;
        int r = a.size()-1;
        int pos = -1;
        while(l <= r) {
            int mid = (l+r) / 2;
            if ((a[mid] < target) || (a[mid] == target && mid <= res)) { 
                l = mid + 1;
                pos = mid;
            }
            else r = mid - 1;    
        }
       return pos;
    }
    
    void BinarySearch(vector<int> & nums1, vector<int> & nums2, double & ans) {
        int n = nums1.size();
        int m = nums2.size();
        int l = 0;
        int r = n-1;
        int half = (n+m+1)/2;
        while(l <= r) {
            int mid = (l+r)/2;
            int pos = Find(nums2, nums1[mid], half - mid - 2);
            if (pos + mid + 2 == half) {
                if((n+m) % 2 == 0) ans = ((double)(nums1[mid] + min(mid + 1 < n ? nums1[mid+1] : INT_MAX, pos + 1 < m ? nums2[pos+1] : INT_MAX)) /2 );
                else ans = nums1[mid];
                break;
            }
            else if (pos + mid + 2 < half) l = mid+1;
            else r = mid-1;
        }
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0;
        BinarySearch(nums1, nums2, ans);
        BinarySearch(nums2, nums1, ans);
        return ans;
    }
};
