/* Amerike university
     Author: Julio López
     Date: 29/04/25
     Practice #: 27
     Description: This program shall use constructors to show data, but this time one wont use a argument*/

     #include <iostream>
     using namespace std;

     int main(){

        int Number = 4;
        float Dec = 2.6;
        char Symbol = '+';
        string Thing = "Hello";
        double Decimal = 1.5;

        int  *pNumber = &Number;
        float *pDec = &Dec;
        char *pSymbol = &Symbol;
        string *pThing = &Thing;
        double *pDecimal = &Decimal;

        cout << *pNumber << "\n";
        cout << *pDec << "\n";
        cout << *pSymbol << "\n";
        cout << *pThing << "\n"; 
        cout << *pDecimal << "\n";


        *pNumber = 5;
        *pDec = 0.1;
        *pSymbol = '-';
        *pThing = "Bye";
        *pDecimal = 4.2;

        cout << "\n";

        cout << *pNumber << "\n";
        cout << *pDec << "\n";
        cout << *pSymbol << "\n";
        cout << *pThing << "\n"; 
        cout << *pDecimal << "\n";






     }