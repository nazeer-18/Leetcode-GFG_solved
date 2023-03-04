class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> s1;
    stack<int> s2;
    void push(int x) {
        s1.push(x);
    }
    int pop() {
        int val = peek();
        s2.pop();
        return val;
    }
    int peek() {
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top()),s1.pop();
            }
        }
        return s2.top();
    }
    bool empty() {
        return s2.empty()&&s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */