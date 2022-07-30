class MyHashMap {
public:
    
    vector<vector<pair<int,int>>> map;
    const int SIZE = 997;
    MyHashMap() {
        
        map.resize(SIZE);
    }
    
    void put(int key, int value) {
     
        int idx = key%SIZE;
        
        vector<pair<int,int>> &row = map[idx];
        
        for(auto &x:row){
            
            if(x.first == key){
                x.second = value;
                return;
            }
        }
        
        row.push_back({key,value});
        
    }
    
    int get(int key) {
       
        int idx = key%SIZE;
        
        vector<pair<int,int>> &row = map[idx];
        
        for(auto &x:row){
            
            if(x.first == key){
                return x.second;
            }
        }
        
        return -1;
    }
    
    void remove(int key) {
        
        int idx = key%SIZE;
        
        vector<pair<int,int>> &row = map[idx];
        
        for(auto &x:row){
            
            if(x.first == key){
                x.second = -1;
            }
        }
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */