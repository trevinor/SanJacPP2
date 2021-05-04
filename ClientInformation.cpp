#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>
#include <cmath>


using namespace std;


//Created a separate header name Client Info.h to be used in main.cpp
//#ifndef ClientInfo_H
//#define CLientInfo_H
//
//class ClientInformation {
//public:
//    string getClientInfo () {return c_specinfo;}
//    void AddClient(vector<string> &cName, vector<string> &cAddress, vector<string> &cSalesToDate);
//
//private:
//    string cName;
////    string cMiddleName;
////    string CLastName;
//    string cAddress;
//    string cSalesToDate;
//    string newClient;
//    string c_specinfo;
//
//};
//#endif // ClientInfo_H

//Client info portion
#include "Client Info.h"
void ClientInformation::ClientInfo() {
    ifstream file("ClientList.txt");
    vector<string> clientInfo;

    cout << "ClientList.txt Content:\n\n";
    while(!file.eof()) {
        string clientInfo = "";
        getline(file, clientInfo);
        cout << clientInfo << endl;
        }
        file.close();
}

void ClientInformation::AddClient(string &cName, string &cAddress, string &cPhoneNum, string &cSalesToDate) {

    cout << "\n\n\t\t\t\tAdd a New Client";
    cout << "\n\nEnter Client Full Name: ";
    getline(cin, cName);
    cout << "\n\nEnter Client Address: ";
    getline(cin, cAddress);
    cout << "\n\nEnter Client Phone Number";
    getline(cin, cPhoneNum);
    cout << "\n\nEnter Client Sales To Date (if applicable): ";
    getline(cin, cSalesToDate);


    string NewClientInfo;
    string formattingspace;
    //find space between end of cName and 25 and add it to the end of cName string
    for (unsigned int i = 0; i <= 25; i++) {
        ;
    }

    NewClientInfo = cName + cAddress + cSalesToDate;

    cout << cName << "'s information has been added." << endl;
}

//void ClientInformation::getClientInfo (vector<string> &Name, vector<string> &cAddress, vector<string> &cSalesToDate) {
//}

int main()
{
string name;
string address;
string salesTD;



    return 0;
}
