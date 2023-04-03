#include"GoodManagement.h"
#include"OrdersProcessing.h"
#include"Search.h"
#include"Display.h"
#include"CheckAndReport.h"
#include"Login.h" 
#include"Statistical.h"
using namespace std;

bool checkUpdate = true;
int CheckIn[30];
int CheckOut[30];
string _Seri;

class Goods {
protected:
	vector<goods> hh;
public:
	vector<goods>& getHH() {
		return hh;
	}
	void goodManagement() {
		GOODS_MANAGEMENT(hh);
	}
	void Display() {
		HT(hh);
	}
	void Search() {
		TK(hh);
	}
	bool input() {
		return Input(hh);
	}
};


class Orders {
protected:
	vector< vector <orders> > dh;
public:
	vector< vector <orders> >& getDH() {
		return dh;
	}
	void orderProcessing(Goods& g) {
		ORDERS_PROCESSING(dh, g.getHH());
	}
	void checkAndReport(Goods g) {
		CHECKANDREPORT(g.getHH());
	}
};

class Statisticals {
protected:
	vector <statisticals>  tk;
public:
	vector <statisticals>& getTK() {
		return tk;
	}

	void Statistical(Goods& g, Orders& od) {
		STATISTICAL(tk, g.getHH(), od.getDH());
	}
	bool inputtk() {
		return InputTK(tk);
	}
};

void Menu(Goods g, Orders od, Statisticals tk);

int main() {
	Goods a;
	Orders od;
	Statisticals tk;
	if (a.input()) {
		Menu(a, od, tk);
	}
	return 0;
}

void Menu(Goods g, Orders od, Statisticals tk) {
	khung(30, 1, 67, 2, 14);
	khung(30, 3, 67, 17, 14);
	vietchuoi(30 + 20, 1 + 1, "CHUONG TRINH QUAN LY BAN HANG", 228);
	int kt = 1;
	int x = 0, y = 0;
	khung(x + 40, y + 5, 40, 2, 14);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 15);
	khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
	khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
	khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
	khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
	for (;;) {
		gotoxy(0, 0);
		int k = keyboard();
		if (k == 2) {
			if (kt == 1) {
				kt = 2;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 15);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 2) {
				kt = 3;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 15);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 3) {
				kt = 4;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 15);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 4) {
				kt = 5;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 15);
			}
			else if (kt == 5) {
				kt = 1;
				khung(x + 40, y + 5, 40, 2, 14);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 15);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
		}
		else if (k == 1) {
			if (kt == 1) {
				kt = 5;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 15);
			}
			else if (kt == 5) {
				kt = 4;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 15);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 4) {
				kt = 3;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 15);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 3) {
				kt = 2;
				khung(x + 40, y + 5, 40, 2, 0);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 3, 40, 2, 14);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 15);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
			else if (kt == 2) {
				kt = 1;
				khung(x + 40, y + 5, 40, 2, 14);	vietchuoi(x + 41, y + 6, "HIEN THI THONG TIN HANG HOA", 15);
				khung(x + 40, y + 5 + 3, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 3, "TIM KIEM THONG TIN HANG HOA", 6);
				khung(x + 40, y + 5 + 6, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 6, "DAT HANG", 6);
				khung(x + 40, y + 5 + 9, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 9, "QUAN LY", 6);
				khung(x + 40, y + 5 + 12, 40, 2, 0);	vietchuoi(x + 41, y + 6 + 12, "THOAT", 6);
			}
		}
		else if (k == 3) {
			if (kt == 1) {
				system("cls");
				g.Display();
				Menu(g, od, tk);
			}
			else if (kt == 2) {
				system("cls");
				g.Search();
				Menu(g, od, tk);
			}
			else if (kt == 3) {
				system("cls");
				od.checkAndReport(g);
				Menu(g, od, tk);
			}
			else if (kt == 4) {
				system("cls");
				LOGIN(g.getHH(), od.getDH(), tk.getTK());
				Menu(g, od, tk);
			}
			else if (kt == 5) {
				system("cls");
				cout << "Dang thoat chuong trinh..." << endl;
				cout << "Nhan Enter de thoat";
				exit(0);
			}
		}
	}
}
