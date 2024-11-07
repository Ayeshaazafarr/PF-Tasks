#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<"\"Examples of Escape sequence\"";
	cout<<"\nThis is for new line\n\n\n"<<"This is for\b\b\b backspace"<< "\nThis is for \'Single Quote'\n" "This is for \"Double Quotes\"\n";
	cout<<"This is for tab \t -space\n\n";
	
	//for iomanip library
	  // using left and setw
	   
	   cout<<"your Result\n";
	   cout<< left<< setw(10)<<"Name"<<setw(10)<<"Score\n";
	   cout<<left<<setw(10)<<"Yumna"<<setw(10)<<"98\n";
	   cout<<left<<setw(10)<<"Age"<<setw(10)<<"19\n";
	   //using setprecision
	   double PI=3.142;
	   float ftemp=98.6;
	   cout<<"\n\nList of constants\n";
	    cout<<fixed<<setprecision(2);
	    cout<<left<<setw(20)<<"value of PI"<<setw(10)<<PI<<endl;
	    cout<<left<<setw(20)<<"\nValue of body temp"<<left<<setw(20)<<ftemp<<endl;
	
	return 0;
}
