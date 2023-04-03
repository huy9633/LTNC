#ifndef __STATISTICAL__
#define __STATISTICAL__
#include"goods.h";
#include"orders.h"
#include"GoodManagement.h"
#include"statisticals.h" 
using namespace std;

extern bool checkUpdate;
extern int CheckIn[30];
extern int CheckOut[30];

bool is_empty1(ifstream& pFile)
{
	return pFile.peek() == ifstream::traits_type::eof();
}

bool checkFile(vector<statisticals>& _tk) {
	ifstream in; in.open("ThongKe.txt");
	statisticals s;
	in >> s;
	if (is_empty1(in)) { return true; } // Kiem tra xem file co rong~ khong
	else { return false; }
	in.close();
}
bool InputTK(vector<statisticals>& _tk) {
	_tk.clear();
	ifstream input;

	input.open("ThongKe.txt");

	if (input.is_open()) {
		while (!input.eof()) {
			statisticals add;
			input >> add;
			_tk.push_back(add);
		}
	}
	else {
		cout << "input() : KHONG the mo duoc FILE ThongKe.txt !" << endl;
		return false;
	}

	input.close();
	return true;
}
void addStatisticals(vector<statisticals>& tk, vector<goods>& hh, int Count) {
	int i = hh.size() - tk.size();
	if (i == 1) {
		statisticals s;
		s.seri = hh[Count - 1].seri; s.name = hh[Count - 1].name; s.amountIn = hh[Count - 1].amount; s.amountOut = 0;
		tk.push_back(s);
	}
	else {
		for (int j = i; j != 0; j--) {
			statisticals s;
			s.seri = hh[Count - j].seri; s.name = hh[Count - j].name; s.amountIn = hh[Count - j].amount; s.amountOut = 0;
			tk.push_back(s);
		}
	}
	ofstream file;
	file.open("ThongKe.txt", ios::trunc);
	// trunc: Xoa tat ca du lieu cua file 

	// Update du lieu
	if (file.is_open()) {
		for (int i = 0; i < tk.size(); i++) {
			file << tk[i];
			if (i != tk.size() - 1) {
				file << endl;
			}
		}
	}
	else {
		cout << "updateGoods() : KHONG the mo duoc FILE ThongKe.txt !" << endl;
	}
	file.close();
}

void UpdateStatisticals(vector<statisticals>& tk) {
	//chỉnh sửa số lượng nhập và xuất
	for (int i = 0; i < tk.size(); i++)
	{
		tk[i].amountIn = tk[i].amountIn + CheckIn[i];
		tk[i].amountOut = tk[i].amountOut + CheckOut[i];

	}

	ofstream file;
	file.open("ThongKe.txt", ios::trunc);
	// trunc: Xoa tat ca du lieu cua file 

	// Update du lieu
	if (file.is_open()) {
		for (int i = 0; i < tk.size(); i++) {
			file << tk[i];
			if (i != tk.size() - 1) {
				file << endl;
			}
		}
	}
	else {
		cout << "updateGoods() : KHONG the mo duoc FILE ThongKe.txt !" << endl;
	}
	file.close();

}
void GetDataStatistical(vector<statisticals>& tk, vector<goods>& hh) {
	tk.clear();
	ifstream input; ofstream out;
	input.open("HangHoa.txt"); out.open("ThongKe.txt", fstream::app);
	goods add;  int i = 0;
	while (!input.eof()) { // chay tu dau toi cuoi file 
		statisticals y;
		input >> hh[i];
		if (hh[i].seri == "") goto end; // Kiem tra xem file co rong~ khong
		y.seri = hh[i].seri; y.name = hh[i].name; y.amountIn = hh[i].amount; y.amountOut = 0;
		out << y;
		if (i < hh.size() - 1) {
			out << endl;
		}
		i++;
	}
end:;
	input.close();

}

void STATISTICAL(vector <statisticals>& tk, vector<goods>& hh, vector< vector <orders> >& dh) {
	if (!checkUpdate) {
		UpdateStatisticals(tk);
		checkUpdate = true;
	}
	if (checkFile(tk)) { GetDataStatistical(tk, hh); }
	int CountStatistical;
	CountStatistical = tk.size(); int CountHH = hh.size();
	if (CountStatistical < CountHH) {
		addStatisticals(tk, hh, CountHH);
	}
	InputTK(tk);

	int n = tk.size() + 3;
	int num = tk.size();
	if (tk[num - 1].seri == "") {
		num--;
	}
	vietchuoi(50, 1, "Nhan [ESC] de tro ve ", 12);
	TableStatistical(24, 2, n);
	for (int i = 0; i < num; i++) {
		int y = 5 + i;
		gotoxy(2 + 24, y); cout << i + 1;
		gotoxy(5 + 24, y); cout << tk[i].seri;
		gotoxy(16 + 24, y); cout << tk[i].name;
		gotoxy(46 + 24, y); cout << tk[i].amountIn;
		gotoxy(62 + 24, y); cout << tk[i].amountOut;
	}
	int h = keyboard();
	if (h == 4) {
		system("cls");
	}
	else {
		STATISTICAL(tk, hh, dh);
	}
}
#endif