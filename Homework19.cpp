#include <iostream>
using namespace std;


class Rectangle
{
private:
	int x;
	int y;
	int width;
	int height;
public:
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	int getWidth()
	{
		return width;
	}
	int getHeight()
	{
		return height;
	}
	void setX(int n)
	{
		x = n;
	}
	void setY(int n)
	{
		y = n;
	}
	void setWidth(int n)
	{
		width = n;
	}
	void setHeight(int n)
	{
		height = n;
	}
	void show()
	{
		cout << "X: " << x << endl;
		cout << "Y: " << y << endl;
		cout << "Width: " << width << endl;
		cout << "Height: " << height << endl;

	}
};


int main()
{
	Rectangle rek1;
	rek1.setX(5);
	rek1.setY(10);
	rek1.setHeight(70);
	rek1.setWidth(150);
	rek1.show();
	cout << rek1.getX()<< endl;
	cout << rek1.getY()<< endl;
	cout << rek1.getWidth()<< endl;
	cout << rek1.getHeight() << endl;
	return 0;
}