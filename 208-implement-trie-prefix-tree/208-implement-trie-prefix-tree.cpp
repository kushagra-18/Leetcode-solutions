class Trie {
public:
    
    struct Node{
        
        Node *links[26];
	    bool flag = false;
        
        bool isContains(char ch){
            
            return (links[ch-'a']!=nullptr);
        }
        
        void put(char ch,Node *node){
            
            links[ch-'a'] = node;
            
        }
        
        Node* get(char ch){
            return links[ch-'a'];
        }
        
        void setFlag(){
            flag = true;
        }
        
        bool getFlag(){
            return flag;
        }
          
    };
    
public:
    Node* root;
    
    Trie() {
        
        root = new Node();
    }
    
    void insert(string word) {
        
        Node* node = root;
        
        for(int i = 0;i<word.size();i++){
            
            if(!node->isContains(word[i])){
                
                node->put(word[i],new Node());
            }
            
//             move to next ref trie
            node = node->get(word[i]);
        }
        
//         set flag to true
        node->setFlag();
    }
    
    bool search(string word) {
        
        Node* node = root;
        for(int i = 0;i<word.size();i++){  
            if(!node->isContains(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
        
        return node->getFlag();
    }
    
    bool startsWith(string word) {
        
        Node* node = root;
        for(int i = 0;i<word.size();i++){  
            if(!node->isContains(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */