/*********************************************************************
 ** Program Filename:   
 ** Author: Lorelei Millund
 ** Date: 4/7/19
 ** Description: Assignment One: Prints sizes of different data types
 **              and rounds using cmath function    
 ** Input: None  
 ** Output: Data size and rounded x value 
 *********************************************************************/

#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
    //PART A: printing size of data types using pre-processor Macros
    cout << "Min size of unsigned int: "    << 0            << endl
         << "Max size of unsigned int: "    << UINT_MAX     << endl
         << "Min size of signed int: "      << INT_MIN      << endl
         << "Max size of signed int: "      << INT_MAX      << endl
         << "Min size of unsigned long: "   << 0            << endl
         << "Max size of unsigned long: "   << ULONG_MAX    << endl
         << "Min size of signed long: "     << LONG_MIN     << endl
         << "Max size of signed long: "     << LONG_MAX     << endl
         << "Min size of unsigned short: "  << 0            << endl
         << "Max size of unsigned short: "  << USHRT_MAX    << endl
         << "Min size of signed short: "    << SHRT_MIN     << endl
         << "Max size of signed short: "    << SHRT_MAX     << endl << endl;
    
    //PART B: printing the size of data types using an in-built function 
    cout << "Size of int: "       << sizeof(int)    << endl //signed and unsigned int are the same size
         << "Size of double: "    << sizeof(double) << endl
         << "Size of float: "     << sizeof(float)  << endl
         << "Size of boolean: "   << sizeof(bool)   << endl
         << "Size of character: " << sizeof(char)   << endl << endl;

    //PART C: using a library function (round)
    double x = 75.9; 

    cout << "Original value of x: " << x << endl;
    x = round(x); //this will replace the initial value of x with the rounded value of x
    cout << "Rounded value of x: "  << x << endl << endl; 

    //END
    return 0;
}