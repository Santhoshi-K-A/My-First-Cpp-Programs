#include <iostream>
#include <string> // Required for string and getline()
using namespace std;

int main()
{
    // =========================================
    // INPUT USING cin
    // =========================================

    int x;

    cout << "Type a number: ";
    cin >> x;

    cout << "Your number is: " << x << endl;

    cout << endl;

    // =========================================
    // INPUTTING MULTIPLE VALUES
    // =========================================

    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << a + b << endl;

    cout << endl;

    // =========================================
    // INPUTTING STRINGS USING getline()
    // =========================================

    cin.ignore(); // Clears leftover Enter key from previous input

    string fullName;

    cout << "Type your full name: ";
    getline(cin, fullName);

    cout << "Your name is: " << fullName << endl;

    return 0;
}

/*
=========================================
INPUT (cin)
=========================================

cin is a predefined object used to
accept input from the keyboard.

The extraction operator (>>)
takes data from the user and stores it
inside a variable.

Example:

int x;

cin >> x;

If user enters:
25

Then x stores:
25

=========================================
INPUTTING MULTIPLE VALUES
=========================================

You can read multiple values
in a single statement.

Example:

int a, b;

cin >> a >> b;

Input:
10 20

Output:
30

The first value goes into a.
The second value goes into b.

=========================================
INPUTTING STRINGS
=========================================

cin stops reading when it encounters
a space.

Example:

string name;

cin >> name;

Input:
John Smith

Output:
John

Only the first word is stored.

=========================================
getline()
=========================================

getline() reads the entire line,
including spaces.

Example:

string fullName;

getline(cin, fullName);

Input:
John Smith

Output:
John Smith

=========================================
IMPORTANT
=========================================

When using getline() after cin,
you may need:

cin.ignore();

This removes the leftover Enter key
from the input buffer.

Without cin.ignore(),
getline() may skip the input.
=========================================
*/
