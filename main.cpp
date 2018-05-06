#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    ComplexNum z1(2,5);
    cout <<"z1 is equal to ";
    z1.Display();
    ComplexNum z2(z1);
    cout << "z2 is equal to ";
    z2.Display();
    ComplexNum z3(99,99);
    cout <<"z3 is equal to ";
    z3.Display();
    ComplexNum z4(z3);
    cout <<"z4 is equal to ";
    z4.Display();
    ComplexNum z5;
    z5=z1+z2;
    cout <<"z5 is equal to z1+z2 => ";
    z5.Display();
    ComplexNum z6;
    z6=z1-z2;
    cout <<"z6 is equal to z1-z2 => ";
    z6.Display();
    ComplexNum z7;
    z7=z1*z2;
    cout <<"z7 is equal to z1*z2 => ";
    z7.Display();
//    ComplexNum z7(99,99);
    ComplexNum z8;
    z8=z3/z4;
    cout <<"z8 is equal to z3/z4 => ";
    z8.Display();
    ComplexNum con;
    con=z7.conjugate();
    con.Display();
    ComplexNum mod;
    mod=z8.modulus();
    mod.Display();
    z3=z1.add(z2);
    z4=z1.sub(z2);


cout<<"conjugate  is "<<con;
cout<<"modulus of complex is "<<mod;
//getchar();
}

