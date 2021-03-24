class Solution {
public:
    bool isVowel(char ch)
    {
        char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(char v : vowels)
        {
            if(ch == v) return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {

        int count = 0;
        for(int i = 0; i < s.length()/2; i++)
        {
            if(isVowel(s[i])) count++;
            if(isVowel(s[s.length()-1-i])) count--;
        }
        
        if(count == 0){
            
            return true;
        }else
        
        return false;
    }
};