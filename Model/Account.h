//
// Created by wangfeng on 18/1/4.
//

#ifndef HYDRO_ACCOUNT_H
#define HYDRO_ACCOUNT_H

#include <string>

class Account {
private:
    std::string account;
    std::string pwd;

public:
    Account(std::string account_, std::string pwd_);
    ~Account();
    std::string get_account();
    std::string get_pwd();
    int change_pwd();
};

#endif //HYDRO_ACCOUNT_H
