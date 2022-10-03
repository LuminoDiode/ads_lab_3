#include <iostream>
#include <string>
using namespace std;

/* 18.Описание главной функции, 
 * описание текстовой строки, 
 * оператор ввода и вывода строки, 
 * вычисление длины строки;
 */

#define mainFunc int main()
#define textString(name) string name
#define printString(strName) cout<<strName
#define readString(strName) cin>>strName
#define getStringLength(strName) strName.length();

mainFunc{
	textString(myStr);
	readString(myStr);
	printString(myStr);
	cout << endl;
	printString(getStringLength(myStr));
}
