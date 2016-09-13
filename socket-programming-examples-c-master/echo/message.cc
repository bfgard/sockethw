#include "message.h"

Message::Messsage(string c, string f, int l) {
    this->command = c;
    this->name = f;
    this->length = l;
}

bool
Message::needed() {
    if (length > 0)
	return true;
    else
	return false;
}
