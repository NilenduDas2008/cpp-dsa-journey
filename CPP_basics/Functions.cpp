#include<bits/stdc++.h>
using namespace std;
// functions are set of code which performs something for you
// functions are used to modularise code 
// functions are used to increase readability
// functions are used to use same code multiple times
// void --> which does not return anything 
// return
//parameterised 
//non parameterised

// void print_name() {
//     cout << "Hey Nil";
// }

// int main() {
//    print_name() ;
//  return 0 ;
// }

// void printname( string name ) {
//       cout << "Hey  " << name << endl;
// }
// int main() {
//         string name ;
//         cin >> name ;
//         printname(name);
        
//         string name2 ;
//         cin >> name2;
//         printname(name2);
//     return 0;
// }


// int sum(int num1 , int num2) {
//     int num3 = num1 + num2;
//     return num3;
// }

// int main () {
//     int num1 , num2;
//     cin >> num1 >> num2 ;
//     int result = sum(num1 , num2);
//     cout << result;
//     return 0;
// }



void sum(int num1, int num2) {
    int num3 = num1 + num2;
    cout << num3;
}

int main () {
    int num1 , num2 ;
    cin >> num1 >> num2 ;
     sum(num1 , num2);
   
    return 0;
}

