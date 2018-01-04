//
// Created by wangfeng on 18/1/4.
//

#include "Account.h"

Account::Account(std::string account_, std::string pwd_) : account(account_), pwd(pwd_) {}

std::string Account::get_account(){
    return account;
}

std::string Account::get_pwd() {
    return pwd;
}

int Account::change_pwd(std::string) {

}

