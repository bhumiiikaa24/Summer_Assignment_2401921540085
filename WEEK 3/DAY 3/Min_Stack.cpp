class MinStack {
public:
    stack<long long>st;
    long long mini;
    MinStack() {
        
    }
    
    void push(int value) {
        int val=value;
        if(st.empty()){
            mini=val;
            st.push(val);
        }
        else{
            if(val<mini){
                st.push((long long)2*val-mini);
                mini=val;
            }
            else{
                st.push(val);
            }
        }
        
    }
    
    void pop() {
        if(st.empty()){
            return;
        }
        long long ele=st.top();
        st.pop();
        if(ele<mini){
            mini=2*mini-ele;
        }
        
    }
    
    int top() {
        if(st.empty()) return -1;
        long long ele=st.top();
        if(ele<mini){
            return mini;
        }
        else{
            return ele;
        }
    }
    
    int getMin() {
        return mini;
    }
};
