#include <iostream.h>
#include <string.h>
#include "ch7_4.h"
Common::Common(int c,int e,int m)
{
 Chinese=c;
 English=e;
 Math=m;
}


void Common::showdata()  //共同科目資料成員的顯示
{
 cout <<"\n中文成績-->" << Chinese<<"\n英文成績-->" 
         << English<<"\n數學成績-->" << Math;
}
Electronics::Electronics(int com, int cir)
{
 Computer=com;
 Circuit=cir;
}
void Electronics::showdata() //電子科目資料成員的顯示
{
 cout << "\n電腦概論-->" << Computer<< "\n電路學-->"  << Circuit;
}



Account::Account(int eco,int acc)
{
 Economics=eco;
 Accounting=acc;
}
void Account::showdata()         //會計科目資料成員的顯示
{
   cout << "\n材料學-->" << Economics<< "\n控制學-->"  << Accounting;
}										                //Constructor，成員初設串列


Student_EE::Student_EE(char *n,char *s,char *p,char *sc, int chi,int eng,int math,int com, int cir) :Common(chi,eng,math),Electronics(com,cir) 
 {
  strcpy(name,n);                  //學生資料成員的設定
  strcpy(stu_num,s);
  strcpy(stu_phone,p);
  strcpy(school,sc);
 }
 
 
 
void Student_EE::showdata( )
{                                                         //學生資料成員的顯示
     cout << "\n學生姓名-->" << name<< "\n學號-->"  << stu_num<< "\ne-mail-->"  << stu_phone<< "\n學院名稱-->"<< school;
 Common::showdata();    
 Electronics::showdata();                 //共同科目資料成員的顯示 Electronics::showdata();                //電子科目資料成員的顯示
}                                                   
//Constructor，成員初設串列
Student_AC::Student_AC(char *n,char *s,char *p,char *sc, int chi,int eng,int math,int eco, int acc) :Common(chi,eng,math),Account(eco,acc)
 {
  strcpy(name,n);               //學生資料成員的設定
  strcpy(stu_num,s);
  strcpy(stu_phone,p);
  strcpy(school,sc);
 }
 
 
void Student_AC::showdata()
{                                        //學生資料成員的顯示
     cout << "\n學生姓名-->" << name<< "\n學號-->"  << stu_num<< "\ne-mail-->"  << stu_phone<< "\n學院名稱-->"<< school;
     Common::showdata();    //共同科目資料成員的顯示
     Account::showdata();  //電子科目資料成員的顯示
}


