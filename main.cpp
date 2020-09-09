﻿#include <iostream>
using namespace std;

void main() 
{
	/*
	* 
        bool: логический тип. Может принимать одну из двух значений true (истина) и false (ложь). Размер занимаемой памяти для этого типа точно не определен.
        char: представляет один символ в кодировке ASCII. Занимает в памяти 1 байт (8 бит). Может хранить любое значение из диапазона от -128 до 127, либо от 0 до 255
        signed char: представляет один символ. Занимает в памяти 1 байт (8 бит). Может хранить любой значение из диапазона от -128 до 127
        unsigned char: представляет один символ. Занимает в памяти 1 байт (8 бит). Может хранить любой значение из диапазона от 0 до 255
        wchar_t: представляет расширенный символ. На Windows занимает в памяти 2 байта (16 бит), на Linux - 4 байта (32 бита). Может хранить любой значение из диапазона от 0 до 65 535 (при 2 байтах), либо от 0 до 4 294 967 295 (для 4 байт)
        char16_t: представляет один символ в кодировке Unicode. Занимает в памяти 2 байта (16 бит). Может хранить любой значение из диапазона от 0 до 65 535
        char32_t: представляет один символ в кодировке Unicode. Занимает в памяти 4 байта (32 бита). Может хранить любой значение из диапазона от 0 до 4 294 967 295
        short: представляет целое число в диапазоне от –32768 до 32767. Занимает в памяти 2 байта (16 бит).
        Данный тип также имеет синонимы short int, signed short int, signed short.
        unsigned short: представляет целое число в диапазоне от 0 до 65535. Занимает в памяти 2 байта (16 бит).
        Данный тип также имеет синоним unsigned short int.
        int: В зависимости от архитектуры процессора может занимать 2 байта (16 бит) или 4 байта (32 бита). Диапазон от –32768 до 32767 (при 2 байтах) или от −2 147 483 648 до 2 147 483 647 (при 4 байтах).
        Данный тип имеет синонимы signed int и signed.
        unsigned int: представляет положительное целое число. В зависимости от архитектуры процессора может занимать 2 байта (16 бит) или 4 байта (32 бита),  диапазон предельных значений: от 0 до 65535 (для 2 байт), либо от 0 до 4 294 967 295 (для 4 байт).
        В качестве синонима этого типа может использоваться unsigned
        long: представляет целое число в диапазоне от −2 147 483 648 до 2 147 483 647. Занимает в памяти 4 байта (32 бита).
        У данного типа также есть синонимы long int, signed long int и signed long
        unsigned long: представляет целое число в диапазоне от 0 до 4 294 967 295. Занимает в памяти 4 байта (32 бита).
        Имеет синоним unsigned long int.
        long long: представляет целое число в диапазоне от −9 223 372 036 854 775 808 до +9 223 372 036 854 775 807. Занимает в памяти, как правило, 8 байт (64 бита).
        Имеет синонимы long long int, signed long long int и signed long long.
        unsigned long long: представляет целое число в диапазоне от 0 до 18 446 744 073 709 551 615. Занимает в памяти, как правило, 8 байт (64 бита).
        Имеет синоним unsigned long long int.
        float: представляет вещественное число ординарной точности с плавающей точкой в диапазоне +/- 3.4E-38 до 3.4E+38. В памяти занимает 4 байта (32 бита)
        double: представляет вещественное число двойной точности с плавающей точкой в диапазоне +/- 1.7E-308 до 1.7E+308. В памяти занимает 8 байт (64 бита)
        long double: представляет вещественное число двойной точности с плавающей точкой не менее 8 байт (64 бит). В зависимости от размера занимаемой памяти может отличаться диапазон допустимых значений.
        void: тип без значения

        Прямой, обратный и дополнительный код. Как представляются и суммируются числа:
        https://prog-cpp.ru/direct-return-additional-code/


	*/

	cout << "Hello, world!"<< endl;

	//Кириллица без кодировки
	cout << "Привет!" << endl;

	//Установка "локали"
	setlocale(LC_ALL, "Rus");
	cout << "Привет!" << endl;
    cout << endl;

    cout << "Типы данных" << endl;

    //в необъявленный переменных лежит "мусор" оперативной памяти, где определены эти переменные
    //объявленные переменные
    int i(3);
    unsigned int ui = 12;

    //битовое, восьмиричное и шестнадцатиричное представление
    i = 0b00000011;
    i = 003;
    i = 0x03;


    cout << "Размер переменной int = i: "<< sizeof(i) << endl;

    //для типов можно явно определять количество занимаемых байт, это нужно т.к. в разных компиляторах могут стоять разные значения для типов
    uint32_t ui32 = i;
    int64_t i64 = ui32;

    cout << "Размер переменной uint32_t ui32 = i : " << sizeof(ui32) << endl;
    cout << "Размер переменной int64_t i64 = ui32 : " << sizeof(i64) << endl;
    cout << endl;

    char c = 'a';
    char c2 = 89;
    cout << "Значение char d = 89 : " << c2 << endl;
    cout << "Размер переменной char c = 'a' : " << sizeof(c) << endl;

    //переполнение чара и приведение типов
    c = 1000;
    //выведет -24, так как char знаковый, преобразование идет через дополнительный код
    cout << "Целочисленное значение char c = 1000 : " << int(c) << endl;

    //преобразование в дополнительный код
    c = 0xff;
    cout << "Целочисленное значение char c = 0xff : " << int(c) << endl;
    i = 0xff;
    cout << "Целочисленное значение int i = 0xff : " << int(i) << endl;

    float f = 0.3;
    cout << "Значение float f = 0.3 : " << f << endl;
    cout << endl;

    cout << "Приведение типов"<< endl;
    double d = 58.99999999999999;
    float f1 = d;
    cout << "Значение double d = 58.99999999999999 : " << d << endl; // выведет 59, скорее всего неявно идет преобразование float(d)
    cout << "Значение float f = d : " << f1 << endl;
    cout << "Значение int(d) : " << int(d) << endl;
    cout << "Значение bool(d) : " << bool(d) << endl;
    cout << "Значение char(d) : " << char(d) << endl;
    cout << endl;

    cout << "Битовые операции с типами" << endl;

    int i11 = 0b00001100; //12
    int i12 = 0b00100000; //32
    cout << "Значение 00001100 | 00100000 = 00101100: " << (i11 |i12) << endl;
    cout << "Значение 00001100 & 00100000 = 00000000: " << (i11 & i12) << endl;
    cout << "Битовый сдвиг влево: 00001100 <<1 = 00011000: " << (i11 << 1) << endl; //битовый сдвиг на n идентичен умножению на число 2^n
    cout << "Битовый сдвиг влево: 00001100 >>1 = 00000110: " << (i11 >> 1) << endl; //битовый сдвиг на n идентичен умножению на число 2^n
    cout << "Битовый сдвиг влево: 00001100 <<3 = 00110000: " << (i11 << 3) << endl; //битовый сдвиг на n идентичен умножению на число 2^n
}