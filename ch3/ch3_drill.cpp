#include "../std_lib_facilities.h"
//form letter drill
int main()
{
	string recipient_name;
	int recipient_age;
	string friend_name;
	char friend_sex = 'a';
	cout << "Enter the name of recipient\n";
	cin >> recipient_name;
	cout << "How old is " << recipient_name << "?\n";
	cin >> recipient_age;
		while (recipient_age < 0 || recipient_age > 110)
		{		cout << "Bullshit!\n"
				     << "Seriously, how old is " << recipient_name << "?\n";
				cin >> recipient_age;
		}
	cout << "Enter friends name\n";
	cin >> friend_name;
	cout << "Is " << friend_name << " (m)ale or (f)emale?";
	cin >> friend_sex;


	cout << "Dear " << recipient_name << ","
		<< "\n\tI hope this letter finds you well."
		<< "\nHave you seen " << friend_name << " lately?";
	if (friend_sex == 'm')
		cout << "\nI think he's been killed by zombies\n";
		
	else	cout << "\nI think she's been killed by zombies.\n";

	if (recipient_age < 30)
		cout << "You think all zombies are fast don't you?";
	else 	cout << "But I'm sure they are fine, zombies are so slow.";
	
	cout << "\nSincerely\n\nJamie\n";
}
