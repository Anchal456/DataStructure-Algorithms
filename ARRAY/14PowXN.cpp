#include<iostream>
using namespace std;
double myPow(double x, int n) {
        double ans = 1.0;
        long long power = n;
        //make negative to positive
        if(power<0){
            power = -1*power;
        }
        //run algo till power becomes zero
        while(power){
            //for even power
            if(power%2){
                ans=ans*x;
                power = power-1;
            }
            //for odd power
            else{
                x=x*x;
                power=power/2;
            }
        }
       // check for negative power
        if(n<0){
            ans = (double)(1.0)/(double)(ans);
        }
        return ans;
    }
    int main() {
  cout << myPow(2, 10) << endl;
}
