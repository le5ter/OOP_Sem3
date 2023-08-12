#pragma once
#include "Money.h"
#include <string>

using namespace std;

const int CURR_YEAR = 2022;

class Payment
{
private:
	string name;
	string lastname;
	string patronymic;
	double salary;
	int start_work_year;
	int percent_of_allowance;
	double income_tax;
	int days_on_work;
	int work_days_in_month;
	Money accured_amount;
	Money amount_withheld;
	Money final_summ;
public:
	Payment();
	Payment(double salary, int work_days_in_month, int days_on_work);
	//void setName(string name);
	//void setLastname(string lastname);
	//void setPatronymic(string patronymic);
	Money count_accured_amount();
	Money count_amount_withheld();
	Money count_final_summ();
	int count_experience();

};
