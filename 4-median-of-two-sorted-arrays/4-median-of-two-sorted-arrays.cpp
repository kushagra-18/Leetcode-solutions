class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        
        int n = nums1.size();
        int m = nums2.size();
        
        int i = 0;
        int j = 0;
        
        while(i<n && j<m){
            
            if(nums1[i]>=nums2[j])
                res.push_back(nums2[j++]);
            else
                res.push_back(nums1[i++]);
            
        }
        
        while(i<n)
            res.push_back(nums1[i++]);
        
        while(j<m)
             res.push_back(nums2[j++]);
        
        for(auto x:res)
            cout<<x<<" ";
        
        int k = res.size();

        
       return (k%2==0)?(res[k/2]+res[(k/2)-1])/2.0:res[k/2];
        
    
        
        return {};
    }
};