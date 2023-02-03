#include <iostream>
using namespace std;
main()
{
    int arrSize = 4;
    string words[arrSize];
    string element ;
    string element1 ;
    string element2 ;
    string element3 ;
    for(int i = 0 ; i < arrSize ; i++)
    {
        cout << "Enter words : ";
        cin >> words[i];
     element = words[0];
     element1 = words[1];
     element2 = words[2];
     element3 = words[3];
       

    }
    if((element == element1) && (element2 == element3))
    {
     cout <<  "True ";
    }
    else
    {
        cout << "False ";
    }
       
        
            
        
    
    
  
}