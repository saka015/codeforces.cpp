#include <iostream>
using namespace std;

char findMissingLetterInLine(char *line);

char findMissingLetter(char square[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        // Check rows for missing letters:
        char missingRow = findMissingLetterInLine(square[i]);
        if (missingRow != '?')
        {
            return missingRow;
        }

        // Check columns for missing letters:
        char missingColumn = findMissingLetterInLine(square[1] + i, square[1] + i, square[2] + i);
        if (missingColumn != '?')
        {
            return missingColumn;
        }
    }

    return '?'; // No missing letter found
}

char findMissingLetterInLine(char *line)
{
    bool foundA = false, foundB = false, foundC = false;
    for (int j = 0; j < 3; j++)
    {
        if (line[j] == 'A')
        {
            foundA = true;
        }
        else if (line[j] == 'B')
        {
            foundB = true;
        }
        else if (line[j] == 'C')
        {
            foundC = true;
        }
        else if (line[j] == '?')
        {
            return (foundA && foundB) ? 'C' : (foundA && foundC) ? 'B'
                                                                 : 'A';
        }
    }
    return '?'; // No missing letter in this line
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char square[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> square[i][j];
            }
        }

        char missingLetter = findMissingLetter(square);
        cout << missingLetter << endl;
    }

    return 0;
}
