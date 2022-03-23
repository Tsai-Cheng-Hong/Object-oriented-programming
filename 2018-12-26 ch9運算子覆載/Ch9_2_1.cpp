#include <iostream.h>
#include <stdio.h>
#include "ch9_2.h"
Complex::Complex(float r,float i)   //Constructor
{
  real=r;
  img=i;
}
				  //相加函數
Complex operator+(const Complex &c1,const Complex &c2)
{
 float real,img;
  real=c1.real+c2.real;
 img=c1.img+c2.img;
 return Complex(real,img);  //以Constructor傳回整個類別
}

    			           //相減函數
Complex operator-(const Complex &c1,const Complex &c2)
{
 float real,img;
 real=c1.real-c2.real;
 img=c1.img-c2.img;
 return Complex(real,img);          //以Constructor傳回整個類別
}
				  //相乘函數
Complex operator*(const Complex &c1,const Complex &c2)
{
 float real,img;
 real=c1.real*c2.real-c1.img*c2.img;
 img=c1.img*c2.real+c1.real*c2.img;
 return Complex(real,img);          //以Constructor傳回整個類別
}

				  //相除函數
Complex operator/(const Complex &c1,const Complex &c2)
{
 float real,img,tmp;
 tmp=c2.real*c2.real+c2.img*c2.img;
 real=(c1.real*c2.real+c1.img*c2.img)/tmp;
 img=(c1.img*c2.real-c1.real*c2.img)/tmp;
 return Complex(real,img);          //以Constructor傳回整個類別
}

Complex operator%(const Complex &c1,const Complex &c2)
{
 float real,img;
 real=c1.real;
 img=c1.img;
 return Complex(real,-img);          //以Constructor傳回整個類別
}

void Complex::showdata()      //顯示函數
{
 if (img >= 0)
	cout << real << "+ " << img << "i\n";
  else if (img = -img )
   cout << real << "- " << img << "i\n";
 else  
cout << real << " - " << img << "i\n";
}
