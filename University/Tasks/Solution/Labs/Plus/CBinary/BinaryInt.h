#pragma once

namespace Binary
{
	class BinaryInt
	{
	private:
		int _number; // Поле с числом в 10-ом виде.
	public:
		BinaryInt(int number); // Конструктор.
		int* Get(); // Получение числа в двоичном представлении.
		int Count(); // Колличество цифр в числе двоичного вида.
		void Print(); // Вывод в консоль.
	private:
		int Validate(int number); // Проверка числа на отрицательное.
	};
}
