#include "Book.h"
using namespace std;

Book::Book(double np)
{
	netPrice = np;
}

double Book::getGrossPrice()
{
	return netPrice;
}