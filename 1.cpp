#include <iostream>
#include <string>
using namespace std;

struct movie {
	string title;
	int year;
	string genre;
	unsigned int duration;
	unsigned int price;
};
movie TheShawshankRedemption = { "����� �� ��������", 1994, "�����", 142, 249 };
movie KnockinOnHeavensDoor = { "����������� �� �����", 1997, "�����, �������, ��������", 87, 499 };
movie Inception = { "������", 2010, "����������, ������, �������", 148, 349 };

//������ 1
void showMovie(movie &P) {
	cout << P.title << " - " << P.year << " ��� ������" << endl;
	cout << "����: " << P.genre << endl;
	cout << "�����: " << P.duration << " �����" << endl;
	cout << "���������: " << P.price << " ������" << endl;
}

//������ 2
movie expensive(movie& movie1, movie& movie2, movie& movie3) {
	if (movie1.price > movie2.price && movie1.price > movie3.price) {
		cout << "����� ������� ����: " << movie1.title << " - " << movie1.price << " ������" << endl;
		return movie1;
	}
	if (movie2.price > movie1.price && movie2.price > movie3.price) {
		cout << "����� ������� ����: " << movie2.title << " - " << movie2.price << " ������" << endl;
		return movie2;
	}
	else {
		cout << "����� ������� ����: " << movie3.title << " - " << movie3.price << " ������" << endl;
		return movie3;
	}
}

//������ 3
void updateInfo(movie& P) {
	cout << "��������, ����� ���������� � ������ " << P.title << " ���������� �������� : " << endl;
	cout << "1.��������;" << endl;
	cout << "2.��� ������;" << endl;
	cout << "3.����;" << endl;
	cout << "4.�����������������;" << endl;
	cout << "5.���� �� ����." << endl;
	cout << "���� -> ";
	int answer;
	cin >> answer;
	cin.ignore();
	if (answer == 1) {
		cout << "������� ����� ��������: " << endl;
		string answer1;
		cout << "���� -> ";
		getline(cin, answer1);
		P.title = answer1;
		cout << "���������� ���������." << endl;
		cout << "����� �������� ������: " << P.title << endl;

	}
	if (answer == 2) {
		cout << "������� ����� ��� ������ ������: " << endl;
		int answer2;
		cout << "���� -> ";
		cin >> answer2;
		cin.ignore();
		P.year = answer2;
		cout << "���������� ���������." << endl;
		cout << "����� ��� ������ ������: " << P.year << endl;

	}
	if (answer == 3) {
		cout << "������� ����� ����: " << endl;
		string answer3;
		cout << "���� -> ";
		getline(cin, answer3);
		P.genre = answer3;
		cout << "���������� ���������." << endl;
		cout << "����� ���� ������: " << P.genre << endl;

	}
	if (answer == 4) {
		cout << "������� ����� ����������������� ������: " << endl;
		int answer4;
		cout << "���� -> ";
		cin >> answer4;
		cin.ignore();
		P.duration = answer4;
		cout << "���������� ���������." << endl;
		cout << "����� ����������������� ������: " << P.duration << endl;

	}
	if (answer == 5) {
		cout << "������� ����� ���� �� ����: " << endl;
		int answer5;
		cout << "���� -> ";
		cin >> answer5;
		cin.ignore();
		P.price = answer5;
		cout << "���������� ���������." << endl;
		cout << "����� �������� ������: " << P.price << endl;

	}
}

int main(void) {
	setlocale(LC_ALL, "Russian");

	//������ 1
	showMovie(TheShawshankRedemption);
	cout << "-------------------------------------" << endl;
	showMovie(KnockinOnHeavensDoor);
	cout << "-------------------------------------" << endl;
	showMovie(Inception);
	cout << "-------------------------------------" << endl;

	//������ 2
	expensive(TheShawshankRedemption, KnockinOnHeavensDoor, Inception);
	cout << "-------------------------------------" << endl;

	//������3
	updateInfo(Inception);



	return 0;
}

