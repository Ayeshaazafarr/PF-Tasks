#include <iostream>
using namespace std;
int main(){
	
	float valuef;
	// asking user of floating point number 
	 cout<<"Enter any float number: ";
	 cin>>valuef;
	 
	 //converting floating number into a whole number
	 int valueint= static_cast<int>(valuef);
	 cout<<"After converting into integer: "<<valueint<<endl;
	 
	 //showing ascii conversion by adding 5
	 char character='A';
	 int number=5;
	 char result= character+number;
	 
	 cout<<"Character '"<<character<<"' + number "<<number<< " = "<<result<<endl;
	 
	return 0;
}
