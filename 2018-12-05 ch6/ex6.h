#include <iostream>
#include <string.h>
#include <conio.h>
#define LEN 10
using namespace std;
class Employee             //員工 
{
 protected:
	 char name[LEN];        //員工名稱
	 int empployee_num;
	 float salary;
 public:
	 Employee() {};     //Constructor
	~Employee() {};     //Destructor
	 void getdata();
	 void showdata();
};
class Manager:public Employee  //職稱 
{
 private:
	char title[LEN];     //職稱 

 public:
	Manager() {};           //Constructor
          ~Manager() {};           //Destructor
	void getdata();
	void showdata();
};
class Salesman:public Employee  //業績 
{
 private:
	float track;  //業績 

 public:
	Salesman() {};           //Constructor
          ~Salesman() {};           //Destructor
	void getdata();
	void showdata();
};

class Operator:public Employee  //工時 
{
 private:
	float work_hr;         //工時 
 public:
	Operator() {};           //Constructor
      ~Operator() {};           //Destructor
	void getdata();
	void showdata();
};
