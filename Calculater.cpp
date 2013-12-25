#include <iostream>

using namespace std;


int main()
{
int Num1;
int Num2;
int Duv;
int Sum;

cout << "Pleas enter a number...";
cout << endl;
cin >> Num1;
cout << "Pleas enter a symbole Ex: +, *, - ";
cin >> Duv;
cout << endl;
cout << "Pleas enter a number...";
cin >> Num2;
cout << endl;

Sum = Num1, Duv, Num2;

cout << "processing...";
cout << endl;
cout << Num1 << Duv << Num2 << " Is " << Sum << endl;
return 0;
}
