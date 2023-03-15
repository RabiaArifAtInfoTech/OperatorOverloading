#pragma once

#ifndef ComplexNumber

#include<iostream>

class ComplexNumber {
    float real;
    float imaginary;
public:
    ComplexNumber(float x, float y) {
        real = x;
        imaginary = y;
    };
    ComplexNumber():real(0),imaginary(0)
    {  };
    //Copy constructor
    ComplexNumber(const ComplexNumber& z)
    {
        real = z.real;
        imaginary = z.imaginary;
    };
    //....1....
    ComplexNumber& operator*() 
    {
      //  std::cout << "\nin \"*\" operator ";
        return *this;
    }
       // ...2...
    //operator +
    ComplexNumber& operator+(ComplexNumber CN)
    {
        return *ComplexNumber(this->real + CN.real, this->imaginary + CN.imaginary);
    }
    //...3...
    //operator -
    ComplexNumber& operator-(ComplexNumber CN)
    {
        return *ComplexNumber(this->real - CN.real, this->imaginary - CN.imaginary);
    }

    //...4...
    //operator x NUM
    ComplexNumber& operator*(float num) {
        return *ComplexNumber( (num * this->real), (num* this->imaginary));
    }

    //...5...
    //operator x ComplexNumber
    ComplexNumber& operator*(ComplexNumber cn) {
        float RealPart, ImaginaryPart;
        RealPart = (this->real * cn.real) - (this->imaginary * cn.imaginary);
        ImaginaryPart = (this->real * cn.imaginary) + (this->imaginary * cn.real);
        return *ComplexNumber( RealPart, ImaginaryPart );
    }

    //...6...
    // operator "/" ComplexNumber
    ComplexNumber& operator/(ComplexNumber cn) {

        float RealPart, ImaginaryPart, dividend;
        dividend = (cn.real * cn.real) + (cn.imaginary * cn.imaginary);

        RealPart = ( (this->real * cn.real) + (this->imaginary * cn.imaginary) ) / dividend;
        ImaginaryPart = ((this->imaginary * cn.real) - (this->real * cn.imaginary)) / dividend;
        return *ComplexNumber(RealPart, ImaginaryPart);
    }

    //...7...
    ComplexNumber& operator=(ComplexNumber cn)
    {
       // std::cout << "\nin \"=\" operator ";

        this->real = cn.real;
        this->imaginary = cn.imaginary;
        return *this;
    }
    //...8...
    bool operator==(ComplexNumber cn)
    {
        if (this->real == cn.real && this->imaginary == cn.imaginary)
            return true;
        else
            return false;
    }
    //...9...
    bool operator!=(ComplexNumber cn)
    {
        if (this->real == cn.real && this->imaginary == cn.imaginary)
            return false;
        else
            return true;
    }
        
    

    void print()
    {
        if (imaginary > 0) {
            std::cout << real << " + " << imaginary << "i" << std::endl;
        }
        else if (imaginary < 0) {
            std::cout << real << " - " << imaginary << "i" << std::endl;
        }
        else {
            std::cout << real << std::endl;
        };
    };
    float getReal()
    {
        return this->real;
    }
    float getImaginary()
    {
        return this->imaginary;
    }
    void setReal(float re)
    {
        this->real = re;
    }
    void setImaginary(float im)
    {
        this->imaginary =  im;
    }
};

//...10...
std::ostream& operator<<(std::ostream& os,  ComplexNumber& CN)
{
    if (CN.getImaginary() > 0) {
        os << CN.getReal() << " + " << CN.getImaginary() << "i";
    }
    else if (CN.getImaginary() < 0) {
        //os << CN.getReal() << " - " << CN.getImaginary() << "i";
        os << CN.getReal() << CN.getImaginary() << "i";
    }
    else {
        os << CN.getReal() << std::endl;
    };
	return os;
}

//...11...
std::istream& operator>>(std::istream& is, ComplexNumber& CN)
{
	// read obj from stream
	std::cout << "\nEnter new ComplexNumber's values: ";
    float real1, imaginary1;
    is >> real1 >> imaginary1;
    CN.setReal(real1);
    CN.setImaginary(imaginary1);
	return is;
}

#endif // !ComplexNumbers

