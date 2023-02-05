#include <iostream>
using namespace std;
main()
{
    int count = 0;
    string word1;
    string word2;
    cout << "Enter word 1 : ";
    cin >> word1;
    cout << "Enter word 2 : ";
    cin >> word2;
    int i = 0;
    while ( word1[i] != '\0')
    {
        int j = 0;
        while ( word1[j] != '\0')
        {
            if (word1[i] == word2[j])
            {
                count = count + 1;
            }
            else if (word1[i] != word2[j])
            {
                count = count + 0;
            }
            j++;
        }
        i++;
    }
    cout << "Number of same characters is : " << count;
}