//
// Created by Cody on 10/2/2017.
//

#include "Concert.h"


//int Concert::desire;
//string Concert::concertName;
//vector<string> Concert::friends;
//tm Concert::date;

Concert::Concert(){
    desire = 0;
    concertName = "NickleBack";
    friends =  {};
    date.tm_mon = 1;
    date.tm_mday = 1;
    date.tm_year = 1990;
}

Concert::Concert(std::string name,int want, std::vector<std::string> list, int year, int day, int month){
    desire = want;
    concertName = name;
    friends = list;
    date.tm_mon = month;
    date.tm_mday = day;
    date.tm_year = year;
}

bool Concert::operator<(const Concert& other) const{
    if(date.tm_year!=other.date.tm_year){
        return this->date.tm_year<other.date.tm_year;
    }

    if(date.tm_mon!=other.date.tm_mon){
        return this->date.tm_mon<other.date.tm_mon;
    }

    if(date.tm_mday!=other.date.tm_mday){
        return this->date.tm_mday<other.date.tm_mday;
    }

    return this->desire>other.desire;

}

std::ostream& operator<<(std::ostream& stream, const Concert& concert){
    stream << concert.concertName << " " << concert.desire << " " << concert.date.tm_mday << "/" << concert.date.tm_mon <<"/" << concert.date.tm_year;
    return stream;

}
