#include "../header/vehicle.h"
#include "../header/logic.h"

using namespace std;

car::car()
{
    realAge=100;
    cout<<"construct working again"<<realAge<<endl;
}


 void car::giveValue(int sum)
{
    realAge=sum;
}

int car::getValue(void)
{
    return realAge;
}


 int motor::modif1(int val)
{
    return val*val+modif2();
}


void motor::inheritGetfunc(int sum)
{

    age=sum;
    cout<<age<<endl;
}


int motor::inheritRetOriginalVal(int sum)
{
    if(sum)
    {
        giveValue(sum);
        return getValue();
    }
    else
        return 0;
}


inline int motor::modif2(void)
{
    return getValue()*2;
}

int VALAMI::sampleFinder(string s1,string s2)
{
    int counter=0;
    for(; s1.find(s2)!=s1.npos; counter++)
        s1.assign(s1,s1.find(s2)+1,s1.length()-s1.find(s2));
    return counter;
}

int sampleFinderByCharSample(string s1,char *sample)
{
    int counter=0;
    char *temp,*p;
    try
    {
        temp=new char[s1.length()];
    }
    catch(bad_alloc & ba)
    {
        cout<<ba.what()<<endl;
        return -1;
    }
    s1.copy(temp,s1.length(),0);
    temp[s1.length()]='\0';
    p=temp;
    for(; (temp=strstr(temp,sample))!=nullptr; counter++,temp++)
        ;
    delete[] p;
    return counter;

}
VALAMI::dateclass::dateclass(Datum *date)
{
    pointer=new char[10];
    this->year=date->year;
    this->months=date->months;
    this->days=date->days;
    cout<<"Size of Date:"<<sizeof(*date)<<endl;
    printDate(date);
}
VALAMI::dateclass::~dateclass()
{
    delete[] pointer;
}

void VALAMI::dateclass::printDate(Datum *date)
{
    string asd("loloke");
    asd.copy(pointer,asd.length(),0);
    pointer[asd.length()]='\0';
    cout<<pointer<<" Printing date:"<<endl;
    cout<<date->year<<":"<<date->months<<":"<<date->days<<endl;
}
void VALAMI::dateclass::readDate(Datum *date)
{
    if(!date)
        throw "nullpointer at readDate()";
    cout<<"correct form yyyy:mm::dd"<<endl;
    string tempstring;
    DateLine line=year;
    char *temp,*p;
    char *token;
    int now=1;
    getline(cin,tempstring);
    if(!tempstring.length())
        now=0;
    try
    {
        temp= new char[tempstring.length()+1];

    }
    catch(bad_alloc &ba)
    {
        cerr<<ba.what()<<endl;
        return;
    }

    tempstring.copy(temp,tempstring.length(),0);
    temp[tempstring.length()]='\0';
    p=temp;
    token=strtok(temp,":");
    while(token)
    {


        switch (line)
        {
        case year:
            Date.year=atoi(token);
            line=month;
            token=strtok(nullptr,":");
            continue;

        case month:
            if(atoi(token)>12 || atoi(token)==0)
                cout<<"you are a dumb ass hoe!"<<endl;

            else
                Date.months=atoi(token);
            line=day;
            token=strtok(nullptr,":");
            continue;

        case day:
            if(atoi(token)>31 || atoi(token)==0)
                cout<<"you are a dumb ass hoe!"<<endl;
            else
                Date.days=atoi(token);
            token=strtok(nullptr,":");
            continue;

        default:
            break;
        }

    }
    delete[] p;
    if(Date.months==2 && Date.days>29 )
    {
        cout<<"wrong date!"<<endl;
        return;
    }
    if((Date.months==2 && Date.days==29)&&(!(Date.year%4)))
        cout<<"szokoev"<<endl;
    if(Date.year==0 || Date.months==0 || Date.days==0 || !now)
        cout<<__DATE__<<endl;
    else
        cout<<Date.year<<":"<<Date.months<<":"<<Date.days<<endl;

}
void VALAMI::dateclass::impYMD()
{
    if  (!(Date.year && Date.months && Date.days))
    {
        cout<<"Wrong dates"<<Date.year<<Date.months<<Date.days<<endl;
        return;
    }
    Date.year++;
    if((++Date.months)>12)
        Date.months=1;
    if( Date.days>31 ||(++Date.days)==0)            //32 can not be due to bitmapping uint16_t days: 5
        Date.days=1;
    cout<<Date.year<<":"<<Date.months<<":"<<Date.days<<endl;
}
void VALAMI::dateclass::printImpYMD()
{
    impYMD();
}


void VMI::dateclass::Read(Datum *date)
{
    try
    {
        readDate(date);//date
    }
    catch(const char* msg)
    {
        cout<<msg<<endl;
        return;
    }

}
plane::plane(int r,int t,int pS)
{

    initPlane(&r,t,pS);
}


