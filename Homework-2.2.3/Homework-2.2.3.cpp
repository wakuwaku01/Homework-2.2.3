/*
Город: Москва
Улица: Арбат
Номер дома: 12
Номер квартиры: 8
Индекс: 123456

Город: Ижевск
Улица: Пушкина
Номер дома: 59
Номер квартиры: 143
Индекс: 953769
*/

#include <iostream>
#include <string>

struct address {
	std::string country;
	std::string city;
	std::string street;
	int num_building;
	int num_flat;
	int zipcode;
};

void address_cout(address& p) {
	std::cout << "Страна: " << p.country << std::endl;
	std::cout << "Город: " << p.city << std::endl;
	std::cout << "Улица: " << p.street << std::endl;
	std::cout << "Номер дома: " << p.num_building << std::endl;
	std::cout << "Номер квартиры: " << p.num_flat << std::endl;
	std::cout << "Индекс: " << p.zipcode << std::endl;
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	address address1;
	address1.country = "Россия";
	address1.city = "Нижний Новгород";
	address1.street = "Пушкина";
	address1.num_building = 5;
	address1.num_flat = 11;
	address1.zipcode = 603022;

	address_cout(address1);

	address1.country = "Россия";
	address1.city = "Владивосток";
	address1.street = "Ленина";
	address1.num_building = 3;
	address1.num_flat = 13;
	address1.zipcode = 680000;

	address_cout(address1);

	return 0;
}
