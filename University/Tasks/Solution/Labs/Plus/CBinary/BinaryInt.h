#pragma once

namespace Binary
{
	class BinaryInt
	{
	private:
		int _number; // ���� � ������ � 10-�� ����.
	public:
		BinaryInt(int number); // �����������.
		int* Get(); // ��������� ����� � �������� �������������.
		int Count(); // ����������� ���� � ����� ��������� ����.
		void Print(); // ����� � �������.
	private:
		int Validate(int number); // �������� ����� �� �������������.
	};
}
