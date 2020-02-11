#pragma once
#ifndef Product_H
#define Product_H

class Product
{
public:
	Product();
	Product(double);
	virtual double getGrossPrice();
protected:
	double netPrice;

};

#endif