#include <iostream.h>
#include <string.h>
#include <stdio.h>
#include "ch8_5.h"
void School::show()
{
 cout << "\n\n學校名稱是-->"<< name;
}
void Main::show()
{
 cout << "\n主修科目是-->"<< name;
}
void Select::show()
{
 cout << "\n選修科目是-->"<< name;
}
void associaton::show()
{
 cout << "\n社團名稱是-->"<< name;
}

void Student::show()
{
 School::show();
 Main::show();
 Select::show();
 associaton::show();
 cout << "\n學生名稱是-->"<<name;
}

