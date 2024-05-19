#include <iostream>
using namespace std;

int main()
{
    int examScores[10];
    int sum = 0;
    cout << "enter examScores" << endl;
    for(int i = 0; i < 10; i++){
        cin >> examScores[i];
        sum += examScores[i];
    }
    float avg=sum/10;
    int max=examScores[0];
    int min=examScores[0];
    int abv_avg=0;
    for(int i = 0; i < 10; i++){
        if(examScores[i]>max)
            max=examScores[i];
        if(examScores[i]<min)
            min=examScores[i];
        if(examScores[i]>=avg)
            abv_avg++;
    }
    cout <<"Average exam score is"<<avg<<endl;;
    cout<<"Highest exam score is"<<max<<endl;
    cout <<"Lowest exam score is"<<min<<endl;
    cout <<"Number of students with an exam score above the average is "<<abv_avg<<endl;
    cout <<"Number of students with an exam score below the average is "<<10-abv_avg<<endl;
}
