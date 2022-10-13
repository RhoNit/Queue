class MyQueue {
public:
    stack<int> st1, st2;
    
    MyQueue() {}
    
    void push(int x) {
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int res;
        if(!st1.empty()) {
            res = st1.top();
            st1.pop();
        }
        else { res = -1; }
        
        return res;
    }
    
    int peek() {
        if(!st1.empty()) {
            return st1.top();
        }
        return -1;
    }
    
    bool empty() {
        if(st1.empty()) { return true; }
        return false;
    }
};
