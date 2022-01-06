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
	getProductName();
	cout << endl;
	cin >> m_nmrp;
	cout << "Updated" << endl;
	cout << "Enter 1 to Exit - ";
	int nTemp;
	cin >> nTemp;
}

void CMstProduct::getProductName() 
{
	cout << m_strProductName;
}

int CMstProduct::getMRP()
{ 
	return m_nmrp;
}