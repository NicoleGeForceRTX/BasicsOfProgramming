#include <iostream>
#include <sstream>
#include <stdlib.h>

/*
 * Перевод в 8-битную кодировку символов
 *
 * @param alphabet_size число символов английского алфавита.
 * @param alphabet_start первый буквенный символ в кодировк.
 * @return возвращает ASCII код символа.
 */

using namespace std;

const int alphabet_size = 26;
const int alphabet_start = 65;
const int amount_letters = 10000;

int rand_char() {
	return rand() % alphabet_size + alphabet_start;
}

int main() {
	int letters[alphabet_size] = {0};
	stringstream str;
	for (int i = 0; i < amount_letters; i++) {
		int ch = rand_char();
		letters[ch-alphabet_start]++;
		str << static_cast<char>(ch);
	}

	cout << str.str() << endl;

	for (int i = 0; i < alphabet_size; i++) {
		cout << static_cast<char>(i + alphabet_start) << "(" << "index: " << i << " number: " << i + alphabet_start  << ")" << " = " << letters[i] << endl;
	}
}