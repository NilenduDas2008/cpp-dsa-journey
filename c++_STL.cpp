#include <bits/stdc++.h>
using namespace std;

/*
=====================================================
1. FUNCTIONS
=====================================================
*/

void sayHello() {
    cout << "Hello\n";
}

int add(int a, int b) {
    return a + b;
}

/*
=====================================================
2. CONTAINERS (DETAILED)
=====================================================
*/

void containers_demo() {

    /*
    ----------- PAIR -----------
    */
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << "\n";

    pair<int, pair<int, int>> np = {1, {2, 3}};

    /*
    ----------- VECTOR -----------
    */
    vector<int> v = {1, 2, 3};

    v.push_back(4);
    v.emplace_back(5);

    cout << "Size: " << v.size() << "\n";
    cout << "Capacity: " << v.capacity() << "\n";

    // insert & erase
    v.insert(v.begin(), 100);
    v.erase(v.begin());

    // resize
    v.resize(10, 0);

    // iteration
    for (auto it : v) cout << it << " ";
    cout << "\n";

    /*
    ----------- LIST -----------
    */
    list<int> ls;
    ls.push_back(10);
    ls.push_front(5);

    /*
    ----------- DEQUE -----------
    */
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(5);

    /*
    ----------- STACK -----------
    */
    stack<int> st;
    st.push(1);
    st.push(2);
    st.pop();

    /*
    ----------- QUEUE -----------
    */
    queue<int> q;
    q.push(1);
    q.push(2);
    q.pop();

    /*
    ----------- PRIORITY QUEUE -----------
    */
    priority_queue<int> maxpq;
    maxpq.push(10);
    maxpq.push(5);

    // min heap
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(10);
    minpq.push(5);

    /*
    ----------- SET -----------
    */
    set<int> s = {1, 2, 3};

    s.insert(4);
    s.erase(2);

    // lower_bound / upper_bound
    auto lb = s.lower_bound(2);
    auto ub = s.upper_bound(2);

    /*
    ----------- MULTISET -----------
    */
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10); // duplicates allowed

    /*
    ----------- UNORDERED SET -----------
    */
    unordered_set<int> us;
    us.insert(1);

    /*
    ----------- MAP -----------
    */
    map<int, string> mp;
    mp[1] = "one";
    mp[2] = "two";

    // find
    if (mp.find(1) != mp.end()) {
        cout << mp[1] << "\n";
    }

    // lower_bound
    auto it = mp.lower_bound(1);

    /*
    ----------- UNORDERED MAP -----------
    */
    unordered_map<int, int> ump;
    ump[1] = 100;
}

/*
=====================================================
3. ITERATORS (IMPORTANT CONCEPT)
=====================================================
*/

void iterator_demo() {
    vector<int> v = {1, 2, 3};

    // normal iterator
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    // reverse iterator
    for (auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    // reference (no copy)
    for (auto &it : v) {
        it += 1;
    }
}

/*
=====================================================
4. ALGORITHMS (MUST KNOW)
=====================================================
*/

bool comp(int a, int b) {
    return a > b; // descending
}

void algorithms_demo() {

    vector<int> v = {4, 2, 5, 1, 3};

    // sort
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), comp);

    // binary search (sorted required)
    bool found = binary_search(v.begin(), v.end(), 3);

    // lower_bound / upper_bound
    auto lb = lower_bound(v.begin(), v.end(), 3);
    auto ub = upper_bound(v.begin(), v.end(), 3);

    // min / max
    cout << *max_element(v.begin(), v.end()) << "\n";
    cout << *min_element(v.begin(), v.end()) << "\n";

    // reverse
    reverse(v.begin(), v.end());

    // count
    cout << count(v.begin(), v.end(), 3) << "\n";

    /*
    ----------- BIT -----------
    */
    int x = 7;
    cout << __builtin_popcount(x) << "\n";

    /*
    ----------- PERMUTATION -----------
    */
    vector<int> perm = {1, 2, 3};

    do {
        for (int i : perm) cout << i << " ";
        cout << "\n";
    } while (next_permutation(perm.begin(), perm.end()));
}

/*
=====================================================
MAIN
=====================================================
*/

int main() {

    sayHello();
    cout << add(2, 3) << "\n";

    containers_demo();
    iterator_demo();
    algorithms_demo();

    return 0;
}