#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
// declaring and initializing two integer type variable
	int num1=12;
	int num2=10;
	 
	 //declaring and initializing two floating point type variables
	 float fnum1=2.2;
	 float fnum2=4.2;
	 
	//performing arithmetic operations on integers
	int intAdd=num1+num2;
	int intSub=num1-num2;
	int intMul=num1*num2;
	int intDiv=static_cast<float>(num1)/num2;
	
	//performing arthmetic operations on floating point
	float fAdd=fnum1+fnum2;
	float fSubb=fnum1-fnum2;
	float fMul=fnum1*fnum2;
	float fDiv= static_cast<float>(fnum1)/fnum2;
	
//print the results with formatting
cout<<fixed<<setprecision(2);

//Arthmetic Operations using integer type
cout<<"Arithmetic Operations using intgers:\n\n";
cout<<"Addition: "<<num1<<" + "<<num2<<" = "<<intAdd<<endl;
cout<<"Sutraction: "<<num1<<" - "<<num2<< " = "<<intSub<<endl;
cout<<"Multiplication: "<<num1<<" * "<<num2<<" = "<<intMul<<endl;
cout<<"Division: "<<num1<<" / "<<num2<<" = " <<intDiv<<"\n"<<endl;

//Arthmetic Operation using floating point type
cout<<"Arithmetic Operations using floating point: \n"<<endl;
cout<<"Addition: "<<fnum1<<" + "<<fnum2 <<" = "<<fAdd<<endl;
cout<<"Subtraction: "<<fnum1<<" - "<<fnum2<<" = "<<fSubb<<endl;
cout<<"Multiplication: "<<fnum1<<" * "<< fnum2<<" = "<<fMul<<endl;
cout<<"Division: "<<fnum1<<" / "<<fnum2<<" = "<<" = "<<fDiv<<endl;

		return 0 ;
}
