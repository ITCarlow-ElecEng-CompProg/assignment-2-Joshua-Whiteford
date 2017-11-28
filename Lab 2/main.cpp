/**
 *Joshua Whiteford
 *02/10/2017
 *main.c
 *Factorial Calculator
 */

    /**< preprocessor directives */
#include <iostream>

using namespace std;

    /**< Starting the function */
int main()
{
        /**< Setting the DataTypes */
    double Fac = 1, Num = 0, i = 0;

        /**< Introducing the User & Asking them to input the Value they Wish to get the Factorial of */
    while (Num <= 0)
    {
        cout << "Hello & Welcome!\nPlease Enter the number you wish to get the Factorial of!\n" << endl;
        cin >> Num;
    }

        /**< Sending the program into a loop to calculate the factorial */
    for (i = Num; i > 0; i--)
    {
        Fac = Fac * i;
    }

    /**< Displayint the results to the User */
    cout << "\nThe Factorial of the number entered is " << Fac << endl;
    cout << Num << "! = " << Fac << endl;

    return 0;
}
