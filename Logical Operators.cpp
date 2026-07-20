#include <iostream>
using namespace std;

int main()
{
    // =========================================
    // LOGICAL OPERATORS
    // =========================================

    bool hasId = true;
    bool hasLicense = false;

    cout << "hasId = " << hasId << endl;
    cout << "hasLicense = " << hasLicense << endl;

    cout << endl;

    // =========================================
    // LOGICAL AND (&&)
    // =========================================

    cout << "LOGICAL AND (&&)" << endl;

    /*
    AND returns true only if BOTH
    conditions are true.
    */

    cout << "hasId && hasLicense = "
         << (hasId && hasLicense) << endl;

    if (hasId && hasLicense)
    {
        cout << "Allowed to drive." << endl;
    }
    else
    {
        cout << "Not allowed to drive." << endl;
    }

    cout << endl;

    // =========================================
    // LOGICAL OR (||)
    // =========================================

    cout << "LOGICAL OR (||)" << endl;

    /*
    OR returns true if at least ONE
    condition is true.
    */

    cout << "hasId || hasLicense = "
         << (hasId || hasLicense) << endl;

    if (hasId || hasLicense)
    {
        cout << "Has some form of identification." << endl;
    }
    else
    {
        cout << "No identification available." << endl;
    }

    cout << endl;

    // =========================================
    // LOGICAL NOT (!)
    // =========================================

    cout << "LOGICAL NOT (!)" << endl;

    /*
    NOT reverses the result.

    true becomes false
    false becomes true
    */

    cout << "!hasId = "
         << (!hasId) << endl;

    cout << "!hasLicense = "
         << (!hasLicense) << endl;

    cout << endl;

    // =========================================
    // MORE EXAMPLES
    // =========================================

    int x = 7;

    cout << "x = " << x << endl;

    cout << endl;

    cout << "x > 5 && x < 10 = "
         << (x > 5 && x < 10) << endl;

    cout << "x > 5 || x > 20 = "
         << (x > 5 || x > 20) << endl;

    cout << "!(x > 5 && x < 10) = "
         << !(x > 5 && x < 10) << endl;

    return 0;
}

/*
=================================================
LOGICAL OPERATORS IN C++
=================================================

Logical operators are used to combine
or modify conditions.

They usually work with:

true
false

Output:

1 = true
0 = false

=================================================
LOGICAL AND (&&)
=================================================

Returns true only if BOTH conditions
are true.

Example:

5 > 3 && 10 > 4

true && true

Output:
1

-------------------------

5 > 3 && 10 < 4

true && false

Output:
0

Think:

AND means BOTH must be true.

=================================================
LOGICAL OR (||)
=================================================

Returns true if AT LEAST ONE condition
is true.

Example:

5 > 3 || 10 < 4

true || false

Output:
1

-------------------------

5 < 3 || 10 < 4

false || false

Output:
0

Think:

OR means one condition is enough.

=================================================
LOGICAL NOT (!)
=================================================

Reverses the result.

true becomes false

false becomes true

Example:

!(5 > 3)

Original result:

true

After NOT:

false

Output:
0

=================================================
TRUTH TABLE
=================================================

A       B       A&&B    A||B

true    true      1       1

true    false     0       1

false   true      0       1

false   false     0       0

=================================================
MEMORY TRICK
=================================================

&&  = AND
      Both conditions must be true

||  = OR
      At least one condition must be true

!   = NOT
      Reverses the result

=================================================
*/
