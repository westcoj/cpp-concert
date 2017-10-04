#include <iostream>
#include "Concert.h"
#include <algorithm>

int main(){
    //Concert::Concert(string name,int want, vector<string> list, int year, int day, int month){
    std::vector<std::string> list1 {"James", "Chad", "Cypress"};
    std::vector<std::string> list2 {"Sarah", "Jecker", "Simjae"};
    std::vector<std::string> list3 {"Matt", "Brandon", "Nick"};
    std::vector<std::string> listEmpty {};
    Concert one("Naked Professors", 10, list1, 2017,4,10);  //Should be position 5
    Concert two("Bare the Traveler", 3, list1, 2010,6,9);   //Should be position 2
    Concert three("Jeremy Loops", 8, list2, 2017,4,10);     //Should be position 6
    Concert four("Bus Driver", 6, listEmpty, 2017,20,5);    //Should be position 3
    Concert five("The Kooks", 9, listEmpty, 2019,14,3);     //Should be last position
    Concert six("Kingswood", 5, list3, 2017,21,12);         //Should be position 8
    Concert seven;                                          //Default should be earliest (1990) position 1
    Concert eight("No More Kings", 10, list1, 2017,2,10);   //Should be position 4
    Concert nine("Chase Long Beach", 6, list1, 2017,12,10); //Should be position 7
    Concert ten("Fiery Furnaces", 6, list1, 2018,8,9);      //Should be position 9
    //std::cout << one;
    std::vector<Concert> concertList {one, two, three, four, five, six, seven, eight, nine, ten};
    std::sort(concertList.begin(),concertList.end());
    int lister = 1;
    for(auto iterator = concertList.begin();iterator!=concertList.end();++iterator){
        std::cout << lister;
        std::cout <<". " <<  *iterator;
        std::cout<< '\n';
        lister++;

    }
}