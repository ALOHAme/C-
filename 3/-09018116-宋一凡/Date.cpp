#include<iostream>
#include"Date.h"
using namespace std;
Date::Date(int year1,int month1,int day1){
    setyear(year1);
	setmonth(month1);
	setday(day1);
}
void Date::setyear(int year1){
    year=year1;
}
void Date::setmonth(int month1){
    if(month1>=1&&month1<=12) month=month1;
	else month=1;
}
void Date::setday(int day1){
    day=day1;
}
int Date::getyear(){
    return year;
}
int Date::getmonth(){
    return month;
}
int Date::getday(){
    return day;
}
void Date::displayDate(){
    cout<<"The Date is "<<getmonth()<<"/"<<getyear()<<"/"<<getday()<<endl;
}
