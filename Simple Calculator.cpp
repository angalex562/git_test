#include <iostream>
using namespace std;

char getOperation(){
    char entered = 'F';
    bool correctSyntax = false;
    while(correctSyntax == false) {
        cout << "enter operation: " << endl;
        cin >> entered;
        if (entered == '+' ||entered == '-' ||entered == '*' ||entered == '/' ||entered == '%'){
            correctSyntax = true;
            return entered;
        }
        cout << entered << "\n";
        cout << "Try again\n";
    }
    cout << "out of bounds";
    return 'F';
}

void doMath(float first, float second, char math){
    float answer = 0.0;
    switch(math){
    case '+':
        answer = first + second;
        cout << first << " plus " << second << " is equal to " << answer;
        break;
    case '-':
        answer = first - second;
        cout << first << " minus " << second << " is equal to " << answer;
        break;
    case '*':
        answer = first * second;
        cout << first << " multiplied by " << second << " is equal to " << answer;
        break;
    case '/':
        answer = first / second;
        cout << first << " divided by " << second << " is equal to " << answer;
        break;
    case '%':
        answer = first / second;
        cout << first << " divided by " << second << " has a remainder of " << answer;
        break;
    default:
        cout << "Something went wrong....";
        break;
    }
}

int main(){
    float num1 = 0;
    float num2 = 0;
    char operation = 'F';
    cout << "Enter in your first number: " << endl;
    cin >> num1;
    operation = getOperation();
    cout << "enter your second number: " << endl;
    cin >> num2;
    doMath(num1, num2, operation);
    return 0;
}
