PAIR
VECTOR
LIST
STACK
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.emplace(3); //{3,2,1}
    st.pop(); //{2,1};
    st.top(); //2
    st.size(); //2
    st.empty();
    st.swap(st2);
QUEUE
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.back() += 5;
    cout << q.back();
    cout << q.front();
    q.pop();
    cout << q.front();
PRIORIY_QUEUE
    priority_queue<int>pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}
    pq.top();//10
    pq.pop();//{2,5,8}
    priority_queue<int, vector<int>, greater<int>>pq;
