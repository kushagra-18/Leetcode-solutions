// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
    int hi = n;
    int lo = 1;
    int mid;
        
    while(lo<hi){
        
        mid = lo + (hi - lo) / 2;
        if(isBadVersion(mid))
            hi = mid;
        else
            lo = mid + 1;
        
        }
        
        return lo;
    }
};