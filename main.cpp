#include <iostream>
#include <string>
using namespace std;

int main() {
	system("chcp 1251"); // Встановлення кодування для української мови
	system("cls"); // Очищення консолі
	system("color 7B"); // Зміна кольору тексту на зелений
	string surname, name, residence;
	int age;
	cout << "Введіть прізвище: ";
	getline(cin, surname);
	
	cout << "Введіть ім'я: ";
	getline(cin, name);
	
	cout << "Вік: ";
	cin >> age; 
	
	cin.ignore(); // Очищення буфера вводу після cin
	cout << "Місце проживання: ";
	getline(cin, residence);
	cout << "Мене звати " << name << " " << surname << "." << endl;
	cout << "Мені " << age << " років." << endl;
	cout << "Я проживаю в " << residence << "." << endl;
	
	cout << "\nНатисніть Enter для завершення програми...";
	cin.get(); // Чекає, поки користувач натисне Enter перед закриттям
	
	return 0;
}