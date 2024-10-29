#include <iostream>
#include <cstring>
using namespace std;
#pragma once
class Airplane
{

	char* type;
	int max_passangers;
	int passangers;
public:

	Airplane(char* type_f, int max_passangers_f, int passangers_f) :
		type{ type_f ? new char[strlen(type_f) + 1] : new char[8] }, max_passangers{ max_passangers_f }, passangers{ passangers_f }
	{
		if (type_f) {
			strcpy_s(type, strlen(type_f) + 1, type_f);
		}
		else {
			strcpy_s(type, 8, "Unknown");
		}
	}

	Airplane() : Airplane{ nullptr,0,0 } {}

	Airplane(const Airplane& obj) :
		type{ obj.type ? new char[strlen(obj.type) + 1] : new char[8] }, max_passangers{ obj.max_passangers }, passangers{ obj.passangers }
	{
		if (obj.type) {
			strcpy_s(type, strlen(obj.type) + 1, obj.type);
		}
		else {
			strcpy_s(type, 8, "Unknown");
		}
	}

	void display();

	bool operator==(const Airplane& another) {
		return !strcmp(this->type, another.type);
	}

	Airplane operator++() {
		return Airplane(this->type, this->max_passangers, this->passangers++);
	}

	Airplane operator--() {
		return Airplane(this->type, this->max_passangers, this->passangers--);
	}

	bool operator>(Airplane& obj) {
		return this->max_passangers > obj.max_passangers;
	}

	bool operator<(Airplane& obj) {
		return this->max_passangers < obj.max_passangers;
	}
};


