class MyStack {
public:
    queue<int> st;
    MyStack() {
        
        st = queue<int>();
    }
    
    void push(int x) {
         
        st.push(x);
        int n = st.size();
            
        for(int i = 0;i<n-1;i++){
                auto top = st.front();
                st.push(top);
                st.pop();
               
            }    
        }
    
    int pop() {
        
        auto val = st.front();
        st.pop();
        return val;
    }
    
    int top() {
        
        return st.front();
        
    }
    
    bool empty() {
        
        return (st.size()==0)?true:false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */