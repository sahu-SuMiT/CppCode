ITERATORS / Operations on VECTORS
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
ALGORITHMS
    sort(start_included, end_excluded);
    sort(v.begin(),v.end());
    sort(start_included, end_excluded, greater<int>);
    sort(start, end, comp);//means sort according to second element in increasing order, if they are same sort according to first element in decending.
    bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;
        if(p1.first > p2.first) return true;
        return false;
    }
    int num = 7;
    int cnt = __builtin_popcount(num);
    long long num = 165786578687;
    int cnt = __builtin_popcountll(num);
    std::string s = "123"; //#include <algorithm>
        do{
            std::cout << s << '\n';
        }while(std::next_permutation(s.begin(),s.end()));
    int maxi = *max_element(a,a+n);
    int mini = *min_element(a,a+n);

