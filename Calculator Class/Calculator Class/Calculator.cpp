
#include <iostream>
using namespace std;
enum class Operations{
    add,
    Subtract,
    Multiply,
    Divide,
    None
};
class Calculator{
private:
    double number;
    Operations currentOperation;
public:
    Calculator() : number(0), currentOperation(Operations::None){}
    void SetNumber(double num){
        switch (currentOperation)
        {
            case Operations::None:
                number = num;
                break;
            case Operations::add:
                number +=num;
                break;
            case Operations::Subtract:
                number -= num;
                break;
            case Operations::Multiply:
                number *= num;
                break;
                
            case Operations::Divide:
                number /=num;
                break;
                default:
                break;
        }
    }
    void SetOperation (Operations op){
        currentOperation = op; //setting the current operation
    }
    double getNumber(){ //to get the correct number after the operation
        return number;}
    void clear(){
        number = 0; //so we reset the number and can start again after.
        currentOperation = Operations::None; //this resets the operation
    }
  
    
    
};

int main(){
    
    Calculator calculator;
    calculator.SetNumber(5);
    calculator.SetOperation(Operations::add);
    calculator.SetNumber(3); //this should be 8
    printf("%f",calculator.getNumber());
    calculator.clear(); // Reset calculator
    calculator.SetNumber(2); // Set new initial number
    calculator.SetOperation(Operations::Multiply); // Set operation to Multiply
    calculator.SetNumber(3); // Perform multiplication
    calculator.SetOperation(Operations::Subtract); // Set operation to Subtract
    calculator.SetNumber(1); // Perform subtraction, should output 5
    printf("%f",calculator.getNumber());
    return 0;
};

