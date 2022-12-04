class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        sort(skill.begin(),skill.end());
        
        unordered_set<int> st;
        
        long long sum = 0;
        
        int j = skill.size()-1;
        int i = 0;
        
        int skillTot;
        
        while(i<j){
            
            skillTot = skill[i]+skill[j];
            
            st.insert(skillTot);
            
            if(st.size()>1)
                return -1;
            
            sum+= skill[i]*skill[j];

            i++;
            j--;
        }
        
        return sum;
    }
};