#pragma once
#ifndef Book_H
#define Book_H
#include "Product.h"

class Book : public Product
{
public:
	Book(double);
	double getGrossPrice();
};


#endif