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
#include "sms.h"

using namespace std;

class Contact
{
private:
    string name;
    long number;
    vector<long> previousNumbers;
    vector<SMS> Messages;
    Contact(){
    }
        
public:
    Contact(long number)
    :number(number),name("Unknown"){
        
    }
    Contact(string NewName)
    :number(0),name(name){
        
    }
    Contact(long newNumber, string newName):number(newNumber),name(newName){
        
    }

    const string getName(){
        return name;
    }

    const long getNumber(){
    	return number;
    }

    const long setNumber(long newNumber){

	    previousNumbers.push_back(number);
	    number = newNumber;
    }

    void addSMS(SMS newMessage){
        Messages.push_back(newMessage);
    }

    bool operator== (Contact cmp )
    {
        return  cmp.number == number;
    }
};
