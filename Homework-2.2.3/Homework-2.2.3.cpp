/*
�����: ������
�����: �����
����� ����: 12
����� ��������: 8
������: 123456

�����: ������
�����: �������
����� ����: 59
����� ��������: 143
������: 953769
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
	std::cout << "������: " << p.country << std::endl;
	std::cout << "�����: " << p.city << std::endl;
	std::cout << "�����: " << p.street << std::endl;
	std::cout << "����� ����: " << p.num_building << std::endl;
	std::cout << "����� ��������: " << p.num_flat << std::endl;
	std::cout << "������: " << p.zipcode << std::endl;
	std::cout << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	address address1;
	address1.country = "������";
	address1.city = "������ ��������";
	address1.street = "�������";
	address1.num_building = 5;
	address1.num_flat = 11;
	address1.zipcode = 603022;

	address_cout(address1);

	address1.country = "������";
	address1.city = "�����������";
	address1.street = "������";
	address1.num_building = 3;
	address1.num_flat = 13;
	address1.zipcode = 680000;

	address_cout(address1);

	return 0;
}
