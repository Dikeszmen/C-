#ifndef ONE_H_INCLUDED
#define ONE_H_INCLUDED

class fruits
{
    private:
        int depraved;           // romlott
        int immature;           // éretlen
        int ripe;               // érett
        int hurt;
    public:
        int apple;
        int pear;
        int mellon;
        int banana;

        fruits();


        ~fruits();
};

class process
{
    private:
        int for_cash;
        int for_child;
        int for_brandy;
        int for_forage;     //takarmány
    public:
        int raw;            //nyers
        int cooked;
        process();
        int just_one_kind(int &somefruit);
        int mixed_some_kind();
        int all_of_them();
        ~process();
};

class amount
{

};

template <typename diff>
diff Max_Diff();
#endif // ONE_H_INCLUDED
