#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <Windows.h>

using namespace std;

//������� ���������� ����
int WordCnt(const string& str) {
	int cnt = 0;
	stringstream ss;
	ss << str;
	string tmp;
	while (ss >> tmp) { ++cnt; }
	return cnt;
}

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	ifstream in("input.txt");
	string input;//�����
	stringstream ss;	//��������� �����
	int cnt;
	cout <<" ���������� ����: ";
	cin >> cnt;
	while (getline(in, input, '.')) {//��������� �� �����������
		if (cnt == WordCnt(input))
			ss << input << '\n'; //������� � ��������� �����

	}
	while (getline(ss, input)) {
		cout << input << '\n';// ������� �����������
	}
	in.close();//��������� ����										   
	system("pause>>void");
}
