#include "user.h"

User::User(string name) {
	this->name = name;
}

string
User::get_message(int index){
	return messages[index];
}

