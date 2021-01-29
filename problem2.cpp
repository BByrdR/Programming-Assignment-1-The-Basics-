#include <iostream>
using namespace std;

int main(){
int maxnumber;
int number;
int diff;

cout << "What is the maximum room capacity? ";
cin >> maxnumber;
cout << "How many people are attending the meeting? ";
cin >> number;

if(number>maxnumber){
diff=number-maxnumber;
cout << "Maximum capacity has been reached according to fire regulations. " << diff << " people should be excluded.";
}

else if(number<=maxnumber){
diff=maxnumber-number;
cout << "The capacity for the room is not full yet. " << diff << " more people can enter.";
}

return 0;
}
