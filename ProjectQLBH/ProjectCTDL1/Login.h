#ifndef _LOGIN_
#define _LOGIN_

#include"Menu.h"
#include"GoodManagement.h"
#include"OrdersProcessing.h"
#include "Statistical.h"

using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
void Color(int color)
{
	SetConsoleTextAttribute(console, color);
}

void chose(vector<goods>& hh, vector< vector <orders> >& dh, vector < statisticals >& tk) {
	khung(30, 3, 67, 17, 14);

	int qq = 1;
	khung(44, 5, 40, 2, 14); vietchuoi(45, 6, "Quan ly don hang", 15);
	khung(44, 8, 40, 2, 0); vietchuoi(45, 9, "Xu ly don hang", 6);
	khung(44, 11, 40, 2, 0); vietchuoi(45, 12, "Thong Ke", 6);
	khung(44, 14, 40, 2, 0); vietchuoi(45, 15, "Quay Lai Menu", 6);
	for (;;) {
		gotoxy(0, 0);
		int k = keyboard();
		int x = 0; int y = 0;
		if (k == 2) {
			if (qq == 1) {
				qq = 2;
				khung(x + 44, y + 5, 40, 2, 0);		vietchuoi(x + 45, y + 6, "Quan ly don hang", 6);
				khung(x + 44, y + 8, 40, 2, 14);	vietchuoi(x + 45, y + 9, "Xu ly don hang", 15);
				khung(x + 44, y + 11, 40, 2, 0);	vietchuoi(x + 45, y + 12, "Thong Ke", 6);
				khung(x + 44, y + 14, 40, 2, 0);	vietchuoi(x + 45, y + 15, "Quay Lai Menu", 6);
			}
			else if (qq == 2) {
				qq = 3;
				khung(x + 44, y + 5, 40, 2, 0);		vietchuoi(x + 45, y + 6, "Quan ly don hang", 6);
				khung(x + 44, y + 8, 40, 2, 0);		vietchuoi(x + 45, y + 9, "Xu ly don hang", 6); 
				khung(x + 44, y + 11, 40, 2, 14);	vietchuoi(x + 45, y + 12, "Thong Ke", 15);
				khung(x + 44, y + 14, 40, 2, 0);	vietchuoi(x + 45, y + 15, "Quay Lai Menu", 6);
			}
			else if (qq == 3) {
				qq = 4;
				khung(x + 44, y + 5, 40, 2, 0);	vietchuoi(x + 45, y + 6, "Quan ly don hang", 6);
				khung(x + 44, y + 8, 40, 2, 0);		vietchuoi(x + 45, y + 9, "Xu ly don hang", 6);
				khung(x + 44, y + 11, 40, 2, 0);	vietchuoi(x + 45, y + 12, "Thong Ke", 6);
				khung(x + 44, y + 14, 40, 2, 14);	vietchuoi(x + 45, y + 15, "Quay Lai Menu", 15);
			}
			else if (qq == 4) {
				qq = 1;
				khung(x + 44, y + 5, 40, 2, 14);	vietchuoi(x + 45, y + 6, "Quan ly don hang", 15);
				khung(x + 44, y + 8, 40, 2, 0);		vietchuoi(x + 45, y + 9, "Xu ly don hang", 6);
				khung(x + 44, y + 11, 40, 2, 0);	vietchuoi(x + 45, y + 12, "Thong Ke", 6);
				khung(x + 44, y + 14, 40, 2, 0);	vietchuoi(x + 45, y + 15, "Quay Lai Menu", 6);
			}
		}
		else if (k == 1) {
			if (qq == 1) {
				qq = 4;
				khung(x + 44, y + 5, 40, 2, 0);		vietchuoi(x + 45, y + 6, "Quan ly don hang", 6);
				khung(x + 44, y + 8, 40, 2, 0);	vietchuoi(x + 45, y + 9, "Xu ly don hang", 6);
				khung(x + 44, y + 11, 40, 2, 0);	vietchuoi(x + 45, y + 12, "Thong Ke", 6);
				khung(x + 44, y + 14, 40, 2, 14);	vietchuoi(x + 45, y + 15, "Quay Lai Menu", 15);
			}
			else if (qq == 4) {
				qq = 3;
				khung(x + 44, y + 5, 40, 2, 0);		vietchuoi(x + 45, y + 6, "Quan ly don hang", 6);
				khung(x + 44, y + 8, 40, 2, 0);		vietchuoi(x + 45, y + 9, "Xu ly don hang", 6);
				khung(x + 44, y + 11, 40, 2, 14);	vietchuoi(x + 45, y + 12, "Thong Ke", 15);
				khung(x + 44, y + 14, 40, 2, 0);	vietchuoi(x + 45, y + 15, "Quay Lai Menu", 6);
			}
			else if (qq == 3) {
				qq = 2;
				khung(x + 44, y + 5, 40, 2, 0);	vietchuoi(x + 45, y + 6, "Quan ly don hang", 6);
				khung(x + 44, y + 8, 40, 2, 14);		vietchuoi(x + 45, y + 9, "Xu ly don hang", 15);
				khung(x + 44, y + 11, 40, 2, 0);	vietchuoi(x + 45, y + 12, "Thong Ke", 6);
				khung(x + 44, y + 14, 40, 2, 0);	vietchuoi(x + 45, y + 15, "Quay Lai Menu", 6);
			}
			else if (qq == 2) {
				qq = 1;
				khung(x + 44, y + 5, 40, 2, 14);	vietchuoi(x + 45, y + 6, "Quan ly don hang", 15);
				khung(x + 44, y + 8, 40, 2, 0);		vietchuoi(x + 45, y + 9, "Xu ly don hang", 6);
				khung(x + 44, y + 11, 40, 2, 0);	vietchuoi(x + 45, y + 12, "Thong Ke", 6);
				khung(x + 44, y + 14, 40, 2, 0);	vietchuoi(x + 45, y + 15, "Quay Lai Menu", 6);
			}
		}
		else if (k == 3) {
			if (qq == 1) {
				system("cls");
				GOODS_MANAGEMENT(hh); // return;
				goto tieptuc;
			}
			else if (qq == 2) {
				system("cls");
				ORDERS_PROCESSING(dh, hh);
				goto tieptuc;
			}
			else if (qq == 3) {
				system("cls");
				STATISTICAL(tk,hh,dh);
				goto tieptuc;
			}
			else if (qq == 4) {
				system("cls");
				goto end;
			}
		}
	}
tieptuc:
	chose(hh, dh,tk);
end:;
}

