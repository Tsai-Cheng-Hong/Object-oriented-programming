#include <iostream>
#include <string.h>
#include <conio.h>
#define LEN 10
using namespace std;
class Employee             //���u 
{
 protected:
	 char name[LEN];        //���u�W��
	 int empployee_num;
	 float salary;
 public:
	 Employee() {};     //Constructor
	~Employee() {};     //Destructor
	 void getdata();
	 void showdata();
};
class Manager:public Employee  //¾�� 
{
 private:
	char title[LEN];     //¾�� 

 public:
	Manager() {};           //Constructor
          ~Manager() {};           //Destructor
	void getdata();
	void showdata();
};
class Salesman:public Employee  //�~�Z 
{
 private:
	float track;  //�~�Z 

 public:
	Salesman() {};           //Constructor
          ~Salesman() {};           //Destructor
	void getdata();
	void showdata();
};

class Operator:public Employee  //�u�� 
{
 private:
	float work_hr;         //�u�� 
 public:
	Operator() {};           //Constructor
      ~Operator() {};           //Destructor
	void getdata();
	void showdata();
};
