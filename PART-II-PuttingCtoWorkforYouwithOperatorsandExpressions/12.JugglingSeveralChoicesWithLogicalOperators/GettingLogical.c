// LOGICAL OPERATORS
// You can combine more than one relational test in a single if statement to clarify your code.
/* As long as you understand how the individual operators work, you don’t have to keep track of what they’re
called as a group.
A relational operator simply tests how two values relate (how they compare to each other). The logical operators
combine relational operators. */


//------------------------------------------------------------------------------------------------------------------------


// GETTING LOGICAL
/* Three logical operators exist.
Logical operators are known as compound relational operators because they let you combine more than one
relational operator.

------------------------------------------
LOGICAL OPERATOR            MEANING
------------------------------------------
    &&                      And
    ||                      Or                                      (Alt + 124)
    !                       Not
------------------------------------------

*/



/*

Logical operators appear between two or more relational tests.

    if ((age >= 21) && (age <= 65)) {
    “If the age is at least 21 and no more than 65,...”         // Spoken Language

and

    if ((hrsWorked > 40) || (sales > 25000.00)) {
    “If the hours worked are more than 40 or the sales are more than $25000,... “               // Spoken Language

and

    if (!(isCharterMember)) {
    “If you aren’t a charter member, you must...”               // Spoken Language

If you combine two relational operators with a logical operator or you use the ! (not) operator to negate a
relation, the entire expression following the if statement requires parentheses.

This is not allowed:

    if !isCharterMember {       //Not allowed




&& (And): Both sides of the && must be true for the body of the if to execute.

|| (Or): One or the other side of the || must be true (or they both can be true) for the body of the if to execute.

! (Not): Reverses a true or a false condition. True becomes false, and false becomes true. Limit the number of !
         operators you use. You can always rewrite a logical expression to avoid using ! by reversing the logic.
         For example:
                if ( !(sales < 3000)) {
         is exactly the same as this if:
                if ( sales >= 3000) {
         You can remove the ! and turn a negative statement into a positive test by removing the ! and using an
         opposite relational operator.


