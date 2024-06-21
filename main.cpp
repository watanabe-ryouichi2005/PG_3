#include <stdio.h>

class Parent
{
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	float size;
	float radius;
};

class Circle :public Parent
{
public:
	void Size();
	void Draw() { printf("面積 %f\n", size); };
};

class Square :public Parent
{
public:
	void Size() override;
	void Draw() { printf("面積 %f\n", size); };
};

void Parent::Size() {}

void Circle::Size()
{
	radius = 5.0f;
	printf("円の半径 %f\n", radius);
	size = radius * radius * 3.14f;
}


void Square::Size()
{
	radius = 5.0f;
	printf("矩形の半径 %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

int main(void) {

	Parent *ishape[2] = { new Circle ,new Square };

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;
}
