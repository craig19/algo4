#include "Product.h"
using namespace std;





Product::Product()
{
	netPrice = 0;
}

Product::Product(double np)
{
	netPrice = np;
}

double Product::getGrossPrice()
{
	double grossPrice = netPrice + (netPrice * 0.21);
	return grossPrice;
}

//bool Product::sortByPrice(Product* A, Product* B)
//{
//	return (A->getGrossPrice() < B->getGrossPrice());
//}