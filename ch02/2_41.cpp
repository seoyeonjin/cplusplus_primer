#include <iostream>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main() {

	Sales_data total; 
	double totalPrice;

	if (std::cin >> total.bookNo >> total.units_sold >> totalPrice) {
		total.revenue = total.units_sold * totalPrice;

		Sales_data trans;
		double transPrice;

		while (std::cin >> trans.bookNo >> trans.units_sold >> transPrice) {
			trans.revenue = trans.units_sold * transPrice;

			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else {
				std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
				total.bookNo = trans.bookNo;
				total.revenue = trans.revenue;
				total.units_sold = trans.units_sold;
			}
		}
		std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
		return 0;
	}
	else {
		std::cerr << "No data?! " << std::endl;
		return -1;
	}
}

/*int main() {

	Sales_data book1, book2;
	double price1, price2;

	std::cin >> book1.bookNo >> book1.units_sold >> price1;
	std::cin >> book2.bookNo >> book2.units_sold >> price2;

	book1.revenue = book1.units_sold * price1;
	book2.revenue = book2.units_sold * price2;

	if (book1.bookNo == book2.bookNo) {
		book1.units_sold += book2.units_sold;
		book1.revenue += book2.revenue;
		std::cout << book1.bookNo << " " << book1.units_sold << " " << book1.revenue << " ";
	}

	else {
		std::cerr << "Data must refer to same ISBM" << std::endl;
		return -1;
	}

	return 0;
}*/

/*int main() {

	Sales_data book;
	double price;
	std::cin >> book.bookNo >> book.units_sold >> price;
	book.revenue = book.units_sold * price;
	std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << price;

	return 0;
}*/