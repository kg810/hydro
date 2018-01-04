project("hydro")

add_executable(hydro Main.cc Model/Order.cpp TradingEngine/StrategyInit.cpp TradingEngine/StrategyInit.h Model/StrategyContext.cpp Model/StrategyContext.h Model/Portfolio.cpp Model/Portfolio.h Model/Account.cpp Model/Account.h)

