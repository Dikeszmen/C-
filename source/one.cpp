#include <iostream>
#include "../header/one.h"

fruits::fruits()
{
    this->depraved=0;
    this->immature=0;
    this->ripe=0;
}

process::process()
{
    this->for_brandy=0;
    this->for_cash=0;
    this->for_child=0;
    this->for_forage=0;
}
/*
int process::just_one_kind(int &somefruit,int processing_mode)
{
    if(!somefruit)
    {
         cout<<"no fruit"<<endl;
         return 1;
    }
    if(processing_mode==)
}
*/
template <typename diff>
diff Max_Diff(diff x, diff y)
{
    return (x>y)? x-y:y-x;
}
