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
movie TheShawshankRedemption = { "Побег из Шоушенка", 1994, "драма", 142, 249 };
movie KnockinOnHeavensDoor = { "Достучаться до небес", 1997, "драма, комедия, криминал", 87, 499 };
movie Inception = { "Начало", 2010, "фантастика, боевик, триллер", 148, 349 };

//Задача 1
void showMovie(movie &P) {
	cout << P.title << " - " << P.year << " год выхода" << endl;
	cout << "Жанр: " << P.genre << endl;
	cout << "Время: " << P.duration << " минут" << endl;
	cout << "Стоимость: " << P.price << " рублей" << endl;
}

//Задача 2
movie expensive(movie& movie1, movie& movie2, movie& movie3) {
	if (movie1.price > movie2.price && movie1.price > movie3.price) {
		cout << "Самая высокая цена: " << movie1.title << " - " << movie1.price << " рублей" << endl;
		return movie1;
	}
	if (movie2.price > movie1.price && movie2.price > movie3.price) {
		cout << "Самая высокая цена: " << movie2.title << " - " << movie2.price << " рублей" << endl;
		return movie2;
	}
	else {
		cout << "Самая высокая цена: " << movie3.title << " - " << movie3.price << " рублей" << endl;
		return movie3;
	}
}

//Задача 3
void updateInfo(movie& P) {
	cout << "Выберите, какую информацию о фильме " << P.title << " необходимо обновить : " << endl;
	cout << "1.Название;" << endl;
	cout << "2.Год выхода;" << endl;
	cout << "3.Жанр;" << endl;
	cout << "4.Продолжительность;" << endl;
	cout << "5.Цена за диск." << endl;
	cout << "Ввод -> ";
	int answer;
	cin >> answer;
	cin.ignore();
	if (answer == 1) {
		cout << "Введите новое название: " << endl;
		string answer1;
		cout << "Ввод -> ";
		getline(cin, answer1);
		P.title = answer1;
		cout << "Информация обновлена." << endl;
		cout << "Новое название фильма: " << P.title << endl;

	}
	if (answer == 2) {
		cout << "Введите новый год выхода фильма: " << endl;
		int answer2;
		cout << "Ввод -> ";
		cin >> answer2;
		cin.ignore();
		P.year = answer2;
		cout << "Информация обновлена." << endl;
		cout << "Новый год выхода фильма: " << P.year << endl;

	}
	if (answer == 3) {
		cout << "Введите новый жанр: " << endl;
		string answer3;
		cout << "Ввод -> ";
		getline(cin, answer3);
		P.genre = answer3;
		cout << "Информация обновлена." << endl;
		cout << "Новый жанр фильма: " << P.genre << endl;

	}
	if (answer == 4) {
		cout << "Введите новую продолжительность фильма: " << endl;
		int answer4;
		cout << "Ввод -> ";
		cin >> answer4;
		cin.ignore();
		P.duration = answer4;
		cout << "Информация обновлена." << endl;
		cout << "Новая продолжительность фильма: " << P.duration << endl;

	}
	if (answer == 5) {
		cout << "Введите новую цену за диск: " << endl;
		int answer5;
		cout << "Ввод -> ";
		cin >> answer5;
		cin.ignore();
		P.price = answer5;
		cout << "Информация обновлена." << endl;
		cout << "Новое название фильма: " << P.price << endl;

	}
}

int main(void) {
	setlocale(LC_ALL, "Russian");

	//Задача 1
	showMovie(TheShawshankRedemption);
	cout << "-------------------------------------" << endl;
	showMovie(KnockinOnHeavensDoor);
	cout << "-------------------------------------" << endl;
	showMovie(Inception);
	cout << "-------------------------------------" << endl;

	//Задача 2
	expensive(TheShawshankRedemption, KnockinOnHeavensDoor, Inception);
	cout << "-------------------------------------" << endl;

	//Задача3
	updateInfo(Inception);



	return 0;
}

