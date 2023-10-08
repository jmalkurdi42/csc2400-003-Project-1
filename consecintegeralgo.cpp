/* File: 11a.Py
 Author: Jamal Alkurdi
 Date: 10/8/2023
 Objective: Implement Consecutive Integer Algorithm
  License: C++
 */
 
#include <iostream>
#include <cmath>
using namespace std;
 
// Function that determines GCD using Consecutive Integer Algorithm from 2 real numbers.
int gcd(int m, int n)
{
    // Declare variable t that is smallest number between variables m and n.
    int t = min(m, n);
    // While variable t is above 0, if statement checks modulus between 2 user inputs and t
    while (t > 0) 
    {
        // If remainder is 0, break.
        if (m % t == 0 && n % t == 0) 
        {
            break;
        }
        //If remainder is not 0, move back 1 integer t
        t--;
    }

// Return value of t
    return t;
}
 
int main()
{
    // Declaring variable x and y
    int x,y;
    
    //Takes in user input for 2 numbers
    cout << "Enter 2 numbers to find their GCD: " << endl;
    cin >> x;
    cin >> y;
    // Converts user input into a positive integer using abs() function. m = absolute value of x, n = absolute value of y.
    int m = abs(x);
    int n = abs(y);
    //Switch-case that determines if GCD is 0 or real number. If 0 outputs undefined.
    switch(gcd(m,n) == 0)
    {
        // If GCD is 0 print undefined
        case 1:
            cout << "Undefined" << endl;
            break;

            // Default case: print GCD output as normal
            default:
            cout << "gcd(" << x << ","<< y << ")" << " = " << gcd(m, n);
            break;
    }

}