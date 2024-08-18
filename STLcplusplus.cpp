ITERATORS / Operations on VECTORS (singly Linked list)
vector<int>::iterator it = v.begin();
for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *(it) <<" ";
}
for(auto it = v.begin(); it != v.end(); it++){
    cout << *(it) <<" ";
}
for(auto it : v){
    cout << it << " ";
}
v.begin() points at the first element
v.end() does not point to the last element, but one later the last element
v.rbegin() points to the last element
v.rend() does not point to the first element, but one ahead of  first element

v.erase(v.begin() + 1) // second element erased & size reduced to 1
v.erase(v.begin() + 1, v.begin() + 3) // second, third and fourth element erased & size reduced

v.insert(v.begin() + 1, 180) // inserted at position 1 value 180
v.insert(v.begin() + 1, 2, 180) // insert at position 1, 2 values, 180 
vector<int> copy(2,50);
v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,rest};

v.size();
v.pop_back();
v.swap(v2);
v.clear() //cleans down to empty vector
v.empty() // true or false

LIST(doubly_linked_list)
list<int> ls;
ls.push_back();
ls.emplace_back();

ls.push_front();  // vector does not have this
ls.emplace_front(); //vector does not have this
// 'class std::vector<int>' has no member named 'emplace_front'
// 'class std::vector<int>' has no member named 'push_front'
//rest functions are same as vectors begin, end, rbegin, rend, clear, insert, size, swap

DEQUE
deque<int> dq;
dq.push_back(10);
dq.emplace_back(20);
dq.push_front(5);
dq.emplace_front(1);

dq.pop_front(); //returns void
dq.pop_back(); // returns void

dq.front(); 
dq.back();
//rest functions are same as vectors begin, end, rbegin, rend, clear, insert, size, swap
PAIR

STACK
    stack<int> st;
    st.push(1); //{1}
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
    //size and swap same
PRIORIY_QUEUE // Min Heap / Max Heap
    //generally push, pop, size, top
    priority_queue<int>pq;
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}
    pq.top();//10
    pq.pop();//{2,5,8}
    //syntax for minimum priority queue
    priority_queue<int, vector<int>, greater<int>>pq;
SET // ordered and unique( and all operations take log N time)
    set<int>st;    
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(3);
    auto it = st.find(3); // returns an iterator pointing at 3 & if this element not there, returns v.end()
    auto it = st.find(6);
    st.erase(5);
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // does not erase element at it2
    int cnt = st.count(1);

    lower_bound() and upper_bound() works the same way in vector
    auto it = st.lower_bound();
    auto it = st.upper_bound();
    //In summary, while lower_bound and upper_bound are useful functions for other containers, they are not necessary for std::set due to its inherent properties.
MULTISET
    multiset<int>ms;
    ms.insert(1);{1}
    ms.insert(1);{1, 1}
    ms.insert(1);{1, 1, 1}
    ms.erase(1) //erase all 1 =>{}
    int cnt = ms.count(1)//count how many 1's
    ms.erase(ms.find(1));
    ms.erase(ms.find(1),ms.find(1)+2) // erase(starting_address, end); //this givs error
UNORDEREDSET
    unorderedset<int>st;//all operations O(1) in worstcase blue_moon O(n)
    
MAP
    map<int,int>mpp; // {key,value}
    map<int,pair<int,int>>mpp;
    map<pair<int,int>,int> mpp;

    map[KEY] = value  //one way to insert elements
    mpp[{1,2}] = 3;
    mpp[{1,1}] = 2;
    mpp[{2,1}] = 3;
    mpp[{1,3}] = 4;   //will be stored in lexiographically order
    auto it = mpp.find({3,3});
    std::cout << "\n" << it->first.first << " " << it->first.second <<" " <<it->second << "\n"; // perhaps for some reason *(it).first does not work
    
    mpp[1] = 2;
    mpp.emplace({3,1});
    mpp.insert({2,4});//map stores unique keys in sorted order similar to set datastructure
    //mpp.insert({KEY, value});
        
    for(auto it : mpp){cout << it.first << " " << it.second << endl;}
    map[KEY] //returns value for that key
    

MULTIMAP
    multimap<int,int>mmp; //can store multiple similar keys in ordered manner

UNORDEREDMAP
    unorderedmap<int, int>ump; //stores keys in randomised order
ALGORITHMS
    sort(a, a+n);
    sort(v.begin(),v.end());
    sort(start, end + 1) //ascending
    sort(start, end + 1, greater<int>);
    sort(start, end, comp);//means sort according to second element in increasing order, if they are same sort according to first element in decending.
    bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;
        //p1.second == p2.second
        if(p1.first > p2.first) return true;
        return false;
    }

    int num = 7;
    int cnt = __builtin_popcount(num); // how many set bits are there (3, 111);
    long long num = 165786578687;
    int cnt = __builtin_popcountll(num);
    std::string s = "123"; //
    #include <algorithm>
    do{
       std::cout << s << '\n';
    }while(std::next_permutation(s.begin(),s.end()));
    //while the string has been arranged in ascending lexio order, there is false return
    int maxi = *max_element(a,a+n); // a is the start iterator
    int mini = *min_element(a,a+n);

