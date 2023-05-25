#include <iostream>

using namespace std;

int main()
{
    char horLn = 196, verLn = 179;
    for (int row = 0; row < 10; row++)
    {
        // Prints horizontal lines.
        for (int row = 0; row <= 10 * 4; row++)
        {
            cout << horLn;
        }
        cout << endl;

        // Prints "|R:C|" at each row and column interval.
        for (int column = 0; column < 10; column++) 
        {
            cout << verLn;

            // Grid print logic here.
            if (row % 2 == 0)
            {
                cout << " $ ";
            }
            else
                cout << "   ";
        }

        cout << verLn << endl;

    }
    cout << "\n\n";
}
