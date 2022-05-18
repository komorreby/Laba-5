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

		cout << "1: Добавить новую строку." "\n"
			"2: Изменить данные." "\n"
			"3: Вывести все данные и среднее количество зрителей" "\n"
			"4: Удалить выбранный элемент." "\n"
			"5: Поиск фильма" "\n";
#if VER == 2

		cout << "6: Сохранить в файл" "\n"
			"7: Вывести из файла" "\n";
#endif
		cout << "8: Выход ""\n";
		cin >> a;

		system("cls");

		if (a == 1) {
			try
			{
				continue;
				cout << "Введите название фильма" << endl;
				cin >> name;
				cout << "Введите время сеанса" << endl;
				cin >> time;
				cout << "Введите цену за билет" << endl;
				cin >> price;
				cout << "Введите количество зрителей" << endl;
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

				cout << "Введите название фильма, который нужно изменить" << endl;
				cin >> N;
				cout << "Введите название фильма" << endl;
				cin >> name;
				cout << "Введите время сеанса" << endl;
				cin >> time;
				cout << "Введите цену за билет" << endl;
				cin >> price;
				cout << "Введите количество зрителей" << endl;
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
				cout << "Введите название фильма, который нужно удалить" << endl;
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
				cout << "Введите название фильма, который нужно найти" << endl;
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
