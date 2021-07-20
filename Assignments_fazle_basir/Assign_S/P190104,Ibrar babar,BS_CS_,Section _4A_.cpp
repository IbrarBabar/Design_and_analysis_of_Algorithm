#include <iostream>
using namespace std;
class DIVIDE_CONQURE_Multiplication
{
    private:
        int num1;
        int num2;
        int ans;
        int count;
        public:
        DIVIDE_CONQURE_Multiplication()
        {
            cout<<"Default constructor "<<endl;
            num1=0;
            num2=0;
            ans=0;
            count=0;
        }
void input()
{
    cout<<"Enter 1st number :: ";
    cin>>num1;
    cout<<"Enter 2nd number :: ";
    cin>>num2;
}
int solution()
{  
        // check for set bit and left 
        // shift n, count times
     while (num2)
    {
        if (num2 % 2 == 1)   // check for set bit and left,  shift n, count times           
            ans += num1 << count;

        count++;   // increment of place value (count)
        num2 /= 2;
    }
    return ans;
}

};
int main()
{
    DIVIDE_CONQURE_Multiplication a;
    a.input();
    cout<<"ANSWER = "<<a.solution()<<endl;
    cout<<"-------------------------------"<<endl;
    return 0;
}
