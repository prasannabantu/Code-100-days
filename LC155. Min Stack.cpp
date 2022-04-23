class MinStack {
public:
stack<int>mst;
stack<int>st;
MinStack() {

}

void push(int val) {
        st.push(val);
        if(mst.empty()) mst.push(val);
        else
        if(mst.top()>=val) mst.push(val);
}

void pop() {
        int k=st.top();
        st.pop();
        if(k==mst.top())
                mst.pop();
}

int top() {
        return st.top();
}

int getMin() {
        return mst.top();
}
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
