// ORDER OF OPERATORS

// C doesn’t always compute math operations in the order you expect.
// ans = 5 + 2 * 3;  /* Puts 11 in ans */
// C always computes multiplication before addition.
// As long as you know the rules, you’ll be okay.

// Order of operators table

/* For each level, if your expression has more than one operator from the same level, C resolves them using
the associativity direction listed */

/*

Level       Operator                                                                    Associativity
-----------------------------------------------------------------------------------------------------------
 1          () (parenthesis), [] (array element),                                       Left to right
            . (structure member reference)

 2          - (negative sign), ++ (increment), -- (decrement), & (adress-of),           Right to left
            * (pointer indirection), sizeof(), ! (the not operator)

 3          * (multiplication), / (division), % (modulus)                               Left to right

 4          + (addition), - (substraction)                                              Left to right

 5          < (less than), <= (less than or equal to)                                   Left to right
            > (greater than), >= (greater than or equal to)

 6          == (equal to), != (not equal to)                                            Left to right

 7          && (logical and)                                                            Left to right

 8          || (logical or)                                                             Left to right

 9          ?: (the conditional operator)                                               Right to left

 10         =, *=, /=, %=, +=, -=, (assignment operators)                               Right to left

 11         , (the comma operator)                                                      Left to right

 */


// ---------------------------------------------------------------------------------------------------------


//      ans = 5 + 2 * 4 / 2 % 3 + 10 - 3;  /* What is the answer? */

/*      5 + 2 * 4 / 2 % 3 + 10 - 3
            \   /
             \ /
          5 + 8 / 2 % 3 + 10 - 3
              \   /
               \ /
            5 + 4 % 3 + 10 - 3
                \   /
                 \ /
              5 + 1 + 10 - 3
              \   /
               \ /
                6 + 10 - 3
                \    /
                 \  /
                  16 - 3
                  \    /
                   \  /
                    13                  */


// You should compute one operator at a time and then bring the rest of the expression down for the next round.
/* Because *, /, and % all reside on the same level, they were evaluated from left to right, as dictated by
the order of operators table’s Associativity column. */

// C does your math, but you need to know how to set up your expressions properly.



// ---------------------------------------------------------------------------------------------------------



// BREAK THE RULES WITH PARENTHESES

// If you group an expression inside parentheses, C evaluates that expression before the others.

/* Use lots of parentheses. They clarify your expressions. Even if the regular operator order will
suffice for your expression, parentheses make the expression easier for you to decipher if you need to
change the program later. */

