#ifndef LOGIC_H_INCLUDED
#define LOGIC_H_INCLUDED
#include "vehicle.h"
#include <vector>
#include <list>
#define MAXN 100
typedef struct bus
{
    int can;
    int lin;
    int flexray;
}BUS;
/*
class klaviatura
{
private:
    Backend vezetek;



}FRONTEND;

class backend
{

    BUS busz;


}Backend;

*/

typedef enum rangs
{
    operating,
    student,
    middle_boss,
    boss,
    admin

}Rang;

class tricky_series
{
    //int tomb[]={7,15,32,67,138,281};
    int n_element_of_palindromes;
    vector<string> palindromes;
    vector <int> ab;
    vector<string> sab;
    list<string> listForString;
    string s;

public:
    tricky_series();
    void argGiven(int n);
    tricky_series(int n);
    void convertListToVector();
    void stringToInt(int i);
    void maxvalueOfTwoNumbers();
    //int find_N_elementsOfSeries(int Nth);
    void isPalindrome();
};

class initializing
{
    void syslogInit();
    int serialInit();
};


class user
{
    int password;
    Rang rangOfUser;

public:
    string name;

};

class rooms
{
    int numberOfRooms;
    int joinable;
    int setupRooms();
};


class room: public rooms
{
    int numberOfLights;


public:
    string RoomName;
};

void nameNumberDou();

char *CAT(char *str1,char const *str2);

void hossz(char *str1);

void funcp(int a,char b);

void errorprinter(string s);

void NOOB();


void manipulateVec(vector<int>&);

vector<int> retVect(vector<int>&);

#endif // LOGIC_H_INCLUDED
