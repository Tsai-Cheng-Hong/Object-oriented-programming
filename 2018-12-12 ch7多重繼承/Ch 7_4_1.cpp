#include <iostream.h>
#include <string.h>
#include "ch7_4.h"
Common::Common(int c,int e,int m)
{
 Chinese=c;
 English=e;
 Math=m;
}


void Common::showdata()  //�@�P��ظ�Ʀ��������
{
 cout <<"\n���妨�Z-->" << Chinese<<"\n�^�妨�Z-->" 
         << English<<"\n�ƾǦ��Z-->" << Math;
}
Electronics::Electronics(int com, int cir)
{
 Computer=com;
 Circuit=cir;
}
void Electronics::showdata() //�q�l��ظ�Ʀ��������
{
 cout << "\n�q������-->" << Computer<< "\n�q����-->"  << Circuit;
}



Account::Account(int eco,int acc)
{
 Economics=eco;
 Accounting=acc;
}
void Account::showdata()         //�|�p��ظ�Ʀ��������
{
   cout << "\n���ƾ�-->" << Economics<< "\n�����-->"  << Accounting;
}										                //Constructor�A������]��C


Student_EE::Student_EE(char *n,char *s,char *p,char *sc, int chi,int eng,int math,int com, int cir) :Common(chi,eng,math),Electronics(com,cir) 
 {
  strcpy(name,n);                  //�ǥ͸�Ʀ������]�w
  strcpy(stu_num,s);
  strcpy(stu_phone,p);
  strcpy(school,sc);
 }
 
 
 
void Student_EE::showdata( )
{                                                         //�ǥ͸�Ʀ��������
     cout << "\n�ǥͩm�W-->" << name<< "\n�Ǹ�-->"  << stu_num<< "\ne-mail-->"  << stu_phone<< "\n�ǰ|�W��-->"<< school;
 Common::showdata();    
 Electronics::showdata();                 //�@�P��ظ�Ʀ�������� Electronics::showdata();                //�q�l��ظ�Ʀ��������
}                                                   
//Constructor�A������]��C
Student_AC::Student_AC(char *n,char *s,char *p,char *sc, int chi,int eng,int math,int eco, int acc) :Common(chi,eng,math),Account(eco,acc)
 {
  strcpy(name,n);               //�ǥ͸�Ʀ������]�w
  strcpy(stu_num,s);
  strcpy(stu_phone,p);
  strcpy(school,sc);
 }
 
 
void Student_AC::showdata()
{                                        //�ǥ͸�Ʀ��������
     cout << "\n�ǥͩm�W-->" << name<< "\n�Ǹ�-->"  << stu_num<< "\ne-mail-->"  << stu_phone<< "\n�ǰ|�W��-->"<< school;
     Common::showdata();    //�@�P��ظ�Ʀ��������
     Account::showdata();  //�q�l��ظ�Ʀ��������
}