void plane::initPlane(void *r,int t,int pS)
{
    rotor=*static_cast<int*>(r);
    tank=t;
    planeSize=pS;
}
void plane::planeDetails()
{
    cout<<"Number of rotor="<<rotor<<"\nNumber of tank="<<tank<<"\nPlane Size="<<planeSize<<endl;
}


void learning_vectors()
{
    vector<int> second(4,100);
    vector<int> third(second);
    vector<char> fourth(1);
    vector<int> first;
    manipulateVec(first);
    cout<<"Vector func called !"<<first.size()<<" "<<first[0]<<endl;
    vector<int> tempvec(10,2);
    tempvec=retVect(tempvec);
    cout<<"ret vec with what?\n:"<<tempvec.size()<<endl;
    queue<int> q1;

    for(vector<int>::iterator it=second.begin(); it!=second.end(); ++it)
        cout<<*it<<endl;

    cout <<"YOLO"<<returnVector(first)<<"now fourth  "<<returnVector(fourth)<<endl;
    // for(vector<int>::iterator it=first.begin();it!=first.end();++it)
    //   cout<<*it<<endl;

    first.resize(10,1);
    //const int endOfFirst=first.end();
    for(vector<int>::iterator it=first.begin(); it!=first.end(); ++it)
        cout<<"and now\t"<<*it<<endl;

    first.resize(5,5);
    /* try
    {
    	cout<<first[6]<<endl;;
    }
    catch("array over flow")
    {
    	cout << "overflow"<<endl;
    }*/
    q1.push(12);
    q1.push(31);
    q1.push(41);
    q1.push(51);
    cout << q1.back()<<"\nAnd the size:"<<q1.size()<<endl;
    /*int temp=q1.back();
    q1.back() =q1.front();
    q1.front()=temp;
    cout << q1.back()<<"\t"<<q1.front()<<endl;*/

    while(!q1.empty())
    {
        cout << q1.front()<<endl;
        q1.pop();
    }
}


void lista::initLista()
{
    Head.word=("head");
    Head.rang=0;
    Head.right=nullptr;
    Head.left=nullptr;
}

lista::lista()
{
    initLista();
}


Tnode* lista::newElementToRight(string name,int rang)
{
    Tnode *rElement,*temp;
    temp=&Head;
    int found=0;
    do
    {
        if(temp->rang==rang)
        {
            found++;
            break;
        }
        temp=temp->right;
    }
    while(temp);
    if(!found)
        return nullptr;
    else
    {
        try
        {
            rElement=new Tnode;
        }
        catch(bad_alloc &ba)
        {
            perror("memory allocate:");
            return nullptr;
        }
    }
    rElement->word=name;
    rElement->rang=rang+1;
    rElement->left=nullptr;
    rElement->right=nullptr;
    temp->right=rElement;
    return rElement;

}

Tnode* lista::newElementToLeft(string name,int rang)
{
    Tnode *lElement,*temp;
    temp=&Head;
    int found=0;
    do
    {
        if(temp->rang==rang)
        {
            found++;
            break;
        }
        temp=temp->left;
    }
    while(temp);
    if(!found)
        return nullptr;
    else
    {
        try
        {
            lElement=new Tnode;

        }
        catch(bad_alloc &ba)
        {
            perror("memory allocate:");
            return nullptr;
        }
    }
    lElement->word=name;
    lElement->rang=rang+1;
    lElement->left=nullptr;
    lElement->right=nullptr;
    temp->left=lElement;
    return lElement;
}
Tnode* lista::HeadAddress()
{
    return &Head;
}


void lista::freeAllTheTree(Tnode* node)
{

    if(!node)
        return;
    freeAllTheTree(node->right);
    freeAllTheTree(node->left);
    if(node!=&Head)
    {
        delete node;
        cout<<"every node is deleted"<<endl;
        node=nullptr;
    }
}

void lista::dinamikusKasztolas(void *p)
{
    valami=*static_cast<int*>(p);
}

void lista::printBranches()
{
    Tnode *tempHead;
    tempHead=&Head;
    //Left side
	cout<<"First print all members of the left side"<<endl;
        cout<<"parent name "<<tempHead->word<<endl;
    while(tempHead)
    {
        if(!(tempHead->left))
        {
			cout<<"no left child..."<<endl;
			break;
		}
        else
        {
            cout<<"Left child name: "<<tempHead->left->word<<endl;
            cout<<"Left child rang: "<<tempHead->left->rang<<endl;
			tempHead=tempHead->left;
        }

    }
    cout<<"Then print all members of the right side"<<endl;
	tempHead=&Head;
	while(tempHead)
    {
        if(!(tempHead->right))
        {
			cout<<"no right child..."<<endl;
			break;
		}
        else
        {
            cout<<"Right child name: "<<tempHead->right->word<<endl;
            cout<<"Right child rang: "<<tempHead->right->rang<<endl;
			tempHead=tempHead->right;
        }

    }
}

int getCarAge(car CAR)
{
    return CAR.age;
}
