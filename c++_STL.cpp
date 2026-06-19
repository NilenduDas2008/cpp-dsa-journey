#include <bits/stdc++.h> // all standard libraries
using namespace std;

/*
=====================================================
1. FUNCTIONS (Void & Return Type)
=====================================================
*/

// void function (does not return anything)
void sayHello() {
    cout << "Hello from void function\n";
}

// return type function
int add(int a, int b) {
    return a + b;
}

/*
=====================================================
2. CONTAINERS
=====================================================
*/

void containers_demo() {

    /*
    ----------- PAIR -----------
    */
    pair<int, int> p = {1, 2};
    cout << "Pair: " << p.first << " " << p.second << "\n";

    // nested pair
    pair<int, pair<int, int>> np = {1, {2, 3}};
    cout << "Nested Pair: " << np.first << " " << np.second.second << "\n";


    /*
    ----------- VECTOR -----------
    */
    vector<int> v;

    v.push_back(10);        // adds element
    v.emplace_back(20);     // faster than push_back

    vector<int> v2(5, 100); // size 5, all elements = 100

    vector<int> copyV = v2; // copying vector

    cout << "Vector elements: ";
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout << "\n";

    // iterator
    cout << "Using iterator: ";
    for (auto it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";


    /*
    ----------- LIST (Doubly Linked List) -----------
    */
    list<int> ls;
    ls.push_back(10);
    ls.push_front(5);

    cout << "List: ";
    for (auto it : ls) cout << it << " ";
    cout << "\n";


    /*
    ----------- DEQUE -----------
    */
    deque<int> dq;
    dq.push_back(10);
    dq.push_front(5);

    cout << "Deque: ";
    for (auto it : dq) cout << it << " ";
    cout << "\n";


    /*
    ----------- STACK (LIFO) -----------
    */
    stack<int> st;
    st.push(10);
    st.push(20);

    cout << "Stack top: " << st.top() << "\n";
    st.pop(); // removes top


    /*
    ----------- QUEUE (FIFO) -----------
    */
    queue<int> q;
    q.push(10);
    q.push(20);

    cout << "Queue front: " << q.front() << "\n";
    cout << "Queue back: " << q.back() << "\n";
    q.pop();


    /*
    ----------- PRIORITY QUEUE -----------
    */
    // max heap (default)
    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout << "Max Heap top: " << pq.top() << "\n";

    // min heap
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(10);
    minpq.push(50);
    minpq.push(20);

    cout << "Min Heap top: " << minpq.top() << "\n";


    /*
    ----------- SET (unique + sorted) -----------
    */
    set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(10); // duplicate ignored

    cout << "Set: ";
    for (auto it : s) cout << it << " ";
    cout << "\n";

    cout << "Find 5: " << (s.find(5) != s.end()) << "\n";


    /*
    ----------- MULTISET (duplicates allowed) -----------
    */
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);

    cout << "Multiset count of 10: " << ms.count(10) << "\n";


    /*
    ----------- UNORDERED SET -----------
    */
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);

    cout << "Unordered Set: ";
    for (auto it : us) cout << it << " ";
    cout << "\n";


    /*
    ----------- MAP (key-value, sorted) -----------
    */
    map<int, string> mp;
    mp[1] = "one";
    mp[2] = "two";

    cout << "Map: ";
    for (auto it : mp) {
        cout << it.first << "->" << it.second << " ";
    }
    cout << "\n";


    /*
    ----------- MULTIMAP -----------
    */
    multimap<int, string> mmp;
    mmp.insert({1, "one"});
    mmp.insert({1, "uno"});


    /*
    ----------- UNORDERED MAP -----------
    */
    unordered_map<int, string> ump;
    ump[1] = "one";
    ump[2] = "two";
}


/*
=====================================================
3. ITERATORS
=====================================================
*/

void iterator_demo() {
    vector<int> v = {1, 2, 3, 4};

    // begin() to end()
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n";

    // reverse iteration
    for (auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }
    cout << "\n";
}


/*
=====================================================
4. ALGORITHMS
=====================================================
*/

// custom comparator (descending)
bool comp(int a, int b) {
    return a > b;
}

void algorithms_demo() {

    vector<int> v = {4, 2, 5, 1, 3};

    /*
    ----------- SORT -----------
    */
    sort(v.begin(), v.end()); // ascending
    sort(v.begin(), v.end(), comp); // custom (descending)

    /*
    ----------- MIN / MAX -----------
    */
    cout << "Max: " << *max_element(v.begin(), v.end()) << "\n";
    cout << "Min: " << *min_element(v.begin(), v.end()) << "\n";


    /*
    ----------- BIT MANIPULATION -----------
    */
    int x = 7; // binary: 111
    cout << "Set bits: " << __builtin_popcount(x) << "\n";


    /*
    ----------- PERMUTATION -----------
    */
    vector<int> perm = {1, 2, 3};

    cout << "Permutations:\n";
    do {
        for (int i : perm) cout << i << " ";
        cout << "\n";
    } while (next_permutation(perm.begin(), perm.end()));
}


/*
=====================================================
MAIN FUNCTION
=====================================================
*/

int main() {

    // functions
    sayHello();
    cout << "Sum: " << add(5, 3) << "\n";

    // containers
    containers_demo();

    // iterators
    iterator_demo();

    // algorithms
    algorithms_demo();

    return 0;
}