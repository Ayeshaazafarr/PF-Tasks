#include <iostream>
using namespace std;
int main()

{
	
   //providing example code for type casting
   double price=100.999999; // implicit conversion from double to float
   float newPrice=(float)price; 
   cout<<price<<endl;	
   
   int num=2.5888;
   float newNum=num; // implicit conversion from int to float
   cout<<num<<endl;
   
   double PI=3.142; 
   int newPI=(int)PI; // converting from double to int
   cout<<newPI<<endl; //explicit coversion data is lost 
   
   char grade='A';    //explicit conversion from char to float
   int newGrade=(int)grade;
   cout<<newGrade<<endl; // ascii value becomes 65
   
   bool isGood=true;
   int value=(int)isGood; //explicit conversion from bool to int
   cout<<isGood<<endl; //showing value of 1 for true
	
	
	
	
	
	return 0;
}
