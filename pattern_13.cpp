#include <iostream>
using namespace std;
int main()
{
    // *****
    //  ****
    //   ***
    //    **
    //     *

    int n;
    cout << " ENTER ANY NUMBER : ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= n - j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}