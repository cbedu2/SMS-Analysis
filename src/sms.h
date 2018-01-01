#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <map>

/*student.h*/
#include <vector>
#include <string>
#pragma once

using namespace std;

class SMS
{
private:
    long time;
    string message;
    SMS(){

    }
public:
    SMS(string message,long time)
    :message(message),time(time){
    }

    const string getMessage(){
        return message;
    }
    const long getTime(){
        return time;
    }

    bool operator== (const SMS cmp)
    {
        return  message.find(cmp.message)!=std::string::npos && (cmp.time==time);
    }
    
};
