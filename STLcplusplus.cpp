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
SET
    set<int>st;
    auto it = st.find(3);
    auto it = st.find(6);
    st.erase(5);
    st.erase(it1, it2);
    int cnt = st.count(1);
MULTISET
    multiset<int>ms;
    ms.insert(1);{1}
    ms.insert(1);{1, 1}
    ms.insert(1);{1, 1, 1}
    ms.erase(1) //erase all 1 =>{}
    int cnt = ms.count(1)//count how many 1's
    ms.erase(ms.find(1));
    ms.erase(ms.find(1),ms.find(1)+2) // erase(starting_address, end);
UNORDEREDSET
    unorderedset<int>st;//all operations O(1) in worstcase sometimes O(n)
MAP
    map<int,int>mpp; // {key,value}
    map<int,pair<int,int>>mpp;
    map<pair<int,int>,int>mpp;
    mpp[1] = 2;
    mpp.emplace({3,1});
    mpp.insert({2,4});//map stores unique keys in sorted order similar to set datastructure
    for(auto it : mpp){cout << it.first << " " << it.second << endl;}
    map[KEY] //returns value for that key
MULTIMAP
    multimap<int,int>mmp; //can store multiple keys in ordered manner
UNORDEREDMAP
    unorderedmap<int, int>ump; //stores keys in randomised order

