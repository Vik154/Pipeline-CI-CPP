#pragma once

#include <chrono>
#include <iostream>

#define timer(msg) Timer obj{msg}

class Timer {
public:
        explicit Timer(const std::string& msg = "# ") :
                message(msg), start(std::chrono::steady_clock::now()) {}
        ~Timer() {
                auto finish = std::chrono::steady_clock::now();
                auto res = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start).count();
                std::cout << message + ": " << static_cast<double>(res/1000.0) << " sec.\n";
        }
private:
        std::string message;
        std::chrono::steady_clock::time_point start;
};