void LOGIN(vector<goods>& hh, vector< vector <orders> >& dh, vector < statisticals > tk)
{
	ifstream is;
	is.open("Admin.txt");
	if (is.is_open()) {
		int tmp = 0;
		bool check = true;
		while (tmp < 3 && check)
		{
			string pass;
			char ch;
			string id;
			vietchuoi(20, 0, "*****************************", 6);
			vietchuoi(20, 1, "*", 6); vietchuoi(25, 1, "DANG NHAP HE THONG", 11); vietchuoi(48, 1, "*", 6);
			vietchuoi(20, 2, "*****************************", 6);
			vietchuoi(23, 3, "User:      ", 2); vietchuoi(23, 5, "Password:  ", 2); gotoxy(35, 3); Color(15); cin >> id;
			gotoxy(35, 5); Color(15);
			pass = "";
			while (true)
			{
				ch = _getch();
				if (ch == 13) break;
				else if (ch == 8) //Backspace to delete
				{
					pass.erase(pass.begin() + pass.length() - 1); //Delete 1 char
					cout << "\b \b"; //Delete in console
				}
				else if (ch == 27) exit(0);
				else if (((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch >= 32 && ch <= 39) && ch != 8)
				{
					cout << "*";
					pass.push_back(ch);
				}

			}
			vietchuoi(20, 7, "[ESC] Quay Lai ", 12);
			vietchuoi(35, 7, "|", 14);
			vietchuoi(36, 7, " [ENTER] Dang Nhap", 2);
			string ider, passer;

			int h = keyboard();
			if (h == 4) {
				system("cls");
				return;
			}
			ifstream is;
			is.open("Admin.txt");
			while (!is.eof())
			{
				is >> ider >> passer;
				if (id == ider && pass == passer) {
					vietchuoi(20, 9, "Cho Xac Thuc...", 12); 
					Sleep(1500);
					vietchuoi(20, 11, "Dang Nhap Thanh Cong !", 10);
					Sleep(1000);
					system("cls");
					chose(hh, dh, tk);
					goto out;
				}

			}
			tmp++;
			vietchuoi(20, 9, "Cho Xac Thuc...", 12);
			Sleep(1500);
			vietchuoi(20, 11, "Sai User Hoac PassWord! Vui Long Nhap Lai !", 12);
			Sleep(1000);
			system("cls");

		}

		if (tmp == 3)
		{
			vietchuoi(20, 9, "Ban Da Nhap Sai Qua 3 Lan!", 12);
			Sleep(1000);
			exit(0);
		}
	}
	else {
		vietchuoi(20, 2, "LOGIN() : KHONG the mo duoc FILE Admin.txt !", 12);
		Sleep(1200);
		system("cls");
	}
out:
	return;
}

#endif