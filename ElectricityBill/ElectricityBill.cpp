#include "ElectricityBill.h"
using namespace std;

ElectricityBill::ElectricityBill(int meterNo, string customerName, string period)
{
//	consumptionUnit=0.0;
	consumptionUnit=0.0;
	this->meterNo=meterNo;
	this->customerName=customerName;
	period="";
}
void ElectricityBill::setDetails(int meterNo, string customerName, string period,float consumptionUnit)
{
	this->meterNo=meterNo;
	this->customerName=customerName;
	this->period=period;
	this->consumptionUnit=consumptionUnit;
	CalculateBill();
}

void ElectricityBill::getDetails()
{
	cout<<endl<<"######ELECTRICITY CORP#######"<<endl;
	cout<<"Meter Number - "<<meterNo<<endl;
	cout<<"User Name - "<<customerName<<endl;
	cout<<"Electricity Bill for Month "<<period<<endl;
	cout<<"Units Consumed "<<consumptionUnit<<" KWh "<<endl;
	cout<<"Total Amount to be paid "<<Bill<< " Rs"<<endl;
}

double ElectricityBill::CalculateBill()
{
//	for(int i=0;i<period;i++)
//	{
		if(consumptionUnit<=100)
			Bill=5*consumptionUnit;
		else if(consumptionUnit>100 && consumptionUnit<=300)
			Bill=7*consumptionUnit;
		else if(consumptionUnit>300 && consumptionUnit<=500)
			Bill=8*consumptionUnit;
		else
			Bill=10*consumptionUnit;
	
	return Bill;
	
}

string ElectricityBill::getName()
{
	return customerName;
}

string ElectricityBill::getPeriod()
{
	return period;
}

int ElectricityBill::getMeterNo()
{
	return meterNo;
}


