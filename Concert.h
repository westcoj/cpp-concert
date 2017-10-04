//
// Created by Cody on 10/2/2017.
//
#include <vector>
#include <string>
#include <ctime>
#include <iostream>

#ifndef CONCERT_CONCERT_H
#define CONCERT_CONCERT_H


class Concert {

private:

public:
    Concert(std::string name, int want, std::vector<std::string> list, int year, int day, int month);
    Concert();
    std::string concertName;
    int  desire;
    std::vector<std::string> friends;
    std::tm date;
    bool operator<(const Concert& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Concert& concert);






};


#endif //CONCERT_CONCERT_H
