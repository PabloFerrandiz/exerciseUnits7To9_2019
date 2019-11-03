//By Pablo José Ferrándiz Navarro
//Check final mark

#include <iostream>
using namespace std;
int main () 
{
    int number1 , number2 ;
    int increase = 0, decrease = 0;
    
    for (int i = 0; i < 10 ; i++)
    {
        do
        {
            cout << "Enter a number: ";
            cin >> number1;
            
            if (number1 >= 0 )
            {
                if (number1 < number2) 
                    decrease++;
                    
                else if (number1 > number2)
                    increase++;
                    
                number2 = number1;
            }
        }
        while (number1 < 0 );
    }
        cout << "Increments: " << increase << endl;
        cout << "Decrements: " << decrease - 1 << endl;
        return 0;
}

