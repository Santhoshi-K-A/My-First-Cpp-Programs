#include <iostream>
using namespace std;

int main()
{
    /*
    VARIABLE EXAMPLES

    Declaration:
    Creating a variable (container).

    Initialization:
    Giving the variable its first value.

    Updation:
    Changing the value later.
    */

    // Declaration
    int age;

    // Initialization
    age = 12;

    // Updation
    age = 13;

    cout << "My age is " << age << endl;

    cout << endl;

    /*
    Multiple Variables
    */

    int num1, num2;

    // Assigning the same value to multiple variables
    num1 = num2 = 4;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    cout << endl;

    /*
    Constant Variable
    */

    const int birthYear = 2013;

    cout << "Birth Year = " << birthYear << endl;

    return 0;
}

/*
=================================================
VARIABLES IN C++
=================================================

A variable is a container used to store data.

Example:

int age = 13;

Here:

int     -> Data type
age     -> Variable name (identifier)
13      -> Value stored

=================================================
IDENTIFIER
=================================================

An identifier is the name given to a variable.

Examples:

age
marks
studentName
total_score

=================================================
RULES FOR NAMING VARIABLES
=================================================

Allowed:

int age;
int age1;
int age_1;
int _age;

Not Allowed:

int 1age;
Reason:
Variable names cannot begin with a number.

-------------------------

int my age;
Reason:
Spaces are not allowed.

-------------------------

int age*;
Reason:
Special characters are not allowed.

=================================================
VARIABLE OPERATIONS
=================================================

1. Declaration

int age;

Creates a variable.

-------------------------

2. Initialization

age = 12;

Assigns the first value.

-------------------------

3. Updation

age = 13;

Changes the existing value.

=================================================
DECLARATION + INITIALIZATION
=================================================

Instead of:

int age;
age = 12;

You can write:

int age = 12;

This is the most common method.

=================================================
MULTIPLE VARIABLES
=================================================

int num1, num2;

num1 = num2 = 4;

Output:

num1 = 4
num2 = 4

=================================================
CONSTANT VARIABLES
=================================================

A constant variable cannot be changed
after its value is assigned.

Example:

const int birthYear = 2013;

Correct:

const int birthYear = 2013;

Incorrect:

const int birthYear;
birthYear = 2013;

Constants should be initialized when
they are declared.

=================================================
IMPORTANT
=================================================

= is the Assignment Operator

Example:

age = 13;

This stores 13 inside age.

=================================================
*/
