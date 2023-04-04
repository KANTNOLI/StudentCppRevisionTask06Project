﻿#include "tasks.h"

/*	Task X. Chess & Knight [шахматный конь]
*
*	Шахматный конь (chess knight) ходит буквой “Г” — на две клетки по вертикали в любом направлении
*	и на одну клетку по горизонтали, или наоборот.
*	Даны две различные клетки шахматной доски, определите, может ли конь попасть
*	с первой клетки на вторую одним ходом.
*
*	Формат входных данных [input]
*	Функция принимает на вход четыре числа от 1 до 8 каждое (не забудьте про "защиту от дурака"),
*	задающие номер столбца и номер строки сначала для первой клетки (x1, y1),
*	потом для второй клетки (x2, y2).
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - результат решения.
*
*	[ input 1]: 4 4 4 5
*	[output 1]: false
*
*	[ input 2]: 3 6 2 4
*	[output 2]: true
*/

bool taskX(int x1, int y1, int x2, int y2) {
	
//	return x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 ? false : y1 + 2 = y2 && ;
	return false;
}