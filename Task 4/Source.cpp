#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Task{
	string txt;
	int status;
} list[1000];

fstream tasklist;
fstream completedlist;

int index = -1;

void file();
void restore();
void viewTask();
void addTask();
void deleteTask();
void changeStatus();

int main() {
	restore();
	char c = '\0';
	cout << "\t\tTo Do List";
	do {
		file();
		cout << "\nTo view all your tasks, press 1";
		cout << "\nTo add a tasks, press 2";
		cout << "\nTo mark a Task as completed, press 3";
		cout << "\nTo remove a Task, press 4";
		cout << "\nWhat would you like to do : ";
		int input = 0;
		cin >> input;
		if (input == 1) {
			viewTask();
		}
		else if (input == 2) {
			addTask();
		}
		else if (input == 3) {
			changeStatus();
		}
		else if(input == 4) {
			deleteTask();
		}

		cout << "\nWould you like to Continue the Program or close it? Press Y to Continue: ";
		cin >> c;
	} while (c == 'y' || c == 'Y');
	file();
	return 0;
}

void viewTask(){
	cout << "\n\n\t\tYour Tasks are:";
	for (int i = 0; i <= index; i++) {
		cout << "\nTask " << i + 1 << " : " << list[i].txt;
		cout << "\nStatus : ";
		if (list[i].status == 0) {
			cout << "Pending.";
		}
		else {
			cout << "Completed.";
		}
	}
}


void addTask() {
	index++;
	cout << "Enter your Task: ";
	getline(cin >> ws, list[index].txt);
	list[index].status = 0;
}

void deleteTask() {
	int x;
	cout << "Which Task would you like to delete : ";
	cin >> x;
	if (x < 1 || x > index + 1) {
		cout << "Invalid task number.\n";
		return;
	}
	for (int i = x-1; i < index ; i++) {
		list[i].txt = list[i + 1].txt;
		list[i].status = list[i + 1].status;
	}
	index--;
}

void changeStatus() {
	int x;
	cout << "Which Task would you like to mark as completed : ";
	cin >> x;
	list[x - 1].status = 1;
}

void restore() {
	ifstream tasklist("tasklist.txt", ios::in);
	if (!tasklist) {
		cout << "No tasks found.\n";
		return;
	}
	string txt;
	int i = -1;
	while (getline(tasklist >> ws, txt)) {
		i++;
		list[i].txt = txt;
	}
	index = i;
	
	tasklist.close();
	ifstream completedlist("completedlist.txt", ios::in);
	int status, j = -1;
	while (completedlist >> status) {
		j++;
		list[j].status = status;
	}
	
	completedlist.close();

}

void file() {
	ofstream tasklist("tasklist.txt", ios::out);
	ofstream completedlist("completedlist.txt", ios::out);
	for (int i = 0; i <= index; i++) {
		tasklist << list[i].txt << endl;
		completedlist << list[i].status << " ";
	}
	tasklist.close();
	completedlist.close();
}