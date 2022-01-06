#include "MstProduct.h"

CMstProduct::CMstProduct()
{
	cout << "Enter Name of product - ";
	cin >> m_strProductName;
	cout << "Enter Price of Product - ";
	cin >> m_nmrp;
}

CMstProduct::~CMstProduct()
{
}

void CMstProduct::updatePrice() 
{	
	cout << "Enter the New Price of "; 
	giveProductName();
	cout << endl;
	cin >> m_nmrp;
	cout << "Updated" << endl;
	cout << "Enter 1 to Exit - ";
	int nTemp;
	cin >> nTemp;
}

void CMstProduct::giveProductName() 
{
	cout << m_strProductName;
}

int CMstProduct::giveMrp()
{ 
	return m_nmrp;
}