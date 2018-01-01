#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include "sms.h"

using namespace std;

vector<string> readFileForSMS(string filename){

    //storage for unparsed sms
    vector<string> sms;

    ifstream file(filename);

    string buff ="";
    string m ="";

    //while file is good read until first sms tag
    //store sms tag and contents;
    while(file.good()){
        std::getline(file,buff);
        if (buff.find("<sms protocol=\"0\"") != std::string::npos) {
            m= buff;
            while(file.good()){
                m+=buff;
                if (buff.find("/>") != std::string::npos) {
                    sms.push_back(m);
                    break;
                }
                std::getline(file,buff);
            }
        }
    }
    file.close();

    return sms;
}


int main(){

    string filename = "//home//wbedu//Projects//Playground//mvxmls//ref//xmls//archivedsms.xml";
    vector <string> sms = readFileForSMS(filename);

    for(string &m : sms){
        cout << m << endl;
    }
}