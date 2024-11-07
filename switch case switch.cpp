#include<iostream>
using namespace std;
int main()
{
	int no_of_days;
	cout<<"Enter a day number from 1 to 7: ";
	cin>>no_of_days;	
	switch (no_of_days)
	{
		case 1:
			cout<<"MONDAY"<<endl;
			break;
		case 2:
			cout<<"TUESDAY"<<endl;
			break;
		case 3:	
		      cout<<"WEDNESDAY"<<endl;
		    break;
		case 4:
			cout<<"THURSDAY"<<endl;
			break;
		case 5:
		cout<<"FRIDAY"<<endl;
		break;
		case 6:
			cout<<"SATURDAY"<<endl;
			break;
		case 7:
			cout<<"SUNDAY"<<endl;
			break;
		default :
		cout<<"INCORRECT DAY NUMBER";
	}
	
	return 0;
}
