#include <iostream>
using namespace std;
main()
{
    int quantity;
    string findFruit;
    int totalPrice;
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    cout << "Enter the fruit name to find : ";
    cin >> findFruit;
    cout << "Enter quantity in kilograms : ";
    cin >> quantity;

    for (int i = 0 ; i < 4 ; i++)
    {

        if (findFruit == fruit[i])
        {
            totalPrice = quantity * price[i];
            cout << "Total price is : " << totalPrice;
        }
        
    }

    
    
    
}