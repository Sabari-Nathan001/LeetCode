class MyStack {
public:
    queue<int> q;
    void push(int x) {
        q.push(x);
        int k=q.size()-1;
        while(k>0){
            q.push(q.front());
            q.pop();
            k--;
        }
    }
    int pop() {
        if (!q.empty()){
            int top=q.front();
            q.pop();
            return top;
        }
        return -1;
    }
    
    int top() {
        return !q.empty()?q.front():-1;
    }
    bool empty() {
        return q.empty();
    }
};