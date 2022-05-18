#include"library.cpp"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	kino* head = NULL;
	kino* end = head;
	kino* ptr = head;

	string file;
	ifstream in; ofstream save;

	string name;
	string time;
	int price;
	int people;

	for (;;) {
		int a;

		cout << "1: �������� ����� ������." "\n"
			"2: �������� ������." "\n"
			"3: ������� ��� ������ � ������� ���������� ��������" "\n"
			"4: ������� ��������� �������." "\n"
			"5: ����� ������" "\n";
#if VER == 2

		cout << "6: ��������� � ����" "\n"
			"7: ������� �� �����" "\n";
#endif
		cout << "8: ����� ""\n";
		cin >> a;

		system("cls");

		if (a == 1) {
			try
			{
				continue;
				cout << "������� �������� ������" << endl;
				cin >> name;
				cout << "������� ����� ������" << endl;
				cin >> time;
				cout << "������� ���� �� �����" << endl;
				cin >> price;
				cout << "������� ���������� ��������" << endl;
				cin >> people;
				ptr->addInEnd(head, name, time, price, people);
			}
			catch (const exception& err)
			{
				cout << err.what() << " ... ";
				_getch();
				system("cls");
				//break;
			}
		}
		else if (a == 2) {
			try {
				string N;

				cout << "������� �������� ������, ������� ����� ��������" << endl;
				cin >> N;
				cout << "������� �������� ������" << endl;
				cin >> name;
				cout << "������� ����� ������" << endl;
				cin >> time;
				cout << "������� ���� �� �����" << endl;
				cin >> price;
				cout << "������� ���������� ��������" << endl;
				cin >> people;
				ptr->edit(head, N, name, time, price, people);
			}
			catch (const exception& err)
			{
				cout << err.what() << " ... ";
				_getch();
				system("cls");
				//break;
			}
		}
		else if (a == 3) {
			try {
				ptr->output(head);
			}
			catch (const exception& err)
			{
				cout << err.what() << " ... ";
				_getch();
				system("cls");
				//break;
			}
		}
		else if (a == 4) {
			try {
				string N;
				cout << "������� �������� ������, ������� ����� �������" << endl;
				cin >> N;
				ptr->del(head, N);
			}
			catch (const exception& err)
			{
				cout << err.what() << " ... ";
				_getch();
				system("cls");
				//break;
			}
		}
		else if (a == 5) {
			try {
				cout << "������� �������� ������, ������� ����� �����" << endl;
				cin >> name;
				ptr->find(head, name);
			}
			catch (const exception& err)
			{
				cout << err.what() << " ... ";
				_getch();
				system("cls");
				//break;
			}
		}
#if VER==2
	
		else if (a == 6) {
			try {
				ptr->Save(ptr, head, file);
			}

			catch (const exception& err)
			{
				cout << err.what() << " ... ";
				_getch();
				system("cls");
				//break;
			}
		}
		else if (a == 7) {
			try {
				ptr->Print(ptr, head, file);
			}
			catch (const exception& err)
			{
				cout << err.what() << " ... ";
				_getch();
				system("cls");
				//break;
			}
		}
#endif
		else if (a == 8) {
			return 0;
		}

	}
};
