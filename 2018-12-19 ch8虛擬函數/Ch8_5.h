#include <iostream.h>
#include <string.h>
const int LEN=40;
class School            //虛擬基底類別
{
 public:
	char name[LEN] ;
	School() {};
	School(char n[])      //Constructor
	{
	 strcpy(name,n);
	}
	virtual void show();
};


class Main:virtual public School                          
{                            //宣告使用虛擬基底類別 
 public:
	char name[LEN];
	Main( ) { };
	Main(char n[ ],char n1[ ]):School(n1)
	{
	 strcpy(name,n);
	}
	void show();
};


class Select:virtual public School 
{                                        //宣告使用虛擬基底類別 
 public:
	char name[LEN];
	Select() {};
	Select(char n[],char n1[]):School(n1)
	{
	 strcpy(name,n);
	}
	void show();
};

class associaton:virtual public School 
{                                        //宣告使用虛擬基底類別 
 public:
	char name[LEN];
	associaton() {};
	associaton(char n[],char n1[]):School(n1)
	{
	 strcpy(name,n);
	}
	void show();
};

class Student:public Main ,public Select ,public associaton
{
 public:
      char name[LEN];
      Student() {};
      Student(char n[],char n1[],char n2[],char n3[],char n4[])
             :Main(n1,n3),Select(n2,n3),School(n3),associaton(n4,n3)
	{ 
         strcpy(name,n); 
	}
	void show();
};
