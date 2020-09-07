#include <iostream>
#include<stdio.h>

using namespace std;

class Complex{
   public:
       int real,imaginary;

       void input()
       {
           cout<<"Enter real and imag part\n";
           cin>>real>>imaginary;
       }
       Complex operator+(Complex);
       void output()
       {
           cout<< "\n\n Real and imag part -- "<<real<<"  "<<imaginary;
       }
      void operator ++(int);
      void operator ++();
};

 Complex Complex::operator +(Complex a)
 {
     Complex c;
     c.real= real+ a.real;
     c.imaginary=imaginary+a.imaginary;
     return c;
 }

 void Complex::operator ++()
 {

     ++real;
     ++imaginary;
     return ;

 }
 void Complex::operator ++(int x)
 {
     real++;
     imaginary++;
     return ;
 }


int main()
{
    Complex a;
    a.input();
    Complex b;
    b.input();
    a.output(); b.output();
    Complex c;
    c=a+b;
    c.output();
    a++;
    a.output();
    return 0;
}
