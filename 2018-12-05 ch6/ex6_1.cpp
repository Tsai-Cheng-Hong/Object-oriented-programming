#include <iostream>
#include <string.h>
#include "ex6.h"
using namespace std;
void Employee::getdata()
{

  cout<<"\n���u�s��-->";
 cin >> empployee_num;
  cout<<"\n�~��-->";
 cin >> salary;
}
void Employee::showdata()
{

 cout << "\n���u�s�� -->"<< empployee_num;
 cout << "\n�~�� -->"<< salary;
}
void Manager::getdata()
{
     cout<<"�g�z��ƿ�J";
   Employee::getdata();
   cout<<"�g�z�W��-->";
   cin >> title;

}
void Manager::showdata()
{
     cout << "\n�g�z-->";
   cout<< "\n�g�z�W��-->" <<title;
   Employee::showdata();
}
void Salesman::getdata()
{
cout<<"�P�����ƿ�J";
 Employee::getdata();
 cout << "�P����~�Z-->";
 cin >> track;


}
void Salesman::showdata()
{
     cout << "\n�P���-->";
 cout << "\n�P����~�Z-->"<< track;
Employee::showdata();
}
void Operator::getdata()
{
     cout<<"�ާ@����ƿ�J-->";
 Employee::getdata();
 cout << "�u�@�ɼ�-->";
 cin >> work_hr;

}
void Operator::showdata()
{ cout << "\n�ާ@��-->";
 cout << "\n�u�@�ɼ�-->"
          << work_hr;
 Employee::showdata();

}

