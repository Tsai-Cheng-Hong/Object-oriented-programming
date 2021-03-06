#include <iostream.h>
const int LEN  = 10;
const int LEN1 = 10;
const int LEN2 = 30;
const int LEN3 = 5;
 class Common   //共同科目
 {
  protected:
	int Chinese;
	int English;
	int Math;
  public:                       //Constructor
       Common(int chi,int eng,int ma); 	
       void  showdata();
 }; 
class Electronics        //電子科目
 {
  protected:
	int Computer;
	int Circuit;
  public:                     //Constructor
	Electronics(int com,int cir);       
	void showdata();
 };
class Account          //會計科目
 {
  protected:
	int Economics;
	int Accounting;
  public:                                 //Constructor
	Account(int eco,int acc);       
	void showdata();
 }; 
 //

 //
class Student_EE:public Common,public Electronics //電子科學生
 {
  private:
           char name[LEN];
	 char stu_num[LEN1];
	 char stu_phone[LEN2];
	 char school[LEN3];
  public:                                        //Constructor
        Student_EE(char *n,char *s,char *p,char *sc, int chi,int eng,int math,int com, int cir);
        void showdata();
 };
 class Student_AC:public Common,public Account //會計科學生
 {
  private:
       char name[LEN];
       char stu_num[LEN1];
 	   char stu_phone[LEN2];
   	   char school[LEN3];
  public:                                        //Constructor
     Student_AC(char *n,char *s,char *p,char *sc, int chi,int eng,int math, int eco, int acc);
     void showdata(); 
 };
