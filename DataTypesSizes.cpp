#include <iostream> // Header file for input and output
using namespace std;

int main()
{
    // Primitive Data Types

    int age = 13;
    float pi = 3.14;
    double price = 19.99;
    char grade = 'A';
    bool isPassed = true;

    cout << "VALUES STORED IN VARIABLES" << endl;
    cout << "Age = " << age << endl;
    cout << "Pi = " << pi << endl;
    cout << "Price = " << price << endl;
    cout << "Grade = " << grade << endl;
    cout << "Passed = " << isPassed << endl;

    cout << endl;

    // Using sizeof() Operator

    cout << "SIZE OF DATA TYPES" << endl;

    cout << "Size of int (age) = "
         << sizeof(age) << " Bytes" << endl;

    cout << "Size of float (pi) = "
         << sizeof(pi) << " Bytes" << endl;

    cout << "Size of double (price) = "
         << sizeof(price) << " Bytes" << endl;

    cout << "Size of char (grade) = "
         << sizeof(grade) << " Bytes" << endl;

    cout << "Size of bool (isPassed) = "
         << sizeof(isPassed) << " Bytes" << endl;

    cout << endl;

    // Modifiers

    unsigned int x = 4294967295;
    long long y = 1234567890123456789;

    cout << "MODIFIERS" << endl;

    cout << "Unsigned Integer = "
         << x << endl;

    cout << "Long Long Integer = "
         << y << endl;

    return 0;
}

/*
=================================================
PRIMITIVE DATA TYPES IN C++
=================================================

Data types specify the type of information
a variable can store.

-------------------------------------------------

int

Stores whole numbers without decimals.

Example:

int age = 13;

Size:
Usually 4 Bytes

-------------------------------------------------

float

Stores decimal numbers.

Example:

float pi = 3.14;

Size:
Usually 4 Bytes

-------------------------------------------------

double

Stores decimal numbers with greater precision
than float.

Example:

double price = 19.99;

Size:
Usually 8 Bytes

-------------------------------------------------

char

Stores a single character.

Example:

char grade = 'A';

Size:
Usually 1 Byte

Note:
Characters are written inside
single quotation marks.

-------------------------------------------------

bool

Stores only two values:

true
false

Example:

bool isPassed = true;

Size:
Usually 1 Byte

=================================================
SIZEOF OPERATOR
=================================================

sizeof() returns the amount of memory
occupied by a variable or data type.

Example:

int age = 13;

cout << sizeof(age);

Output:

4

This means the variable uses
4 Bytes of memory.

=================================================
MODIFIERS
=================================================

Modifiers change the size or range
of a data type.

Common Modifiers:

signed
unsigned
short
long

-------------------------------------------------

unsigned

Stores only positive values.

Example:

unsigned int x = 4294967295;

Because negative numbers are not needed,
the positive range becomes larger.

-------------------------------------------------

long long

Used for very large whole numbers.

Example:

long long y = 1234567890123456789;

Can store much larger values than int.

=================================================
MEMORY TABLE
=================================================

Data Type      Size      Description

int            4 Bytes   Whole numbers

float          4 Bytes   Decimal numbers

double         8 Bytes   More precise decimals

char           1 Byte    Single character

bool           1 Byte    True or False

=================================================
IMPORTANT
=================================================

'A'   -> Character (char)

"A"   -> String (text)

5     -> Integer

5.0   -> Floating-point number

true  -> Boolean value

=================================================
*/
