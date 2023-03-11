#include "date.h"

Date::Date(){
    time_t t = time(0);
    tm* now = localtime(&t);
    day = now->tm_mday;
    month = now->tm_mon + 1;
    year = now->tm_year + 1900;
    
}
Date::Date(int year){
    day = 1;
    month = 1;
    this->year = year;
}
Date::Date(int year, int month){
    day = 1;
    this->month = month;
    this->year = year;
}
Date::Date(int year, int month, int day){
    this->day = day;
    this->month = month;
    this->year = year;
}

ostream& operator<<(ostream& os, const Date& date){
    os << date.day << "/" << date.month << "/" << date.year;
    return os;
}
istream& operator>>(istream& is, Date& date){
    is >> date.day >> date.month >> date.year;
    return is;
} 

Date::Date(const Date& date){
    day = date.day;
    month = date.month;
    year = date.year;
}

Date Date::Tomorrow(){
    Date temp;
    temp.day = day;
    temp.month = month;
    temp.year = year;
    if(temp.year %4 == 0 && temp.year % 100 != 0 || temp.year % 400 == 0){
        if(temp.month == 2){
            if(temp.day == 29){
                temp.day = 1;
                temp.month = 3;
            }
            else{
                temp.day++;
            }
        }
        else if(temp.month == 1 || temp.month == 3 || temp.month == 5 || temp.month == 7 || temp.month == 8 || temp.month == 10 || temp.month == 12){
            if(temp.day == 31){
                temp.day = 1;
                if(temp.month == 12){
                    temp.month = 1;
                    temp.year++;
                }
                else{
                    temp.month++;
                }
            }
            else{
                temp.day++;
            }
        }
        else{
            if(temp.day == 30){
                temp.day = 1;
                temp.month++;
            }
            else{
                temp.day++;
            }
        }
    }




    else{
        if(temp.month == 2){
            if(temp.day == 28){
                temp.day = 1;
                temp.month = 3;
            }
            else{
                temp.day++;
            }
        }
        else if(temp.month == 1 || temp.month == 3 || temp.month == 5 || temp.month == 7 || temp.month == 8 || temp.month == 10 || temp.month == 12){
            if(temp.day == 31){
                temp.day = 1;
                if(temp.month == 12){
                    temp.month = 1;
                    temp.year++;
                }
                else{
                    temp.month++;
                }
            }
            else{
                temp.day++;
            }
        }
        else{
            if(temp.day == 30){
                temp.day = 1;
                temp.month++;
            }
            else{
                temp.day++;
            }
        }
    }
    return temp;
}

Date Date::Yesterday(){
    Date temp;
    temp.day = day;
    temp.month = month;
    temp.year = year;
    if(temp.year %4 == 0 && temp.year % 100 != 0 || temp.year % 400 == 0){
        if(temp.month == 3){
            if(temp.day == 1){
                temp.day = 29;
                temp.month = 2;
            }
            else{
                temp.day--;
            }
        }
        else if(temp.month == 1 || temp.month == 4 || temp.month == 6 || temp.month == 8 || temp.month == 9 || temp.month == 11 || temp.month == 12){
            if(temp.day == 1){
                temp.day = 31;
                if(temp.month == 1){
                    temp.month = 12;
                    temp.year--;
                }
                else{
                    temp.month--;
                }
            }
            else{
                temp.day--;
            }
        }
        else{
            if(temp.day == 1){
                temp.day = 30;
                temp.month--;
            }
            else{
                temp.day--;
            }
        }
    }

    else{
        if(temp.month == 3){
            if(temp.day == 1){
                temp.day = 28;
                temp.month = 2;
            }
            else{
                temp.day--;
            }
        }
        else if(temp.month == 1 || temp.month == 4 || temp.month == 6 || temp.month == 8 || temp.month == 9 || temp.month == 11 || temp.month == 12){
            if(temp.day == 1){
                temp.day = 31;
                if(temp.month == 1){
                    temp.month = 12;
                    temp.year--;
                }
                else{
                    temp.month--;
                }
            }
            else{
                temp.day--;
            }
        }
        else{
            if(temp.day == 1){
                temp.day = 30;
                temp.month--;
            }
            else{
                temp.day--;
            }
        }
    }
        return temp;

}

bool Date::operator==(const Date& date){
    if(day == date.day && month == date.month && year == date.year){
        return true;
    }
    else{
        return false;
    }
}
bool Date::operator!=(const Date& date){
    if(day != date.day || month != date.month || year != date.year){
        return true;
    }
    else{
        return false;
    }
}

bool Date::operator<(const Date& date){
    if(year < date.year){
        return true;
    }
    else if(year == date.year){
        if(month < date.month){
            return true;
        }
        else if(month == date.month){
            if(day < date.day){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
bool Date::operator>(const Date& date){
    if(year > date.year){
        return true;
    }
    else if(year == date.year){
        if(month > date.month){
            return true;
        }
        else if(month == date.month){
            if(day > date.day){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
bool Date::operator<=(const Date& date){
    if(year < date.year){
        return true;
    }
    else if(year == date.year){
        if(month < date.month){
            return true;
        }
        else if(month == date.month){
            if(day <= date.day){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
bool Date::operator>=(const Date& date){
    if(year > date.year){
        return true;
    }
    else if(year == date.year){
        if(month > date.month){
            return true;
        }
        else if(month == date.month){
            if(day >= date.day){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}

Date Date::operator+(int days){
    Date temp;
    temp.day = day;
    temp.month = month;
    temp.year = year;
    for(int i = 0; i < days; i++){
        temp = temp.Tomorrow();
    }
    return temp;
}

Date Date::operator-(int days){
    Date temp;
    temp.day = day;
    temp.month = month;
    temp.year = year;
    for(int i = 0; i < days; i++){
        temp = temp.Yesterday();
    }
    return temp;
}

Date& Date::operator++(){
    *this = this->Tomorrow();
    return *this;
}
Date Date::operator++(int){
    Date temp;
    temp.day = day;
    temp.month = month;
    temp.year = year;
    *this = this->Tomorrow();
    return temp;
}

Date& Date::operator--(){
    *this = this->Yesterday();
    return *this;
}

Date Date::operator--(int){
    Date temp;
    temp.day = day;
    temp.month = month;
    temp.year = year;
    *this = this->Yesterday();
    return temp;
}
 Date::operator int(){
    return day;
}
Date::operator long(){
    return year;

}
Date& Date::operator+=(int days){
    day = days;
    return *this;
}
Date& Date::operator-=(int days){
    day = days;
    return *this;
}






Date::~Date(){
    
}