int main(){

double num_1, num2;
char operator;
int result;

cout << "Enter First Number: ";
cin >> num_1;
cout << "Enter Firsr Operator: ";
cin >> operator;
cout << "Enter Second Number: ";
cin >> num_2;


if(operator == '+'){
    result = num_1 + num_2;
    } else if(operator == '-'){
        result = num_1 - num_2;
    } else if(operator == '*'){
        result = num_1 * num_2:
    } else if(operator == '/'){
        result = num_1 / num_2:
    } else {
        cout << "Invalid Operator";
    }
}

cout << result:

return 0;
}