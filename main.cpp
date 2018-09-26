#include <iostream>
#include <iostream>
#include <string>
#include <string.h>
#include "header/vehicle.h"
#include "header/logic.h"

using namespace std;

int main(int argc,char *argv[])
{

    if(argc==2)
    {
        string codedstring;
        char *temp,*codedchar;
        cout<<"gimme a string!"<<endl;
        cin>>codedstring;
        cout<<"Coding is in progress..."<<endl;
        temp=new char[codedstring.length()+1];
        codedstring.copy(temp,codedstring.length(),0);
        codedchar=new char[strlen(argv[1])+1];
        strcpy(codedchar,argv[1]);
        temp[codedstring.length()]='\0';
        unsigned int j=0;
        for(unsigned int i=0;i<codedstring.length();i++)
        {
            if(j==strlen(codedchar))
                j=0;
            temp[i]=temp[i] ^ argv[1][j];
        }
        cout<<temp<<endl;
        delete[] temp;
        return 0;
    }

    cout << "Hello world!"<< endl;
    Datum Date;
    Date.year=0;
    Date.months=0;
    Date.days=0;
    VALAMI::dateclass usedDate(&Date);
    int tank=40;
    int rotor=4;
    int pSize=200;
    plane Boing(rotor,tank,pSize);
    string sample("kutafutta");
    string suti("t");
    char tomb[]="tak";
    char barat[]="barat";
    char *pasdasd=nullptr;
    int i=0;
    lista Fa;
    Tnode* tempR,*tempL;
    NOOB();
    nemnyert();
    //void (*fun_pointer)(int,char)=&funcp;
    cout<<"Fa.valami="<<Fa.valami<<endl;
    car kocsi,autogepjarmu;
    motor bike;
    kocsi.age=10;
    cout<<"getCarAge="<<getCarAge(kocsi)<<endl;
    cout<<bike.modif1(kocsi.age)<<endl;
    kocsi.giveValue(kocsi.age*2);
    cout<<kocsi.getValue()<<endl;
    bike.inheritGetfunc(kocsi.getValue());
    cout<<"inherit\t"<<bike.inheritRetOriginalVal(54)<<endl;
    i=VALAMI::sampleFinder(sample,suti);
    cout<<i<<endl;

    i=sampleFinderByCharSample(sample,tomb);
    cout<<i<<endl;
    cout<<bike.modif1(bike.getValue())<<endl;
    //cout<<bike.modif2(kocsi.realAge)<<endl;
   // usedDate.printDate(&Date);
    autogepjarmu=kocsi;
    cout<<"autogepjarmu.age="<<autogepjarmu.age<<endl;
    usedDate.Read(&Date);
    usedDate.printImpYMD();
    usedDate.~dateclass();
    Boing.planeDetails();
    learning_vectors();
    i=kocsi.getValue();
    //nameNumberDou();
    pasdasd=CAT(tomb,barat);
    if(!pasdasd)
        return -1;
    cout<<pasdasd<<endl;
    delete[] pasdasd;

   /* hossz(barat);
    (*fun_pointer)(10,'c');
    f();*/
    tempR=Fa.newElementToRight("foci",0);
    tempL=Fa.newElementToLeft("kosar",0);
    tempR=Fa.newElementToRight("labda",1);
    tempL=Fa.newElementToLeft("labda",1);
   // tempL=Fa.newElementToLeft("jatekos",2);

    Fa.printBranches();
    //Fa.freeAllTheTree(Fa.HeadAddress());

    cout<<tempR->word<<"\t"<<tempL->word<<endl;



    return 0;
}

    /*
    cout << "Hello, this is the fruits project!" << endl;
    fruits FruitObj;
    process ProcessObj;
    int i=0;
    while(i++<10)
    {
        FruitObj.apple=i;
        FruitObj.banana=i*i;
        FruitObj.mellon=FruitObj.banana-i;
        FruitObj.pear=FruitObj.apple+FruitObj.banana+FruitObj.mellon;
    }
*/
