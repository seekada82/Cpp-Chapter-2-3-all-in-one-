#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the numeric score: ";
    cin >> score;

    if (score >= 95) {
        cout << "A+" << endl;
    } 
     else if (score >= 85 && score <= 94) {
        cout << "A" << endl;
    } 
     else if (score >= 80 && score <= 84) {
        cout << "A-" << endl;
    } 
      else if (score >= 75 && score <= 79) {
        cout << "B+" << endl;
    } 
      else if (score >= 70 && score <= 74) {
        cout << "B" << endl;
    } 
      else if (score >= 65 && score <= 69) {
        cout << "B-" << endl;
    } 
       else if (score >= 60 && score <= 64) {
        cout << "C+" << endl;
    } 
      else if (score >= 50 && score <= 59) {
        cout << "C" << endl;
    } 
     else {
        cout << "F" << endl;
    }

    return 0;
/* GROUP MEMBERS LIST

1. Singitan Assefa   0768/14
2. Esubalew Wolde    4634/14
3. Elias zeleke      1681/14
4. Bedilu Getachew   4665/14
*/
}
