#include <iostream>

using namespace std;

int main() {
    int sum = 0; // initialize sum variable to 0
    int count = 0; // initialize count variable to 0

    while (count < 10) { // loop 10 times
        count++; // increment the count variable
        sum += count; // add the current count to the sum variable
    }

    double average = (double) sum / count; // calculate the average as a double

    cout << "The average of numbers from 1 to 10 is: " << average << endl;

    return 0;
/* GROUP MEMBERS LIST

1. Singitan Assefa   0768/14
2. Esubalew Wolde    4634/14
3. Elias zeleke      1681/14
4. Bedilu Getachew   4665/14
*/
}
