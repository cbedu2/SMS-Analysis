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
    bool sent;

    SMS(){

    }
public:
    SMS(string message,long time,bool sent)
    :message(message),time(time),sent(sent){
    }

    const string getMessage(){
        return message;
    }
    const long getTime(){
        return time;
    }

    const bool getSent(){
        return sent;
    }

    void print(){

        if(sent){
            cout << "Sent: ";
        }else{
            cout << "Recieved: ";
        }

        cout << time <<  endl;
        cout << message << endl;
    }
    bool operator== (const SMS cmp)
    {
        return  message.find(cmp.message)!=std::string::npos && (cmp.time==time);
    }
    
};
