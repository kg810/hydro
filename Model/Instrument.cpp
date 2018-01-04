#include"Instrument.h"

Instrument::Instrument(std::string sym_, float open_price_, float close_price_) : sym(sym_), open_price(open_price_), close_price(close_price_) {
}

int Instrument::update_open_price(float op) {
    open_price = op;
}

int Instrument::update_close_price(float cp) {
    close_price = cp;
}
