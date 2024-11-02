#pragma once
#include <string>
#include "IdCard.h"

class Student {
public:
    Student(std::string, std::string, IdCard*);
    ~Student();
    void set_name(std::string);
    std::string get_name();
    void set_last_name(std::string);
    std::string get_last_name();
    void set_scores(int[]);
    void set_average_score(double);
    double get_average_score();
    void save();
    void setIdCard(IdCard *c);
    IdCard getIdCard();
private:
    int scores[5];
    double average_score;
    std::string name;
    std::string last_name;
    IdCard *iCard;
};