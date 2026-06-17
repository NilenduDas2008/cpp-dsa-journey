// #include<bits/stdc++.h>
// using namespace std;
// int main ()  {
//     int day_no ;
//     cout << "The day_no is : " ;
//     cin >> day_no ;
//     if (day_no == 1)  {
//         cout << "It's monday" ;
//     } 
//     else if (day_no == 2)  {
//         cout << "It's tuesday";
//     }
//     else if (day_no == 3)  {
//         cout<< "It's wednesday";
//     }
//     else if (day_no ==4)  {
//     cout << "It's thursday";
//     }
//     else if (day_no == 5)  {
//     cout << "It's friday";
//     }
//     else if (day_no ==6)  {
//         cout << "It's saturday";
//     }
//     else if (day_no == 7)  {
//         cout << "Its sunday";
//     }
//     return 0 ;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int day_no;
    cout << "Enter day number: ";
    cin >> day_no;

    switch (day_no) {
        case 1:
            cout << "Monday";
            break; 
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        // ... and so on
        default:
            cout << "Invalid day";
    }
    return 0;
}