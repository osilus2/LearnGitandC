#include "../std_lib_facilities.h"
// TryThis from ch4.  Currency conversion to US $
int main()
{
	double yenRate = .01;
	double euroRate = 1.33;
	double poundRate = 1.53;
	double conversionRate;
	char currency = '0';
	double quantity = 0;
	double usd;
	bool valid = 1;

	cout << "This program will help convert your currenct to US Dollars as of 8/5/2013\n";
	cout << "What currency do you wish to convert to USD?  (y)en, (e)uro, or (p)ound?\n";
	cin >> currency;
	while(!(currency == 'y' || currency == 'e' || currency == 'p')) {
			cout << "Sorry, no conversion rate found\n";
			currency = '0';
			cin >> currency;
		}
		if (currency == 'y') {
			conversionRate = yenRate;
			cout << conversionRate << "\n";
		} else if (currency == 'e') {
			conversionRate = euroRate;
			cout << conversionRate << "\n";
		} else if (currency == 'p') {
			conversionRate = poundRate;
			cout << conversionRate << "\n";
		}	

	cout << "What quantity of " << currency << " would you like to convert?\n";
	cin >> quantity;
	

	
	cout << "You will receive $" << quantity * conversionRate << " using current rates.\n";

		
}
