#include <iostream.h>
#include <string.h>
#include <stdio.h>
#include "ch8_5.h"
void School::show()
{
 cout << "\n\n�ǮզW�٬O-->"<< name;
}
void Main::show()
{
 cout << "\n�D�׬�جO-->"<< name;
}
void Select::show()
{
 cout << "\n��׬�جO-->"<< name;
}
void associaton::show()
{
 cout << "\n���ΦW�٬O-->"<< name;
}

void Student::show()
{
 School::show();
 Main::show();
 Select::show();
 associaton::show();
 cout << "\n�ǥͦW�٬O-->"<<name;
}

