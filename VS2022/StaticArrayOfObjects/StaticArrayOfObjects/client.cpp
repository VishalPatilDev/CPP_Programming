#include"Product.h"

int main()
{
	//run time array
	Product* parr;
	int size;

	cout << "\n enter the size:";
	cin >> size;  //3

	parr = new Product[size];

	for (int i = 0; i < size; i++)
	{
		parr[i].accept();
	}
	for (int i = 0; i < size; i++)
	{
		parr[i].display();
	}

	float maxprice = parr[0].getPrice();
	for (int i = 1; i < size; i++)
	{
		if (maxprice < parr[i].getPrice())
		{
			maxprice = parr[i].getPrice();
		}
	}

	cout << "\n the max price is " << maxprice;

	Product::setStoreName("Xyz store");
	for (int i = 0; i < size; i++)
	{
		parr[i].display();
	}

	delete[] parr;


	//compile time array
	/*Product parr[3] = {Product("LG tv",89000),
		Product("Android tv",45000),
		Product("Sony Tv",78000)};

	for (int i = 0; i < 3; i++)
	{
		parr[i].display();
	}*/

}