#include <iostream>

using namespace std;


int main()
{
int Num1;
int Num2;
int Duv;
int Sum;

cout << "Pleas Enter A Number...\n";
cout << endl;
cin >> Num1;
cout << "Pleas Enter A Symbole Ex: +, *, - \n";
cin >> Duv;
cout << endl;
cout << "Pleas Enter A Number...\n";
cin >> Num2;
cout << endl;

Sum = Num1, Duv, Num2;

cout << "Processing ...\n";
cout << endl;
cout << "Processing Complete ....";
cout << endl;
cout << Num1 << Duv << Num2 << " = \a" << Sum << endl; // Calclats the problem!

return 0;
}
