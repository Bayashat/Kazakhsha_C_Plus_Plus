#include <bits/stdc++.h> 

using namespace std;

    /*
        bool -  and - &&   or- ||

        and - && : (условия-1 && условия-2)   && -нын сол жагы жане он жагындагы условиялардын екеуы де орындалган кезде ыске асады
        1, условияда турса , ол кодты не запускать етеды, не запускать етпейды
        2, условиядан тыс турса, либо true(1), либо false(0);
    */
int main()
{
    /*
    
    // 1. && - and - және
    if(10 > 5 && 10 > 8)
    {
        cout << "Hello" << endl;
    }

    if(10 > 5 and 10 > 17)
    {
        cout << "Hello-2" << endl;
    }

    cout << boolalpha;
    cout << (15 > 78 && 70 < 100);  // 0 - false
    

   /* int , char, string , float...
    bool b = false;  // 1

    cout << boolalpha;  // тек булиан типындегы айнымалынын true or false кып шыгарып береды
    cout << b << endl;
    */


   /* or - немесе - ||  (условия-1 || условия-2)  || -нын сол жагы жане он жагындагы условиялардын біреуі болсын орындалса , длпуск береды, кыргызеды
        1, условияда турса , ол кодты не запускать етеды, не запускать етпейды
        2, условиядан тыс турса, либо true(1), либо false(0);
    */

    if(10 > 5 || 10 > 8)
    {
        cout << "Hello" << endl;    
    }

    if(10 > 5 or 10 > 17)
    {
        cout << "Hello-2" << endl;
    }

    cout << boolalpha;
    cout << (15 > 78 ||  70 < 100);  // true

    return 0;   // 
}