#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
class Student
 {
	private:
	    char *school;      //�Ǯ�
         char *class_num;   //�Z��
         char name[8];        //�m�W
         long student_num;  //�Ǹ�
	
	public:
     Student(char *s, char *c);   //Constructor �ŧi
	  Student(const Student& str); //Copy constructor�ŧi
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
  len=strlen(s);      //�ƻs�ǮզW
  school= new char[len+1];
  strcpy(school,s);
  len=strlen(c);      //�ƻs�Z�ŦW
  class_num=new char[len+1];
  strcpy(class_num,c);
 }
Student::Student(const Student& str)//Copy constructor
 {
  unsigned len;
  len=strlen(str.school);        //�ƻs�ǮզW
  school= new char[len+1];
  strcpy(school,str.school);
  len=strlen(str.class_num);   //�ƻs�Z�ŦW
  class_num=new char[len+1];
  strcpy(class_num,str.class_num);
 }
void Student::ip_data()
{
 cout<<"\n�Ȧ�K�X=";
 cin >> name;
 cout<<"���ڪ��B=";
 cin>>student_num;
}
void Student::il_data()
{
 cout<<"\n�Ȧ�K�X=";
 cin >> name;
 cout<<"�s�ڪ��B=";
 cin>>student_num;
}

void Student::show_data()
{
 cout <<"\n�Ȧ�="<<school
		<<"\t�b��l�B="<<class_num
		<<"\t�b��K�X\="<<name
		<<"\t���ڪ��B="<<student_num
		<<"\n��������A�w�n�X�b��\n";
}		
void Student::ig_data()
{
 cout <<"\n�Ȧ�="<<school
		<<"\t�b��l�B="<<class_num
		<<"\t�b��K�X\="<<name
		<<"\t�s�ڪ��B="<<student_num
		<<"\n��������A�w�n�X�b��\n";
}		

int main()
{
  Student stu1("�x�W�Ȧ�","80000�A����e���B100000");
   stu1.ip_data();
    stu1.show_data();
    Student stu2("�x�W�Ȧ�","100000�A����e���B80000");
  stu2.il_data();
  stu2.ig_data();
    Student stu3("�x�W�Ȧ�","50000�A����e���B70000");
   stu3.ip_data();
    stu3.show_data();
    Student stu4("�x�W�Ȧ�","80000�A����e���B50000");
  stu4.il_data();
  stu4.ig_data();
    Student stu5("�x�W�Ȧ�","12000�A����e���B15000");
   stu5.ip_data();
    stu5.show_data();
    Student stu6("�x�W�Ȧ�","13000�A����e���B12000");
  stu6.il_data();
  stu6.ig_data();
 system("pause");
 return 0;
}

