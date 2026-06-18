//creating a pattern like this
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5 

#include <bits/stdc++.h>
using namespace std;

void pattern4 (int n){

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << n;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "whats n:";
    cin >> n;
    pattern4(n);
   
}