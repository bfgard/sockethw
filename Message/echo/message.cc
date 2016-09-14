#include "message.h"

Message::Message(string subject, string message) {
	this->subject = subject;
	this->message = message;
}

string
Message::get_subject() {
	return subject;
}

string
Message::get_message() {
	return message;
}

