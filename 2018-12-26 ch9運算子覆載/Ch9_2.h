#include <iostream.h>
class Complex                   //�ŧi�Ƽ����O
{
  private:
	float real,img;
  public:
	Complex(float r,float i);   //Constructor
	Complex(){}                 //Default Constructor
           ~Complex(){}                 //Destructor
						//�ۥ[friend���
          friend Complex operator+(const Complex& c1,const Complex& c2);   					                    //�۴�friend���
         friend Complex operator-(const Complex& c1,const Complex& c2);
	  				         //�ۭ�friend���
         friend Complex operator*(const Complex& c1,const Complex& c2);
					        //�۰�friend���
	friend Complex operator/(const Complex& c1,const Complex& c2);
	friend Complex operator%(const Complex& c1,const Complex& c2);	//�@�m 
     	void showdata();   };

