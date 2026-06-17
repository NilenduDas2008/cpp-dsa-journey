#include<bits/stdc++.h>
using namespace std ;

// int main () {
           
//    int i;
//    for (i=1;i<=5;i=i+1) {
//     cout << "Nil" <<endl;
//    }
// return 0;
// }


int main() {
    // int i;
    // // Start at 5, stay in loop while i is 1 or more, subtract 1 each time
    // for (i = 5; i >= 1; i = i - 1) {
    //     cout << "Nil" << i << endl;
    // }

    // // This will print the value of i AFTER the loop finishes (which will be 0)
    // cout << "Final value of i: " << i << endl;

    int i = 1;
    // while (i<=5) {
    //     cout<<"Nil" <<endl;
    //     i=i+1;
    // }
    do{
    cout<< "Nil" << i <<endl;
    i++;
    } while (i<=5);
    cout << i << endl ;


    return 0;
}

// for loop - when we know the number of times we would continue the loop
// while loop - when we have to continue the loop until something happens 
// do while loop - when we have to perform action before checking the condition 
