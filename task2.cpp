#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int index = 0;
    string movieToWatch;
    float discount = 0.0;
    cout << "Enter movie name to watch : ";
    cin >> movieToWatch;
    for( int i = 0 ; i < 5 ; i++ )
    {
        if( movieToWatch == movies[i])
        {
            cout << "Movie found." << endl;
            index = i;
        }
 
    }
        if( index % 2 == 0)
        {
            discount = 500 - (500 * 0.05);
            cout << "Price after dicount is : " <<discount;
        }
        if( index % 2 != 0)
        {
            discount = 500 - (500 * 0.1);
            cout << "Price after dicount is : " << discount;
     
        }
       
}
    

        