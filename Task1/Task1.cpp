// Task1.cpp: главный файл проекта.

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(array<System::String ^> ^args)

{
	 cout<<"\n"
			 <<"      This program:\n"
			 <<"                     Read file and deduce its\n"
			 <<"                     on the screen symbol-by-symbol \n"
			 <<"                     in hexadecimal code\n"
			 <<"\n"
			 <<"                     (C) M.Volodya\n"
			 <<"________________________________________________________________________________\n"
			 <<"\n";
	ofstream file ("C:\\task.txt");
	int n;
	cout<<" Please enter a ten numbers from 1 to 100\n";
	for(int i=1; i<=10;i++)
  {
    cout<<" ";
	cout<<i<<") ";
	cin>>n;
    while ((n>100) || (n<=0))
    {
	cout<<" Error! Improper data please try once again !\n "<<i<<") ";
	cin>>n;
    }
	file<<i<<") "<<n<<"\n"<<endl;
  }
	file.close();
	cin.get();
	cin.get();
	return 0;
}