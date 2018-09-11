#ifndef LOGIC_H_INCLUDED
#define LOGIC_H_INCLUDED
#include "vehicle.h"
#include <vector>

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
void nameNumberDou();

char *CAT(char *str1,char const *str2);

void hossz(char *str1);

void funcp(int a,char b);

void errorprinter(string s);

void NOOB();


void manipulateVec(vector<int>&);

vector<int> retVect(vector<int>&);

#endif // LOGIC_H_INCLUDED
