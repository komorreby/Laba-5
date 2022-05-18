#include"library.cpp"

void kino::addInEnd(kino*& begin, string name, string time, int price, int people)
{
	kino* temp = new kino;
	temp->name = name;
	temp->time = time;
	temp->price = price;
	temp->people = people;
	temp->next = NULL;
	temp->prev = NULL;

	if (begin) { // ���� ������ �� ������
		kino* ptr = begin;
		// ���� ����� ������
		while (ptr->next != NULL) {
			ptr = ptr->next;
		}
		ptr->next = temp; // ����� ������� � �����
		temp->prev = ptr;
	}
	else // ���� ������ ������
		begin = temp; // ����� ������ �������
};
void kino::output(kino* ptr)
{
	cout << "-------------------------------------------------" << endl;
	cout << "|";

	cout.width(19);
	cout << "�����";

	cout << "|";
	cout.width(5);
	cout << "�����";

	cout << "|";
	cout.width(5);
	cout << "����";

	cout << "|";
	cout.width(5);
	cout << "�������";

	cout << "|";

	cout << endl;
	cout << "-------------------------------------------------" << endl;
	while (ptr != NULL) {

		cout << "|";
		cout.width(19);
		cout << ptr->name;

		cout << "|";

		cout.width(10);
		cout << ptr->time;

		cout << "|";

		cout.width(16);
		cout << ptr->price;

		cout << "|";

		cout.width(7);
		cout << ptr->people;
		cout << "|";

		cout << endl;
		cout << "-------------------------------------------------" << endl;
		ptr = ptr->next;
	}
};
void edit(kino*& ptr, string N, string new_name, string new_time, int new_price, int new_people)
{
	while (ptr != NULL) {
		if (ptr->name == N) {
			ptr->name = new_name;
			ptr->time = new_time;
			ptr->price = new_price;
			ptr->people = new_people;
			break;
		}
		ptr = ptr->next;
	}
	cout << "���������� ��������" << endl;
}
void find(kino*& ptr, string N)
{
	kino* next = new kino;
	int k = 0;
	while (ptr != NULL) {
		if (ptr->name == N) {
			k++;
			cout << "movie " << ptr->name << " is found" << endl;
			cout << "�����:" << ptr->time << "\n" << "����:" << ptr->price << endl;
			break;
		}
		else
			ptr = ptr->next;
	}
	if (k == 0)
		cout << "this movie is not found" << endl;
}
void Save(kino* ptr, kino* head, string file)
{
	ofstream save;

	cin >> file;
	save.open(file + ".txt");
	cout << "������� 1, ���� ������ �������� � ���� �� ���������, ������� 2, ���� ������ ���� ��� �����";
	int x;
	cin >> x;
	ptr = head;
	if (x == 1) {
		save.open("default.txt");
		if (!save.is_open()) {
			cout << "Error1\n";
		}
		else {
			SetConsoleCP(1251);
			while (ptr != nullptr) {
				cout << ptr->name << endl;;
				cout << ptr->time << endl;
				cout << ptr->price << endl;
				cout << ptr->people << endl;
				save << "\n" << ptr->name << "\t" << ptr->time << "\t" << ptr->price << "\t" << ptr->people;
				ptr = ptr->next;
			}
			SetConsoleCP(866);
		}
		save.close();
	}

	else if (x == 2) {
		cin >> file;
		save.open(file + ".txt");
		if (!save.is_open()) {
			cout << "Error2\n";
		}
		else
		{
			while (ptr != NULL) {
				save << "\n" << ptr->name << "\t" << ptr->time << "\t" << ptr->price << "\t" << ptr->people;
				ptr = ptr->next;
			}
		}
		save.close();
	}
}
void Print(kino* ptr, kino* head, string file)
{
	int y;
	cout << "������� 1, ���� ������ ������� �� ����� �� ���������, ������� 2, ���� �� ������������� �����";
	cin >> y;
	ifstream in;
	if (y == 1) {
		in.open("default.txt");
		int y;
		if (!in.is_open()) {
			cout << "Error\n";
		}
		else {

			string str;
			while (!in.eof()) {
				in >> str;
				cout << str << endl;
			}
		}
	}
	else if (y == 2) {
		cin >> file;
		in.open(file + ".txt");
		if (!in.is_open()) {
			cout << "Error\n";
		}
		else {
			string str;
			while (!in.eof()) {
				in >> str;
				cout << str << endl;
			}
		}
	}
	in.close();
}
void del(kino*& begin, string N)
{
	kino* ptr = begin; // ������� �������
	kino* prev = NULL; // ���������� �������
	while (ptr != NULL) {//���� ������� ������
		if (ptr->name == N) { // ������ �������, ������� ����� �������
			if (prev) { // ���� ���������� �������
				kino* temp = ptr;
				prev->next = ptr->next;
			}
			else { // ��� ����������� ��������
				begin = ptr->next;
				delete ptr;
			}
		}
		prev = ptr;//���� � ���������� �������� 
		ptr = ptr->next;
	}
	cout << "����� ������" << endl;
}