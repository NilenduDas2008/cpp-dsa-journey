// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//               int age;
//               cin >> age;
//               if (age<=18) {
//                   cout << "You are a minor." << endl;
//               }
//               else if (age>18 && age<=60) {
//                   cout << "You are an adult." << endl;
//               }
            
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
    // int marks;
    // cout << "Enter your marks: ";
    // cin >> marks;

    // if (marks < 25) {
    //     cout << "Your grade is F" << endl;
    // }
    // else if (marks < 45) {
    //     cout << "Your grade is E" << endl;
    // }
    // else if (marks < 50) {
    //     cout << "Your grade is D" << endl;
    // }
    // else if (marks < 60) {
    //     cout << "Your grade is C" << endl;
    // }
    // else if ( marks < 80) {
    //     cout << "Your grade is B" << endl;
    // }
    // else if (marks <= 100) {
    //     cout << "Your grade is A" << endl;
    // }
    // else {
    //     cout << "Invalid marks" << endl;
    // }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
         int age;
         cout << "ENter your age : ";
          cin >> age ;
          if (age < 18)  
          {
          cout << "not eligible for the job" ;
                                                   }
           else if (age<=54)  {
            cout << "you are eligble" ;
           }                                        
          else if ( age <= 57) {
            cout << "your retirement is soon but you are eligible";
          }

          else if (age>57)  {

            cout << "retirement time" ;
          }
        return 0;
}