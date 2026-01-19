#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Maths number\n";
    int maths;
    cin>>maths;
    cout<<"Enter Science number\n";
    int Science;
    cin>>Science;
    cout<<"Enter English number\n";
    int English;
    cin>>English;
    cout<<"Enter Chemistry number\n";
    int Chemistry;
    cin>>Chemistry;
    cout<<"Enter Physics number\n";
    int Physics;
    cin>>Physics;
    float Average;
    Average = (maths+Science+English+Chemistry+Physics)/5;
    cout<<"Average Marks ="<<Average<<endl;
    return 0;
}