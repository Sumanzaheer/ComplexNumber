#include<iostream>
#include<cmath>
using namespace std;

class ComplexNum
{
private:
    double real;
    double imaginary;
public:
    ComplexNum()
    {
        this->real=0.0;
        this->imaginary=0.0;
    }
    ComplexNum(double r, double i)
    {
        this->real=r;
        this->imaginary=i;
    }
    ComplexNum(ComplexNum& copy)
    {
        this->real=copy.real;
        this->imaginary=copy.imaginary;
    }
    double getreal()
    {
        return this->real;
    }
    double getimaginary()
    {
        return this->imaginary;
    }
    void set(int re,int img)
    {
        this->real=re;
        this->imaginary=img;
    }
    ComplexNum add(ComplexNum a)
    {
        ComplexNum result(this->real+a.real , this->imaginary+a.imaginary);
        return result;
    }
    ComplexNum sub(ComplexNum b)
    {
        ComplexNum result(this->real-b.real , this->imaginary-b.imaginary);
        return result;
    }
    ComplexNum conjugate()
	{
		ComplexNum c(this->real,this->imaginary*-1);
		return c;
	}
	ComplexNum modulus()
	{
	double mod= (sqrt(pow(this->real,2) + pow(this->imaginary,2)));
    }
    ComplexNum operator + (ComplexNum z)
{
	ComplexNum z1(this->real+z.real,this->imaginary+z.imaginary);
	return z1;
}
    ComplexNum operator - (ComplexNum z)
{
	ComplexNum z2(this->real-z.real,this->imaginary-z.imaginary);
	return z2;
}
    ComplexNum operator * (ComplexNum z)
{
	ComplexNum z3(this->real*z.real - this->imaginary*z.imaginary , this->real*z.imaginary + this->imaginary*z.real);
	return z3;
}

    ComplexNum operator / (ComplexNum z)
{
	double a = this->real;
    double b = this->imaginary;
    double c = z.real;
    double d = z.imaginary;
    ComplexNum z4((a*c + b * d) / (pow(c, 2) + pow(d, 2)), (b*c - a * d) / (pow(c, 2) + pow(d, 2)));
    return z4;
}
    void Display()
    {

   //     cout << "I am a Complex number"<< endl<<"        ";
        cout << this->real<< "+" <<this->imaginary<< "i"<<endl;
    }
};
ostream& operator<<(ostream& o,ComplexNum z)
{
	return o <<z.getreal()<<","<<z.getimaginary()<<"i"<<endl;
}
