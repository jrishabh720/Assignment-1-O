#include<iostream>
#include<iomanip>
#include<ios>
#include<map>
#include<vector>
#include<string>
#include<chrono>
#include<thread>
using namespace std;

class CMstProduct
{
	string m_strProductName;
	float m_nmrp;

public:
	CMstProduct();
	~CMstProduct();

	void getProductName();

	int getMRP();

	void updatePrice();

};

