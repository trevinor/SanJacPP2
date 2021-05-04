#ifndef CLIENT INFO_H
#define CLIENT INFO_H


class ClientInformation
{
    public:

        string getClientInfo () {return c_specinfo;}
        void AddClient(string &cName, string &cAddress, string &cPhoneNum, string &cSalesToDate);
        void ClientInfo();

    private:
        string cName;
//      string cMiddleName;
//      string CLastName;
        string cAddress;
        string cPhoneNum;
        string cSalesToDate;
        string newClient;
        string c_specinfo;
};

#endif // CLIENT INFO_H
