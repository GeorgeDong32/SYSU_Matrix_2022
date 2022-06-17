#include <thread>
#include <iostream>
#include <vector>
#include <chrono>
using t = std::thread;
using std::vector;

void push_back(std::vector<t>& vec, t& t);

void foo()
{
    std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "I'm weak!";
}

int main() {
	vector<t> vec;
	t child(foo);
	push_back(vec, child);

	std::cout << child.get_id() << std::endl;
	vec[0].join();
}