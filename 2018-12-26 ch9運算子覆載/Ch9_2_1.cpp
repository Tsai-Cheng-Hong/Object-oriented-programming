#include <iostream.h>
#include <stdio.h>
#include "ch9_2.h"
Complex::Complex(float r,float i)   //Constructor
{
  real=r;
  img=i;
}
				  //�ۥ[���
Complex operator+(const Complex &c1,const Complex &c2)
{
 float real,img;
  real=c1.real+c2.real;
 img=c1.img+c2.img;
 return Complex(real,img);  //�HConstructor�Ǧ^������O
}

    			           //�۴���
Complex operator-(const Complex &c1,const Complex &c2)
{
 float real,img;
 real=c1.real-c2.real;
 img=c1.img-c2.img;
 return Complex(real,img);          //�HConstructor�Ǧ^������O
}
				  //�ۭ����
Complex operator*(const Complex &c1,const Complex &c2)
{
 float real,img;
 real=c1.real*c2.real-c1.img*c2.img;
 img=c1.img*c2.real+c1.real*c2.img;
 return Complex(real,img);          //�HConstructor�Ǧ^������O
}

				  //�۰����
Complex operator/(const Complex &c1,const Complex &c2)
{
 float real,img,tmp;
 tmp=c2.real*c2.real+c2.img*c2.img;
 real=(c1.real*c2.real+c1.img*c2.img)/tmp;
 img=(c1.img*c2.real-c1.real*c2.img)/tmp;
 return Complex(real,img);          //�HConstructor�Ǧ^������O
}

Complex operator%(const Complex &c1,const Complex &c2)
{
 float real,img;
 real=c1.real;
 img=c1.img;
 return Complex(real,-img);          //�HConstructor�Ǧ^������O
}

void Complex::showdata()      //��ܨ��
{
 if (img >= 0)
	cout << real << "+ " << img << "i\n";
  else if (img = -img )
   cout << real << "- " << img << "i\n";
 else  
cout << real << " - " << img << "i\n";
}
