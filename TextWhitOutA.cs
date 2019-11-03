//By Pablo José Ferrándiz Navarro
//Text whithout A

using System;
class TextWhitoutA 
{
    static void Main () 
    {
        string text;
        int numberOfA;
       
        do
        {
            numberOfA = 0;
            Console.Write("Enter some text: ");
            text = Console.ReadLine();
            
            foreach (char letter in text)
            {
                if (letter == 'a' || letter == 'A')
                    numberOfA++;
            }
        }
        while (numberOfA != 0 );
    }
}

