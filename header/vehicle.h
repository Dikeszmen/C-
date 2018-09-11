#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED
#include <iostream>
#include <stdint.h>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <ctime>
#include <queue>
#define PI 3.141593
#define MAX(a,b) ((a>b)?(a):(b))
#include <string>
#define nemnyert() (cout<<"menj a picsaba"<<endl)

using namespace std;

template <class T>
T returnVector(vector<T> &vec)
{
    return sizeof(T);
}

typedef struct tnode
{
        string word;
        int rang;
        struct tnode* left;
        struct tnode* right;
}Tnode;

typedef struct datum
{
    uint16_t year;
    uint16_t months :4;
    uint16_t days :5;

}Datum;

typedef enum dateline
{
    year,
    month,
    day
}DateLine;

class car
{
public:
    int age;
    void giveValue(int);
    int getValue(void);
    car();
private:
    int realAge;

};

class motor:public car
{
public:
    int modif1(int);
    void inheritGetfunc(int);
    int inheritRetOriginalVal(int);
private:
    int modif2(void);
};

class plane:public motor
{
private:
    uint16_t rotor :10;
    uint16_t tank :10;
    uint16_t planeSize :10;
    void initPlane(void*,int,int);
public:
    plane(int,int,int);
    void planeDetails();

};

class lista
{

private:

    void initLista();
    Tnode Head;
public:
    int valami;
    lista();
    //~lista();
    Tnode* HeadAddress();
    Tnode* newElementToRight(string,int);
    Tnode* newElementToLeft(string,int);
    //void freeBranch(int );
    void freeAllTheTree(Tnode* node);
    void printBranches();
    void dinamikusKasztolas(void*);
};

namespace VALAMI
{

class dateclass
{
    public:
        int Operator;
        char *pointer;
        dateclass(Datum *date);
        void Read(Datum *date);
        void printImpYMD();
        ~dateclass();

    private:
        Datum Date;
        void printDate(Datum *date);
        void readDate(Datum *date);
        void impYMD();
};

int sampleFinder(string ,string );
}
namespace VMI=VALAMI;

//int sampleFinder(string ,string );
int sampleFinderByCharSample(string ,char*);
void learning_vectors();
int getCarAge(car CAR);
#endif // VEHICLE_H_INCLUDED
