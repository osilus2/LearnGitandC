#include "../std_lib_facilities.h"
//form letter drill
int main()
{
	string recipient_name;
	string friend_name;
	cout << "Enter the name of recipient\n";
	cin >> recipient_name;
	cout << "Enter friends name\n";
	cin >> friend_name;


	cout << "Dear " << recipient_name << ","
		<< "\n\tI hope this letter finds you well."
		<< "\n Have you seen " << friend_name << " lately?  I think they have been killed by zombies.\n";
}
