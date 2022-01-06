#include"MstProduct.h"

class CInvoices
{
	const int m_ninvoice_number;
	vector<CMstProduct>&m_vecProduct;
	vector<CMstProduct>m_vecProductPurchase;
	vector<int>m_vecQuantity;
	static int m_nInvoiceNumber;
	string m_strCustName;
	int m_nTotalProducts;
	int m_nNet;
	int m_nDate;
	int m_nMonth;
	int m_nYear;

public:
	CInvoices(vector<CMstProduct>&vecTempProduct);
	~CInvoices();

	void giveInvoiceNumber();

	void giveCustName(); 

	void giveNumberOfProduct(); 

	void giveNetAmount(); 

	void giveProductInfo();
};

