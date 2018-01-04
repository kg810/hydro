#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include<string>
#include<vector>

class Instrument {
private:
    const std::string sym;
    vector<float> ask_prices;
    vector<float> bid_prices;
    float open_price;
    float close_price;

public:
    Instrument();
    Instrument(std::string sym_, float open_price_, float close_price_);
    ~Instrument();

    int update_ask_prices(float ap);

    int update_bid_prices(float bp);

    int update_open_price(float op);

    int update_close_price(float cp);
};

#endif
