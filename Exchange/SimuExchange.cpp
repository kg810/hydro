#include"SimuExchange.h"

SimuExchange::SimuExchange() {
}

SimuExchange::SimuExchange(ExchangeContext context) {
}

int SimuExchange::match_order(std::unique_ptr<Order> order) {
    std::unique_ptr<Instrument> ins(nullptr);
    std::for_each(instruments.begin(), instruments.end(),
            [ins](const Instrument &Inss) {
                if(order->sym == Inss.sym) {
                    ins = std::unique_ptr<Instrument>(Inss);
                    break;
                }
            });
}
