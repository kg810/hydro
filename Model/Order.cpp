#include"Order.h"

Order::Order() {
}

Order::Order(std::string sym_, Side side_, Type type_, float price_) : sym(sym_), side(side_), type(type_), price(price_) {
}

Order::~Order() {
}
