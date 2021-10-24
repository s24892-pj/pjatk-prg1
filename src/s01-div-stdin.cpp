#include <iostream>
#include <string>
using namespace std;
int main()
{
int a,b;
int div;
cout << "Podaj pierwszą liczbe: ";
cin >> a;
cout << "Podaj drugą liczbe: ";
cin >> b;
if(b==0)
{
cout << "Nie można dzielić przez 0";
}
else
{
div = (a / b);
cout << "Dzielenie wynosi: " << div << endl; 
}
return 0;
}
