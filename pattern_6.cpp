#include <iostream>
using namespace std;
int main()
{
    // *****
    // *****
    // *****
    // *****
    // *****
    // *****

    int row, column;
    cout << " ENTER THE NUMBER OF ROWS : ";
    cin >> row;
    cout << " ENTER THE NUMBER OF COLUMNS : ";
    cin >> column;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}