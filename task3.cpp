#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter any word : ";
    cin >> word;
    int length = word.length();
    if (length % 2 == 0)
    {
        cout << "True" ;
    }
    if (length % 2 != 0)
    {
        cout << "False" ;
    }
}