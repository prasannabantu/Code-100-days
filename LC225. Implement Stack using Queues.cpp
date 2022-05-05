class MyStack {
public:
queue<int>Q;
MyStack() {

}

void push(int x) {
        Q.push(x);
        for(int i=0; i<Q.size()-1; i++)
        {
                int k=Q.front();
                Q.push(k);
                Q.pop();
        }
}

int pop() {
        int k=Q.front();
        Q.pop();
        return k;
}

int top() {
        return Q.front();
}

bool empty() {
        return Q.empty();
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
