#include <iostream>
#include <thread>
#include <unistd.h>
#include <stdlib.h>

using namespace std;

void task1() { 
	cout<<"task1"<<endl;
}

void task2() { 
	sleep(10);
	cout<<"task2"<<endl;
}

int main (int argc, char ** argv) {
    thread thread_1 = thread(task1);
    thread thread_2 = thread(task2);

	cout << "In the middle \n" << endl;
    // do other stuff
    thread_2.join();
    thread_1.join();
    return 0;
}

