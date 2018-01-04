#ifndef ORDER_H
#define ORDER_H
#include<string>

enum Side {
    buy,
    sell
};

enum Type {
    limit,
    market
};

class Order {
private:
    std::string sym;
    Side side;
    Type type;
    float price;

public:
    Order();
    Order(std::string sym_, Side side_, Type type_, float price_);
    ~Order();
};

#endif
