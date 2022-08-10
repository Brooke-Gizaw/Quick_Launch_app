#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;

void run_app_1(const char* a) {
		system(a);
}
void run_app_2(const char* b) {
		system(b);
}
void run_app_3(const char* c) {
		system(c);
}
void run_app_4(const char* d) {
		system(d);
}
void run_app_5(const char* e) {
		system(e);
}
void run_app_6(const char* f) {
		system(f);
}
void run_app_7(const char* g) {
		system(g);
}
void run_app_8(const char* h) {
		system(h);
}
void run_app_9(const char* i) {
		system(i);
}
void run_app_10(const char* j) {
		system(j);
}

void main() {
	ifstream myfile; myfile.open("text.txt");
	string myline;
	string list_App[11];
	int y = 0;
	if (myfile.is_open()) {
		while (myfile) {
			y++;
			getline(myfile, myline);
			cout << myline << ":" << y << '\n';
			list_App[y] = myline;
		}
	}
	//x.c_str()
	const char* quick_launch_app_1 = list_App[1].c_str();
	const char* quick_launch_app_2 = list_App[2].c_str();
	const char* quick_launch_app_3 = list_App[3].c_str();
	const char* quick_launch_app_4 = list_App[4].c_str();
	const char* quick_launch_app_5 = list_App[5].c_str();
	const char* quick_launch_app_6 = list_App[6].c_str();
	const char* quick_launch_app_7 = list_App[7].c_str();
	const char* quick_launch_app_8 = list_App[8].c_str();
	const char* quick_launch_app_9 = list_App[9].c_str();
	const char* quick_launch_app_10 = list_App[10].c_str();
	bool continue_ = true;
	while (continue_) {
		if (GetKeyState(VK_NUMPAD1) & 0x8000)
		{
			cout << 1;
			run_app_1(quick_launch_app_1);
			Sleep(300);
		}
		if (GetKeyState(VK_NUMPAD2) & 0x8000)
		{
			cout << 2;
			run_app_2(quick_launch_app_2);
			Sleep(300);
		}
		if (GetKeyState(VK_NUMPAD3) & 0x8000)
		{
			cout << 3;
			run_app_3(quick_launch_app_3);
			Sleep(300);
		}
		if (GetKeyState(VK_NUMPAD4) & 0x8000)
		{
			cout << 4;
			run_app_4(quick_launch_app_4);
			Sleep(300);
		}
		if (GetKeyState(VK_NUMPAD5) & 0x8000)
		{
			cout << 5;
			run_app_5(quick_launch_app_5);
			Sleep(300);
		}
		if (GetKeyState(VK_NUMPAD6) & 0x8000)
		{
			cout << 6;
			run_app_6(quick_launch_app_6);
			Sleep(300);
		}
		if (GetKeyState(VK_NUMPAD7) & 0x8000)
		{
			cout << 7;
			run_app_7(quick_launch_app_7);
			Sleep(300);
		}
		if (GetKeyState(VK_NUMPAD8) & 0x8000)
		{
			cout << 8;
			run_app_8(quick_launch_app_8);
			Sleep(300);
		}
		if (GetKeyState(VK_NUMPAD9) & 0x8000)
		{
			cout << 9;
			run_app_9(quick_launch_app_9);
			Sleep(300);
		}
		if (GetKeyState(VK_NUMPAD0) & 0x8000)
		{
			cout << 10;
			run_app_10(quick_launch_app_10);
			Sleep(300);
		}
		if (GetKeyState(VK_DECIMAL) & 0x8000)
		{
			cout << "Exit";
			exit(0);
		}
	}
}
