#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    int row = 1;
    // int value = 1;
    // char ch = 'A';
    while (row <= n)
    {
        int column = 1;
        
        while (column <= n)
        {
            char ch = ('A'+ column + row - n +(n-1));
            
            cout << ch<<" " ;
            ch += 1;
            column += 1;
        }

        cout << endl;
        row += 1;
    }
    return 0;
}