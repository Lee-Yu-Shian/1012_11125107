#include "1012_11125107.h"

complex::complex()
{
    real=0;
    image=0;
}

complex::complex(float real_in,float image_in)
{
    real = real_in;
    image = image_in;
}

int complex::set(float real_set,float image_set)
{
    real = real_set;
    image = image_set;
    return 0;
}

float complex::GetReal()
{
    float temp_real=real;
    return temp_real;
}

float complex::GetImage()
{
    float temp_Image=image;
    return temp_Image;
}

void complex::print()
{
    cout<<GetReal()<<"+"<<GetImage()<<"i";
    cout<<endl;

}

complex complex:: operator=(complex src)//this指標是(當下呼叫而已)
{
    complex temp_equal;
    this->real= src.real;
    this->image= src.image;
    temp_equal.real = this ->real;
    temp_equal.image = this ->image;
    return temp_equal;
}

complex complex:: operator+(complex src)
{
    complex temp;
    temp.real=this->real+src.real;
    temp.image=this->image+src.image;
    return temp;
}