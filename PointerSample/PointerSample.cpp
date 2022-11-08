#include <iostream>

long a[] = { 32,-1 };
char c[] = { 'c','d' };
int main()
{
	long* p1;	//ポインタ
	long* p2;	//ポインタ
	char* p3;
	char* p4;
	p1 = &a[0];
	p2 = &a[1];
	p3 = &c[0];
	p4 = &c[1];

	*p1 = *p1 + *p2;
	std::cout << "a[0]=" << a[0] << std::endl;
	std::cout << "&a[0]=" << &a[0] << std::endl;
	std::cout << "sizeof(a[0])=" << sizeof(a[0]) << std::endl;
	std::cout << "a[1]=" << a[1] << std::endl;
	std::cout << "&a[1]=" << &a[1] << std::endl;
	std::cout << "sizeof(a[1])=" << sizeof(a[1]) << std::endl;

	std::cout << "c[0]=" << c[0] << std::endl;
	std::cout << "&c[0]=" << &c[0] << std::endl;
	std::cout << "sizeof(c[0])=" << sizeof(a[0]) << std::endl;
	std::cout << "c[1]=" << c[1] << std::endl;
	std::cout << "&c[1]=" << &c[1] << std::endl;
	std::cout << "sizeof(c[1])=" << sizeof(c[1]) << std::endl;

	std::cout << "p1=" << p1 << std::endl;
	std::cout << "*p1=" << *p1 << std::endl;
	std::cout << "p2=" << p2 << std::endl;
	std::cout << "*p2=" << *p2 << std::endl;
	std::cout << "p3=" << p3 << std::endl;
	std::cout << "*p3=" << *p3 << std::endl;
	std::cout << "p4=" << p4 << std::endl;
	std::cout << "*p4=" << *p4 << std::endl;

	unsigned char x;
	for (x = 1; x != 0; x++) {
		std::cout << (unsigned int)x << std::endl;
	}
	//std::cout << x-1 << std::endl;

	//std::cout << "p1=" << p1 << std::endl;
	//std::cout << "*p1=" << *p1 << std::endl;
	//std::cout << "p2=" << p2 << std::endl;
	//std::cout << "*p2=" << *p2 << std::endl;
}

