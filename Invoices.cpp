#include "Invoices.h"

CInvoices::CInvoices(vector<CMstProduct>&vecProductTemp) :m_ninvoice_number(m_nInvoiceNumber)
{
	m_nNet = 0;
	m_nTotalProducts = 0;
	cout << "Enter Name of Customer : ";
	cin >> m_strCustName;
	m_nInvoiceNumber++;
	while (1) 
	{
		cout << "Enter today's date in the format:DD MM YYYY\n";
		cin >> m_nDate >> m_nMonth >> m_nYear;
		if (m_nDate > 0 && m_nDate <= 31 && m_nMonth > 0 && m_nMonth < 13) 
		{
			break;
		}
	}
	while (1) 
	{
		system("CLS");
		cout << "Operations - " << endl;
		cout << "1 Insert Product" << endl;
		cout << "2 Done" << endl;
		int nOp;
		cin >> nOp;
		if (nOp == 1) 
		{
			cout << "PNo. Products " << endl;
			int nTemp=1;
			for (auto &x : vecProductTemp)
			{
				cout << setw(5) << nTemp << "  ";
				nTemp++;
				x.getProductName();
				cout << endl;
			}
			cout << "Enter Product No - ";
			int nPn;
			cin >> nPn;
			m_vecProductPurchase.push_back(vecProductTemp[nPn - 1]);
			cout << "Enter Quantity - ";
			int nQ;
			cin >> nQ;
			m_nTotalProducts += nQ;
			m_nNet += (vecProductTemp[nPn - 1].getMRP())*nQ;
			m_vecQuantity.push_back(nQ);
		}
		else 
		{
			system("CLS");
			cout << "Invoice Added" << endl;
			int nS;
			cout << "Enter 1 to exit - ";
			cin >> nS;
			break;
		}
	}
}

CInvoices::~CInvoices()
{
}

void CInvoices::giveInvoiceNumber() 
{
	cout << setw(9) << m_ninvoice_number << " ";
}
void CInvoices::giveCustName() 
{
	cout << setw(24) << m_strCustName << " ";
}
void CInvoices::giveNumberOfProduct() 
{
	cout << setw(19) << m_nTotalProducts << " ";
}
void CInvoices::giveNetAmount() 
{
	cout << setw(11) << m_nNet;
	cout << setw(6) << m_nDate << "/" << m_nMonth << "/" << m_nYear << endl;
}
void CInvoices::giveProductInfo(vector<CMstProduct>&vecProductTemp)
{
	cout << " Invoice No. - " << m_ninvoice_number << endl;
	cout << "Date - " << m_nDate << "/" << m_nMonth << "/" << m_nYear << endl;
	cout << " Cust Name - " << m_strCustName << endl;
	cout << "Product_name    ";
	cout << "Unit    ";
	cout << "MRP   ";
	cout << "Amt   " << endl;
	cout << "------------------------------------" << endl;;
	int siz = vecProductTemp.size();
	for (int i = 0; i < siz; i++) 
	{
		cout << setw(16);
		vecProductTemp[i].getProductName();
		cout << setw(8) << m_vecQuantity[i];
		cout << setw(6) << vecProductTemp[i].getMRP();
		cout << setw(6) << m_vecQuantity[i] * (vecProductTemp[i].getMRP()) << endl;
	}
	cout << "Net Amount - " << m_nNet << endl;
}