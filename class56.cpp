#include <iostream>
using namespace std;

int main()
{
	cout<<"menu\n";
	cout<<"1.add\n"<<"2.sub\n"<<"3.mul\n"<<"4.divided\n";
	int option;
	cout<<"enter a 2 numbers";
	cin>>option;
	int a,b,c;
	switch(option)
	{
	case 1: c=a+b;
		break;
	case 2: c=a-b;
		break;
	case 3: c=a*b;
		break;
	case 4: c=a/b;
		break;
		
	}
	cout<<"result is invalid"<<c<<endl;
	return 0;
}



