#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int j;
    double b;
    string f;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> j;
    cin >> b;
    getline(cin >> ws, f);


    // Print the sum of both integer variables on a new line.
    cout << i+j << endl;
    cout << fixed << setprecision(1) << d+b << endl ;
    cout << s+f <<endl;

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.


    return 0;
}
