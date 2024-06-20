#include<stdio.h>


class Parent
{
public:
	 virtual void Voice() {
		printf("あにまる¥n");
	};
};

class ChildA : public Parent
{
public:
	void Voice() {
		printf("子供Aっす\n");
	};
};

class ChildB : public Parent
{
public:
	void Voice() {
		printf("子供Bっす\n");
	};
};

int main(void) {

	Parent* animal[2] = { new ChildA,new ChildB };

	animal[0]->Voice();
	animal[1]->Voice();

	delete animal[0];
	delete animal[1];

	return 0;
}
