#include "std_lib_facilities.h"

int main()
{
	int age;
	string first_name, friend_name;
	char friend_sex = 0;
	
	cout <<"Please enter your first name!"<<endl;
	cin >> first_name;
	cout <<"Hello, " << first_name << "!"<<endl;
	
	cout<<"Please enter the name of the person you want to write to!"<<endl;
	cin >> first_name;
	
	cout <<"Please add another friend's name!"<<endl;
	cin >> friend_name;
	
	cout <<"Please enter " << friend_name <<" sex! (f=female, m=male)"<<endl;
	cin >> friend_sex;

	cout <<"Please enter your age!"<<endl;
	cin >> age;
	
	cout <<"Dear " << first_name << ","<<endl;
	cout <<"How are you? I'm fine... I miss you so much! I haven't seen you in a while. Can we hang out sometimes?"<<endl;
	cout <<"Have you seen " << friend_name << " lately?"<<endl;
	if  (friend_sex == 'f')
		cout <<"If you see " << friend_name << " please ask her to call me."<<endl;
	if (friend_sex == 'm')
		cout <<"If you see " << friend_name << " please ask him to call me."<<endl;
	if (age<=0 || age>=110)
		simple_error("You're kidding!\n");
	else
	{
		if (0 < age < 12)
			cout <<"Next year you will be "<< age+1 <<" years old.\n";
		if (age == 17)
			cout <<"Next year you will be able to vote.\n";
		if (70  <age <110)
			cout <<"I hope you are enjoying retirement.\n";
	}
	cout <<"Yours sincerely,"<<endl;
	cout <<" "<<endl;
	cout <<" "<<endl;
	cout <<"Attila"<<endl;

	return 0;
} 
