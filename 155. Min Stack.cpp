class MinStack {
public:
    stack<int> st;
    int min = INT_MAX;
    
    void push(int x) {
        if(x <= min) {
            st.push(min);
            min = x;
        }
        st.push(x);
    }

    void pop() {
        if(st.top() == min) {
            st.pop();
            min = st.top();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return min;
    }
};