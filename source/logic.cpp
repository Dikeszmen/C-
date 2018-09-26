#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <string.h>
#include <vector>
#define TRUE 1

using namespace std;

void nameNumberDou()
{
    int x=0;
	string incoming;
	string names;
	getline(cin,incoming);

	while(TRUE)
	{
            x+=stoi(incoming);
			//else if()
			if(incoming.find(" ")!=incoming.npos)
			    incoming=incoming.assign(incoming,incoming.find(" ")+1,incoming.length()-incoming.find(" "));
			else
				break;

	}
    cout<<x<<endl;
}

char *CAT(char *str1,char const *str2)
{
        static char *p=nullptr;
        int len1=strlen(str1);
        int len2=strlen(str2);
        int i=0;
        int j=0;
        try
        {
			p=new char [len1+len2+1];
        }
        catch(bad_alloc)
        {
            perror("no memory\n");
            return nullptr;
        }
        while(len1--)
           {
               p[i]=str1[i];
               i++;
           }
        while(len2--)
           p[i++]=str2[j++];
        p[i]='\0';
        return p;

}

void hossz(char *str1)
{
    int i=0;
    while(str1[i++])
        ;
        i--;
    cout<<i<<endl;
}


void funcp(int a,char b)
{
    cout<<"funcp called by pointer\t"<<a<<"\t"<<b<<endl;
}


void errorprinter(string s)
{
    cout<<s<<endl;
}

void (*EP)(string);
char* (*PCAT)(char*,const char*);

void NOOB()
{
    char  bela[]="BELA";
    char const smedve[]="SMEDVE";
    char * p=nullptr;
    EP=&errorprinter;
    EP("HIBA");
	PCAT=CAT;
	p=PCAT(bela,smedve);
    cout<<p<<endl;
}


void manipulateVec(vector<int> &vec)
{
    vec.push_back(5);
}

vector<int> retVect(vector<int> &vec)
{
    if(!vec.size())
        {
            vec.resize(1);
            return vec;
        }

    vec.resize(100,33);
    return vec;
}


tricky_series::tricky_series()
{
    n_element_of_palindromes=1;

}

tricky_series::tricky_series(int n)
{
    this->n_element_of_palindromes=n;
}

void tricky_series::argGiven(int n)
{
    n_element_of_palindromes=n;


}

void tricky_series::isPalindrome()
{
    if(n_element_of_palindromes>MAXN || !n_element_of_palindromes)
        throw "palindrome error";
    int i=0;
    cout<<"now type the string(s) which(es) have to check to palindrome or not!"<<endl;
    palindromes.resize(n_element_of_palindromes);
    for(; i<n_element_of_palindromes; i++)
        getline(cin,palindromes[i]);
    i=0;
    for(;i<n_element_of_palindromes;i++)
    {
        if(palindromes[i]==string(palindromes[i].rbegin(),palindromes[i].rend()))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    for(string x:palindromes)
        cout<<x<<endl;

}

void tricky_series::maxvalueOfTwoNumbers()
{
    int i,j;
    i=j=0;
    cin>>i;
    if(i<1 || i>100)
        throw "Testcase number error";

        stringToInt(i);
        cout<<"stringToINT is called"<<endl;


    j=0;
    while(j<i+1)
    {
        cout<<ab[j]<<" ";
        j++;
        cout<<ab[j]<<" ";
        j++;
    }

}


void tricky_series::convertListToVector()
{

    list<string> listpatterns;

    listpatterns.push_back("first");
    listpatterns.push_back("second");
    listpatterns.push_back("third");
    listpatterns.push_back("fourth");
    palindromes.assign(listpatterns.begin(),listpatterns.end());

    for(string x : palindromes)
        cout<<x<<endl;

}

void tricky_series::stringToInt(int i)
{

    cout<<"fukk"<<endl;
    while(i)
    {
        getline(cin,s);
        istringstream is(s);
        ab.assign((istream_iterator<int>(is)),istream_iterator<int>());
        i--;

    }


}
