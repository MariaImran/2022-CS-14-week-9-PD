#include <iostream>
using namespace std;
main()
{
    int arrSize;
    cout << "Enter array size : "; 
    cin >> arrSize;
    int numbers[arrSize];
    for(int i = 0 ; i < arrSize ; i++)
    {
        cout << "Enter number : ";
        cin >> numbers[i];
        if(numbers[i] == 7)
        {
            cout << "BOOM!" << endl;
        }
    }
    
  
}