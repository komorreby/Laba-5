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
		cout << "������� ������ ";
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
		cout << "������� ������ ";
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
		cout << "\n��������:\n"
			<< "1.������ ���������\n"
			<< "2.��������� �������\n"
			<< "3.��������� ��������\n"
			<< "4.������� ��������� �� �����\n"
			<< "5.�����\n";
		cin >> c;
		system("cls");
		switch (c)
		{
		case 1:
			a.setHeight();
			a.setWidth();
			break;
		case 2:
			cout<<"������� �����: " << a.Ploshad();
			break;
		case 3:
			cout<< "�������� �����: " <<a.Perimetr();
			break;
		case 4:
			cout<<"������ �����: "<<a.showH() << "\n";
			cout<<"������ �����: " <<a.showW();
			break;
		case 5:
			return 0;
			;
		}
	}
}
