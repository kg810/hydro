#ifndef SIMU_EXCHANGE_H
#define SIMU_EXCHANGE_H

#include<vector>
#include<memory>
#include"../Model/Order.h"
#include"../Model/Account.h"

class SimuExchange {
private:
    vector<Account> accounts;
    vector<Instrument> instruments;

public:
    SimuExchange();
    SimuExchange(ExchangeContext context);
    ~SimuExchange();

    int match_order(std::unique_ptr<Order> order);
};

#endif
