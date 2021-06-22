// TYPECASTING: HOLLYWOOD COULD TAKE LESSONS FROM C

/*
C typecast temporarily changes the data type of one variable to another.
Here is the format of a typecast:

    (dataType)value

The dataType can be any C data type, such as int or float.

The following converts age to a float value of 6.0 :
    (float)age;

If you were using age in an expression with other floats, you should typecast age to float to maintain consistency
in the expression.

You’ll have fewer problems if you explicitly typecast all variables and literals in an expression to the same data type.

    salaryBonus = salary * (float)age / 150.0;

age does not change to a floating-point variable—age is changed only temporarily for this one calculation. Everywhere
in the program that age is not explicitly typecast, it is still an int variable.

If you find yourself typecasting the same variable to a different data type throughout a program, you might have made
the variable the wrong type to begin with.

You can typecast an entire expression:
    value = (float)(number - 10 * yrsService);

The parentheses around the expression keep the typecast from casting only the variable number. C does perform some
automatic typecasting. If value is defined as a float, C typecasts the preceding expression for you before storing
the result in value. Nevertheless, if you want to clarify all expressions and not depend on automatic typecasting,
go ahead and typecast your expressions. */
