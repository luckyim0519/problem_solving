#include <iostream>
#include <string>
template<typename T>
class Test {
    T val;
public:
    Test(T v) : val(v) {};
    T GetVal();
   virtual void PrintInfo()
    {
        std::cout << "parent class member variable: " << val << std::endl;
    }
};

template<typename T>
T Test<T>::GetVal() {
    return val;
}

template<typename T1, typename T2>
class Test2 : public Test<T1> {
    T2 val2;
public:
    Test2(T1 v1, T2 v2) : Test<T1>(v1), val2(v2) {};
    virtual void PrintInfo()
    {
        std::cout << "parent class" << std::endl;
        Test<T1>::PrintInfo();
        std::cout << "child class member variable: " << val2 << std::endl;
    }

};
//class template
int main()
{
    Test<int> t_int(10);
    Test<std::string> t_str("Hello");

    t_int.PrintInfo();
    t_str.PrintInfo();

    Test2<int, double> tt(10, 11.1);
    tt.PrintInfo();

    
}
