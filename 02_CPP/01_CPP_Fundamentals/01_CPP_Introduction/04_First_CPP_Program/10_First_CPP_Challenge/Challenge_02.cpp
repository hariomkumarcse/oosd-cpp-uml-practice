#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price;
	int quantity;

	cout<<"Enter the Item Price: "<<endl;
	cin>>price;

	cout<<"Enter the Quantity: "<<endl;
	cin>>quantity;

	double subtotal = price * quantity;
	double discount = 0.0;

	if(subtotal>100.0)
	{
		discount = subtotal * 0.10;
	}

	double finalBill = subtotal - discount;

	cout<<fixed<<setprecision(2);

	cout<<"\n--- Receipt ---"<<endl;
	cout<<"Subtotal: ₹"<<subtotal<<endl;
	cout<<"Discount: ₹"<<discount<<endl;
	cout<<"Final Bill: ₹"<<finalBill<<endl;

	return 0;
}