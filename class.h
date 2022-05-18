#pragma once
#include"library.cpp"

class kino
{
private:
	kino* next;
	kino* prev;
public:
	string name;
	string time;
	int price;
	int people;
	void output(kino* ptr);
	void del(kino*& begin, string N);
	void addInEnd(kino*& begin, string name, string time, int price, int people);
	void edit(kino*& ptr, string N, string new_name, string new_time, int new_price, int new_people);
	void find(kino*& ptr, string N);
	void Save(kino* ptr, kino* head, string file);
	void Print(kino* ptr, kino* head, string file);
};
