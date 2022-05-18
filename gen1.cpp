#include<iostream>
using namespace std;

class Rectangle
{
public:
	int Perimetr() {
		int per = 2 * h + 2 * w;
		return per;
	};
	int Ploshad() {
		int sum = h * w;
		return sum;
	};
	int showH() {
		return h;
	};
	int showW()
	{
		return w;
	}
	int setHeight() {
		int x;
		cout << "Введите высоту ";
		cin >> x;
		if (x < 0) throw exception("ERROR");
		else
		{
			h = x;
			return h;
		}
	};
	int setWidth() {
		int y;
		cout << "Введите ширину ";
		cin >> y;
		if (y < 0) throw exception("ERROR");
		else
		{
			w = y;
			return w;
		}
	};
	Rectangle()
	{
		w = 6;
		h = 6;
	}

private:
	int h;
	int w;
};
int main()
{	
	setlocale(LC_ALL, "RUS");

	Rectangle a;
	int c;
	while (true) {
		cout << "\nВыберите:\n"
			<< "1.Ввести параметры\n"
			<< "2.Вычислить площадь\n"
			<< "3.Вычислить периметр\n"
			<< "4.Вывести параметры на экран\n"
			<< "5.Выход\n";
		cin >> c;
		system("cls");
		switch (c)
		{
		case 1:
			a.setHeight();
			a.setWidth();
			break;
		case 2:
			cout<<"Площадь равна: " << a.Ploshad();
			break;
		case 3:
			cout<< "Периметр равен: " <<a.Perimetr();
			break;
		case 4:
			cout<<"Высота равна: "<<a.showH() << "\n";
			cout<<"Ширина равна: " <<a.showW();
			break;
		case 5:
			return 0;
			;
		}
	}
}
