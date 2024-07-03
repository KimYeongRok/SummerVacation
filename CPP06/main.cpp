#include <iostream>

void print(int x) { std::cout << "int : " << x << std::endl; }
void print(char x) { std::cout << "char : " << x << std::endl; }
void print(double x) { std::cout << "double : " << x << std::endl; }

class Date {
	int year_;
	int month_;
	int day_;

public:
	void SetDate(int y, int m, int d);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);

	int GetCurrentMonthTotalDays(int y, int m);

	void ShowDate();
};

void Date::SetDate(int y, int m, int d) {
	year_ = y;
	month_ = m;
	day_ = d;
}

int Date::GetCurrentMonthTotalDays(int y, int m) {
	static int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (m != 2) {
		return month_day[m - 1];
	}
	else if (y % 4 == 0 && y % 100 != 0) {
		return 29;
	}
	else {
		return 28;
	}
}

void Date::AddDay(int inc) {
	while (true) {
		int current_month_total_days = GetCurrentMonthTotalDays(year_, month_);

		if (day_ + inc <= current_month_total_days) {
			day_ += inc;
			return;
		}
		else {
			inc -= (current_month_total_days - day_ + 1);
			day_ = 1;
			AddMonth(1);
		}
	}
}

void Date::AddMonth(int inc) {
	AddYear((inc + month_ - 1) / 12);
	month_ = month_ + inc % 12;
	month_ = (month_ == 12 ? 12 : month_ % 12);
}

void Date::AddYear(int inc) { year_ += inc; }

void Date::ShowDate() {
	std::cout << "오늘은 " << year_ << " 년 ";
	std::cout << month_ << " 월 ";
	std::cout << day_ << " 일 입니다." << std::endl;
}

int main() {
	// 오버로딩
	{
		//int a = 1;
		//char b = 'c';
		//double c = 3.2f;

		//print(a);
		//print(b);
		//print(c);
	}

	// 날짜 클래스
	{
		Date day;
		day.SetDate(2011, 3, 1);
		day.ShowDate();

		day.AddDay(30);
		day.ShowDate();

		day.AddDay(2000);
		day.ShowDate();

		day.SetDate(2012, 1, 31);
		day.AddDay(29);
		day.ShowDate();

		day.SetDate(2012, 8, 4);
		day.AddDay(2500);
		day.ShowDate();
	}
	return 0;
}