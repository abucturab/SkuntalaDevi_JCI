#include <iostream>
#include <string>
using namespace std;
class ElectricityBill
{
	private:
		float consumptionUnit;
		double Bill;
		int meterNo;
		string customerName;
		string period;
	public:
		ElectricityBill(int meterNo, string customerName, string period);
		void setDetails(int meterNo, string customerName, string period, float consumptionUnit);
		void getDetails();
		double CalculateBill();
		string getName();
		string getPeriod();
		int getMeterNo();
};

