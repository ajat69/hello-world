#include <iostream>
#include "rational.h"

using namespace std;


int main()
{
   Rational rationalA;
   rationalA.prompt();
   rationalA.display();
   rationalA.displayDecimal();
   Rational rationalB;
   rationalB.prompt();
   rationalB.display();
   rationalB.displayDecimal();
   rationalA.multiply(rationalB);
   rationalA.display();
   rationalA.displayDecimal();
   return 0;
}

