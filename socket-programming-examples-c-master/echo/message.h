#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;	

class Message {
public:
    Message();
    Message(string,string,int);
    bool needed();
    string command;
    string name;
    int length;
    string value;
};
