#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
class Student
 {
	private:
	    char *school;      //學校
         char *class_num;   //班級
         char name[8];        //姓名
         long student_num;  //學號
	
	public:
     Student(char *s, char *c);   //Constructor 宣告
	  Student(const Student& str); //Copy constructor宣告
	  Student() {}                 //default Constructor
     ~Student()                    //Destructor
		  {
		     delete school;
               delete class_num;
		  }
		 void ip_data();
		 void show_data();
		 void ig_data();
		 void il_data();
 };

Student::Student(char *s, char *c)
 {
  unsigned len;
  len=strlen(s);      //複製學校名
  school= new char[len+1];
  strcpy(school,s);
  len=strlen(c);      //複製班級名
  class_num=new char[len+1];
  strcpy(class_num,c);
 }
Student::Student(const Student& str)//Copy constructor
 {
  unsigned len;
  len=strlen(str.school);        //複製學校名
  school= new char[len+1];
  strcpy(school,str.school);
  len=strlen(str.class_num);   //複製班級名
  class_num=new char[len+1];
  strcpy(class_num,str.class_num);
 }
void Student::ip_data()
{
 cout<<"\n銀行密碼=";
 cin >> name;
 cout<<"提款金額=";
 cin>>student_num;
}
void Student::il_data()
{
 cout<<"\n銀行密碼=";
 cin >> name;
 cout<<"存款金額=";
 cin>>student_num;
}

void Student::show_data()
{
 cout <<"\n銀行="<<school
		<<"\t帳戶餘額="<<class_num
		<<"\t帳戶密碼\="<<name
		<<"\t提款金額="<<student_num
		<<"\n交易完成，已登出帳號\n";
}		
void Student::ig_data()
{
 cout <<"\n銀行="<<school
		<<"\t帳戶餘額="<<class_num
		<<"\t帳戶密碼\="<<name
		<<"\t存款金額="<<student_num
		<<"\n交易完成，已登出帳號\n";
}		

int main()
{
  Student stu1("台灣銀行","80000，交易前金額100000");
   stu1.ip_data();
    stu1.show_data();
    Student stu2("台灣銀行","100000，交易前金額80000");
  stu2.il_data();
  stu2.ig_data();
    Student stu3("台灣銀行","50000，交易前金額70000");
   stu3.ip_data();
    stu3.show_data();
    Student stu4("台灣銀行","80000，交易前金額50000");
  stu4.il_data();
  stu4.ig_data();
    Student stu5("台灣銀行","12000，交易前金額15000");
   stu5.ip_data();
    stu5.show_data();
    Student stu6("台灣銀行","13000，交易前金額12000");
  stu6.il_data();
  stu6.ig_data();
 system("pause");
 return 0;
}

