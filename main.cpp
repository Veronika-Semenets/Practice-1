#include <iostream>
#include <string>
using namespace std;

int main() {
	system("chcp 1251"); // ������������ ��������� ��� ��������� ����
	system("cls"); // �������� ������
	system("color 7B"); // ���� ������� ������ �� �������
	string surname, name, residence;
	int age;
	cout << "������ �������: ";
	getline(cin, surname);
	
	cout << "������ ��'�: ";
	getline(cin, name);
	
	cout << "³�: ";
	cin >> age; 
	
	cin.ignore(); // �������� ������ ����� ���� cin
	cout << "̳��� ����������: ";
	getline(cin, residence);
	cout << "���� ����� " << name << " " << surname << "." << endl;
	cout << "��� " << age << " ����." << endl;
	cout << "� �������� � " << residence << "." << endl;
	
	cout << "\n�������� Enter ��� ���������� ��������...";
	cin.get(); // ����, ���� ���������� ������� Enter ����� ���������
	
	return 0;
}