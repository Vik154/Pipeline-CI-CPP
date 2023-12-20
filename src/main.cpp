#include <iostream>
#include <thread>

#include "../utility/timer.hpp"
#include "../include/Ascii.h"

using std::cout;
using std::thread;
using namespace std::chrono_literals;

int main() {

	{   /* Test потоков */
		timer("Thread №1");
		thread* th = new thread([]() {std::cout << "Test thread\n";});
		std::this_thread::sleep_for(200ms);
		th->join();
	}

	/* Test заголовочных фалов */
    ascii::Ascii font = ascii::Ascii();
	font.print("Hello");
	font.clear();
	cout << "\n";
	font.print("World");

	cout << "Building from CMake.\n";
	return 0;
}