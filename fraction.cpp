#include <iostream>
#include <cmath>
#include <cassert>
#include "fraction.h"
using namespace std;

Fraction::Fraction(int num, int den)
{
    numer = num;
    denom = den;
    Fraction::normalize();
    if (denom == 0)
    {
        denom = 1;
    }
}


Fraction::Fraction()
{
    numer = 0;
    denom = 1;
}
 
Fraction::Fraction(const Fraction& fract)
{
    Fraction (fract.numer, fract.denom);
}

Fraction :: ~Fraction ()
{
}
 


int Fraction::getNumer() const
{
    return numer; 
}


int Fraction::getDenom() const
{
    return denom;
}

void Fraction::print() const
{
    cout << numer << "/" << denom << endl;
}

void Fraction::setNumer(int num)
{
    numer = num;
    Fraction::normalize();
}

void Fraction::setDenom(int den)
{
    denom = den;
    Fraction::normalize();
}


 

void Fraction :: normalize ()
{

  // Handling a denominator of zero
  if (denom == 0)
  {
    cout << "Invalid denomination. Need to quit." << endl;
    assert (false);
  }

  // Changing the sign of denominator
  if (denom < 0)
  {
   denom = - denom;
   numer = - numer;
  }

  // Dividing numerator and denominator by gcd

}

 
int Fraction :: gcd (int n, int m)
{
  int gcd = 1;
  for (int k = 1; k <= n && k <= m; k++)
  {
    if (n % k == 0 && m % k == 0)
    {
      gcd = k;
    }
  }
  return gcd;
}