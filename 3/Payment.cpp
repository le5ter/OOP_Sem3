#include "Payment.h"

Payment::Payment()
{
	name = ' ';
	lastname = ' ';
	patronymic = ' ';
	salary = 10000;
	start_work_year = 2010;
	percent_of_allowance = 2;
	income_tax = 13;
	work_days_in_month = 20;
	days_on_work = 20;
	accured_amount = 0;
	amount_withheld = 0;
	final_summ = 0;
}

Payment::Payment(double salary, int work_days_in_month, int days_on_work)
{
	name = ' ';
	lastname = ' ';
	patronymic = ' ';
	this->salary = salary;
	start_work_year = 2010;
	percent_of_allowance = 10;
	income_tax = 13;
	this->days_on_work = days_on_work;
	this->work_days_in_month = work_days_in_month;
	accured_amount = 0;
	amount_withheld = 0;
	final_summ = 0;
}

Money Payment::count_accured_amount()
{
	Money accured_summ(salary);
	double tmp = 1.0 / work_days_in_month * (days_on_work * (1 + percent_of_allowance / 100.0));
	accured_summ = accured_summ * tmp;
	accured_amount = accured_summ;
	return accured_summ;
}

Money Payment::count_amount_withheld()
{
	Money tmp = accured_amount * 0.14;
	amount_withheld = tmp;
	return tmp;
}

Money Payment::count_final_summ()
{
	Money tmp;
	tmp = accured_amount - amount_withheld;
	final_summ = tmp;
	return tmp;
}

int Payment::count_experience()
{
	return CURR_YEAR - start_work_year;
}

