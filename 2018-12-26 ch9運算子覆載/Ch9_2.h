#include <iostream.h>
class Complex                   //狡计摸
{
  private:
	float real,img;
  public:
	Complex(float r,float i);   //Constructor
	Complex(){}                 //Default Constructor
           ~Complex(){}                 //Destructor
						//friendㄧ计
          friend Complex operator+(const Complex& c1,const Complex& c2);   					                    //搭friendㄧ计
         friend Complex operator-(const Complex& c1,const Complex& c2);
	  				         //friendㄧ计
         friend Complex operator*(const Complex& c1,const Complex& c2);
					        //埃friendㄧ计
	friend Complex operator/(const Complex& c1,const Complex& c2);
	friend Complex operator%(const Complex& c1,const Complex& c2);	//砿 
     	void showdata();   };

