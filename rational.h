#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational
{
private:
   int top;
   int bottom;

   void reduce();
   int largestCommonFactor(int number1, int number2);
   void getFactors(int number, int &index, int factors[]);

public:
   void prompt();
   void display();
   void displayDecimal();
   void multiply(Rational rational);
   

};
#endif // !RATIONAL_H

