#include "rational.h"

using namespace std;

void Rational::prompt()
{
   cout << "Please enter the numerator: ";
   cin >> top;
   cout << "Please enter the denominator: ";
   cin >> bottom;
}
void Rational::display() 
{
   if (top < bottom)
      cout << top << "/" << bottom << endl;
   else
   {
      int wholeNumber = top / bottom;
      int newTop = top % bottom;
      cout << wholeNumber << " "
           << newTop << "/" << bottom << endl;
   }
}
void Rational::displayDecimal()
{
   double decimal = ((double)top) / bottom;
   cout << decimal << endl;;
}

void Rational::multiply(Rational rational)
{
   this->top *= rational.top;
   this->bottom *= rational.bottom;
}

void Rational::reduce()
{

}

int largestCommonFactor(int number1, int number2)
{
   int LCF = 0;
   int factor1[256];
   int factor2[256];
   int index1 = 0;
   int index2 = 0;

   return LCF;
}

void getFactors(int number, int &index, int factors[])
{
   for (int i = 1; i <= number; number++)
   {

   }
}
