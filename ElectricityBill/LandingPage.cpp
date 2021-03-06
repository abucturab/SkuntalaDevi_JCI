/*Program 5 
 * Group - Shakuntala Devi
 * WAP to take details about user like Name, Meter Number, Period of Billing and Units consumption.
 * Based on The consumption the Bill is calculated and displayed.
 * The Bill is later searched based on Name, period or Metern number
 * author: Abuturab Mohammadi
 * date:26th September 2017
 * version 1.0 beta
 */
 

#include "ElectricityBill.h"
#include <vector>
using namespace std;
void searchByName(vector<ElectricityBill> list,string name)
{
	vector<ElectricityBill>::iterator i;
	for(i=list.begin();i!=list.end();i++)
	{
		if(i->getName()==name)
			i->getDetails();
	}
}

void searchByPeriod(vector<ElectricityBill> list,string period)
{
	vector<ElectricityBill>::iterator i;
	for(i=list.begin();i!=list.end();i++)
	{
		if(i->getPeriod()==period)
			i->getDetails();
	}

}

void searchByMeter(vector<ElectricityBill> list, int mNo)
{
	vector<ElectricityBill>::iterator i;
	for(i=list.begin();i!=list.end();i++)
	{
		if(i->getMeterNo()==mNo)
			i->getDetails();
	}

}
//void searchByPeriod(vector<ElectricityBill)
int main()
{
	int n,mNo;
	float consumptionUnit;
	string Name,period;
	vector<ElectricityBill> subscription;
	cout<<"Enter the number of entries"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Name\tmeter no.\tMonth"<<endl;
		cin>>Name>>mNo>>period;
		ElectricityBill* obj=new ElectricityBill(mNo,Name,period);
		cout<<"Units consumed"<<endl;
		cin>>consumptionUnit;
		obj->setDetails(mNo,Name,period,consumptionUnit);
		obj->getDetails();
		subscription.push_back(*obj);
	}
	cout<<"Enter name and period";
	cin>>Name>>period;
	searchByName(subscription,Name);
	searchByPeriod(subscription,period);
		
	
	
//	cin>>n;
//	for(int i=0;i<n;i++)
//	{
//		cin>>Name>>mNo;
//		ElectricityBill* obj=new ElectricityBill(mNo,Name);
//		obj->setDetails(mNo,Name, 3);
//		obj->getDetails();
//		subscription.push_back(*obj);
//	}
	return 0;
}
