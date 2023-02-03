#include<iostream>
using namespace std;
main()
{
    int arrSize = 0;
    int times = 0;
    int even = 0;
    int odd = 0;
    cout << "Enter array size : ";
    cin >> arrSize;
    cout << "Enter number of times : ";
    cin >> times;
    int numbers[arrSize];
    for(int i = 0 ; i < arrSize ; i++ )
    {
        cout << "Enter numbers : ";
        cin >> numbers[i];
        if( numbers[i] % 2 == 0)
        {
            even = numbers[i] - (times * 2);
            cout << even << endl;
        }
        if(numbers[i] % 2 != 0)
        {
            odd = numbers[i] + (times * 2);
            cout << odd << endl;
        }
    }
}