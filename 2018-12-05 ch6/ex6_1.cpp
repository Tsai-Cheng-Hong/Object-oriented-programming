#include <iostream>
#include <string.h>
#include "ex6.h"
using namespace std;
void Employee::getdata()
{

  cout<<"\n員工編號-->";
 cin >> empployee_num;
  cout<<"\n薪水-->";
 cin >> salary;
}
void Employee::showdata()
{

 cout << "\n員工編號 -->"<< empployee_num;
 cout << "\n薪水 -->"<< salary;
}
void Manager::getdata()
{
     cout<<"經理資料輸入";
   Employee::getdata();
   cout<<"經理名稱-->";
   cin >> title;

}
void Manager::showdata()
{
     cout << "\n經理-->";
   cout<< "\n經理名稱-->" <<title;
   Employee::showdata();
}
void Salesman::getdata()
{
cout<<"銷售員資料輸入";
 Employee::getdata();
 cout << "銷售員業績-->";
 cin >> track;


}
void Salesman::showdata()
{
     cout << "\n銷售員-->";
 cout << "\n銷售員業績-->"<< track;
Employee::showdata();
}
void Operator::getdata()
{
     cout<<"操作員資料輸入-->";
 Employee::getdata();
 cout << "工作時數-->";
 cin >> work_hr;

}
void Operator::showdata()
{ cout << "\n操作員-->";
 cout << "\n工作時數-->"
          << work_hr;
 Employee::showdata();

}

