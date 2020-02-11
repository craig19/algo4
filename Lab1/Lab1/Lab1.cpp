//x00075734
#include <iostream>
#include "Product.h"
#include "Software.h"
#include "Book.h"
#include <vector>
#include <algorithm>
using namespace std;

static bool sortByPrice(Product* A, Product* B)
{
	return (A->getGrossPrice() < B->getGrossPrice());
}


int main()
{
	
	const int Size = 8;
	vector<Product*> products(Size);

	Software* pSoftware = NULL;
	Book* pBook = NULL;

	double priceBook, priceSoftware;

	cout << "enter price of book: ";
	cin >> priceBook;
	cout << "enter price of software: ";
	cin >> priceSoftware;
	 
	pSoftware = new Software(priceSoftware);
	pBook = new Book(priceBook);

	products[0] = pSoftware;
	products[1] = pBook;
	

	for (int i = 2; i < products.size(); i++)
	{
		double price;
		char item = NULL;

		cout << "enter 'b' for BOOK or enter 's' for SOFTWARE: ";
		cin >> item;
		cout << "enter price: ";
		cin >> price;

		if (item == 'b')
		{
			products[i] = new Book(price);
		}
		else if (item == 's')
		{
			products[i] = new Software(price);
		}

	}


	for (int i = 0; i < products.size(); i++)
	{
		double grossPrice = 0;
		grossPrice = products[i]->getGrossPrice();
		cout << grossPrice << endl;
	}

	sort(products.begin(), products.end(), sortByPrice);

	cout << "SORTED" << endl;

	for (int i = 0; i < products.size(); i++)
	{
		double grossPrice = 0;
		grossPrice = products[i]->getGrossPrice();
		cout << grossPrice << endl;
	}

}

