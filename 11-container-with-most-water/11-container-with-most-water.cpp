class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i = 0;
        int j = height.size()-1;
        
        int maxArea = 0;
        
        int minPillar;
        while(i<j){
            
        minPillar = min(height[i],height[j]);
            
        maxArea = max(maxArea,minPillar*(j-i));
            
        if(height[i]<height[j])
            i++;
        else
            j--;
            
        }
        
        return maxArea;
    }
};