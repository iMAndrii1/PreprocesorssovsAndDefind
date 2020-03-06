#include <iostream>
#include <string>
#include <ctime>
#include <list>
#include <conio.h>
#include "Header.h"
#include "StringWorcker.h"

using namespace std;

#define CLEAR system("cls");
#define PI 3.14;
#define TAB "\t";
#define ENDLINE "\n";

#define bEgin {
#define end }



int main() {

	int result = Header::sum(10, 5);
	cout << result << endl;

	StringWorker::sum("IT", "STEP");

	Header::show();
	StringWorker::show();
	system("pause");
	return 0;
}