#include<bits/stdc++.h>
using namespace std;


class Date{

public:
	//initial function
	Date(int _day,int _month,int _year){
		setDay(_day);
		setMonth(_month);
		setYear(_year);
	}
	
	//setXXX
	void setDay(int _day){
		day=_day;
	}
	
	void setMonth(int _month){
		month=_month<13 and _month>0  ? _month : 1;
	}

	void setYear(int _year){
		year=_year;
	}

	//getXXX
	int getDay(){
		return day;
	}

	int getMonth(){
		return month;
	}

	int getYear(){
		return year;
	}

	//display
	void displayDate(){
		cout<<month<<"/"<<day<<"/"<<year<<'\n';
	}
	
private:
	int day;
	int month;
	int year;
};



int main(){
	Date d1(1,12,152),d2(1,1,1),d3(11,0,12);

	//show, and the month of d3 would be 1
	d1.displayDate();
	d2.displayDate();
	d3.displayDate();

	//test for modifying
	d3.setDay(11);
	d3.displayDate();
	cout<<d3.getMonth();

	return 0;
}