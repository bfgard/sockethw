#pragma once

#include <string>
#include <iostream>

using namespace std;

class Message {

   public:
	Message(string, string);
	string get_subject();
	string get_message();	

   private:
	string subject;
	string message;
};
