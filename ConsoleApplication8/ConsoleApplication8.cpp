#include <iostream>
#include <cassert>
#include <queue>
#include <Windows.h>
using namespace std;

class Worker {
	string FullName;
	string speciality;
	int age;
	int salary;
public:
	Worker() {
		string FullName = " ";
		string speciality = " ";
		int age = 0;
		int salary = 0;
	}

	Worker(string FullName, string speciality, int age, int salary) {
		this->FullName = FullName;
		this->speciality = speciality;
		this->age = age;
		this->salary = salary;
	}

	string GetFullName() { return FullName; }

	string GetSpeciality() { return speciality; }

	int GetAge() { return age; }

	int GetSalary() { return salary; }

};

class Printer {
private:
	queue<Worker> workers;
public:
	void AddWorker(const Worker& worker) {
		workers.push(worker);
	}
	void Print() {
		while (!workers.empty()) {
			Worker& worker = workers.front();
			cout << "Full Name: " << worker.GetFullName() << endl;
			Sleep(1500);
			cout << "Age: " << worker.GetAge() << endl;
			Sleep(1500);
			cout << "Salary: " << worker.GetSalary() << endl;
			Sleep(1500);
			cout << "Speciality: " << worker.GetSpeciality() << endl;
			Sleep(1500);
			cout << "--------------" << endl;
			workers.pop();
		}
	}
};

void main() {
	Printer printer;
	printer.AddWorker(Worker("Murad", "Developer", 22, 3500));
	printer.AddWorker(Worker("Behruz", "Developer", 20, 3500));

	printer.Print();

}