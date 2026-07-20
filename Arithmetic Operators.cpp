#include <iostream>
using namespace std;

int main()
{
    // Declaring and initializing variables
    int a = 15;
    int b = 6;

    cout << "Initial Values" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << endl;

    // Increment and Decrement Operators
    a++;   // Increase by 1
    a--;   // Decrease by 1

    cout << "Value of a after increment and decrement: " << a << endl;

    cout << endl;

    // Arithmetic Operators
    int sum = a + b;
    int diff = a - b;
    int product = a * b;
    int div = a / b;
    int rem = a % b;

    cout << "Arithmetic Operations" << endl;

    cout << "Addition (a + b) = " << sum << endl;
    cout << "Subtraction (a - b) = " << diff << endl;
    cout << "Multiplication (a * b) = " << product << endl;
    cout << "Integer Division (a / b) = " << div << endl;
    cout << "Remainder (a % b) = " << rem << endl;

    cout << endl;

    // Type Casting
    float decimalDiv = (float)a / b;

    cout << "Type Casting" << endl;
    cout << "Decimal Division ((float)a / b) = "
         << decimalDiv << endl;

    cout << endl;

    // Assignment Operators
    int x = 10;

    cout << "Assignment Operators" << endl;
    cout << "Initial x = " << x << endl;

    x += 5;
    cout << "x += 5 : " << x << endl;

    x *= 2;
    cout << "x *= 2 : " << x << endl;

    cout << endl;

    // Relational Operators
    cout << "Relational Operators" << endl;

    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a >= b : " << (a >= b) << endl;
    cout << "a <= b : " << (a <= b) << endl;

    return 0;
}

/*
ARITHMETIC OPERATORS

+  Addition
   Adds two values.
   Example: 15 + 6 = 21

-  Subtraction
   Subtracts one value from another.
   Example: 15 - 6 = 9

*  Multiplication
   Multiplies two values.
   Example: 15 * 6 = 90

/  Division
   Divides one value by another.
   Example: 15 / 6 = 2

%  Modulus
   Returns the remainder.
   Example: 15 % 6 = 3


INCREMENT AND DECREMENT

a++
Increases value by 1.

a--
Decreases value by 1.


POST-INCREMENT

int a = 5;

cout << a++;
Output: 5

cout << a;
Output: 6

Uses the value first, then increases it.


PRE-INCREMENT

int a = 5;

cout << ++a;
Output: 6

Increases first, then uses the value.


ASSIGNMENT OPERATORS

x += 5
Same as x = x + 5

x -= 5
Same as x = x - 5

x *= 2
Same as x = x * 2

x /= 2
Same as x = x / 2


RELATIONAL OPERATORS

== Equal To

!= Not Equal To

>  Greater Than

<  Less Than

>= Greater Than Or Equal To

<= Less Than Or Equal To

Returns:
1 = True
0 = False


TYPE CONVERSION

Implicit Conversion:
Automatic conversion by compiler.

Example:

int a = 10;
float b = 2.5;

float result = a + b;

Explicit Conversion (Type Casting):

float result = (float)a / b;

15 / 6 = 2

(float)15 / 6 = 2.5


IMPORTANT

=  Assignment Operator
   Stores a value.

== Comparison Operator
   Compares two values.

Example:

a = 5;    // Store 5 in a

a == 5;   // Check if a equals 5
*/
