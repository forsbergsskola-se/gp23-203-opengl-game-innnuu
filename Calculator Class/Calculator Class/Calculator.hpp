
#ifndef Calculator_hpp
#define Calculator_hpp

#include <stdio.h>
#endif /* Calculator_hpp */


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
        }
    }

    
};
