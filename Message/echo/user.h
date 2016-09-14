#pragma once

#include "message.h"
#include <vector>

using namespace std;

class User {

   public:
	User(string);
	string get_message(int);

   private:
	string name;
	vector<Message> messages;	
};
 
