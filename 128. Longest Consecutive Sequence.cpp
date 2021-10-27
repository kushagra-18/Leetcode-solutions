class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // set
        unordered_set <int> st;
        
        int n = nums.size(),largest = 1;
        //base case
        if(n==0)
            return 0;
        // insertion in set
        for(auto x: nums){
            
            st.insert(x);
        }
        
        for(auto el: st){
            
            int parent = el - 1;
            
            if(st.find(parent)==st.end()){
                
                int nextNo = el + 1;
                int count = 1;
                
                while(st.find(nextNo)!= st.end()){
                    
                    nextNo++;
                    count++;
                }
                
                largest = max(largest,count);
                
            }
            
            
            
        }
        
        return largest;
    }
};
