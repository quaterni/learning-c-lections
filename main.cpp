﻿#include <iostream>
#include "Lections.h"

const int countOfLections = 2;

void printLections(std::string lections[])
{
	std::cout << "Доступные лекции:" << std::endl;
	for (int i = 0; i < countOfLections; i++) {
		std::cout << lections[i] << std::endl;
	}
	std::cout << std::endl;
}

void main() 
{
	setlocale(LC_ALL, "Rus");
	std::string lections[countOfLections] =  { "Лекция 1: Типы данных", "Лекция 2: Указатели и константы"};

	printLections(lections);
	char command[15];

	while(true) {
		std::cout << "Доступные комманды: lections, lection number, exit" << std::endl;
		std::cout << "Введите команду" << std::endl;
		gets_s(command);
		std::cout << std::endl << std::endl;
		if ( strcmp("lection 1", command) == 0) {

			std::cout << lections[0] << std::endl;
			setlocale(LC_ALL, "Eng");
			lection1();
		}
		else if (strcmp("lection 2", command) == 0) {
			lection2();
		}
		else if (strcmp("exit", command) == 0) {
			break;
		}
		else if (strcmp("lections", command) == 0) {
			printLections(lections);
		}
		else {
			std::cout << "Неверная команда" << std::endl;
		}
		std::cout << std::endl << std::endl;
	}
}

