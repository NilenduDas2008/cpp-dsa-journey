// #include<bits/stdc++.h>
// using namespace  std;
// int main() {
//     int arr[5]; // 1D array 
//     cin >> arr[0] >> arr [1] >> arr [2] >> arr [3] >> arr [4];
//     cout << arr[2] << endl;
//      arr[2] += 60;
//      cout << arr[2] <<endl;
//     return 0;
// }

                             // there should be same kind of data in an array 

// #include<bits/stdc++.h>
// using namespace std;
// int main ()  {
//                 //2D array . like matrix row*column
//     int arr [3] [5]; // 3 rows and 5 columns should be in the array
// cout << arr [1] [1]; // (position of the value is 1,3 like a matrix) no specified value so the system will show any kind of random number

//     return 0;
// }

// basics of string

#include<bits/stdc++.h>
using namespace std;
int main () {
        string n = "Nilendu";
        int len = n.size();
        n[len-1] = 'o' ;
        cout << n[len-1];
    return 0;
}