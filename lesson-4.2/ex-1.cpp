#include<iostream>
class Age{
public:
    virtual int GetAge() = 0;

    void SetInitialYear(int i){
        initial_year = i;
    }

    void SetEndYear(int e){
        end_year = e;
    }

    protected:
    int initial_year;
    int end_year;
};

class HowManyYears : public Age{
    public:
    int GetAge() {
        return(end_year - initial_year);
    }
};

class HowManyDays : public Age{
public:
    int GetAge(){
        return((end_year*365) - (initial_year*365));
    }
}
int main()
{
    HowManyYears y;
    HowManyDays d;
    y.SetInitialYear(1992);
    y.SetEndYear(2333);
    std::cout<<"Years total: "<< y.GetAge() <<endl;

}