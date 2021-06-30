// THE ORDER OF LOGICAL OPERATORS

/*

Studying the order of operators shows you that the && operator has precedence over the ||. Therefore, C interprets
the following logic:

    if (age < 20 || sales < 1200 && hrsWorked > 15) {

like this:

    if ((age < 20) || ((sales < 1200) && (hrsWorked > 15))) {

Use ample parentheses. Parentheses help clarify the order of operators. C won’t get confused if you don’t use
parentheses because it knows the order of operators table very well. However, a person looking at your program
has to figure out which is done first, and parentheses help group operations together.
*/





/*

DIFFICULT TO READ:

    if (grade > 93 && classMissed <= 3 && numActs >= 3 || sports >=  2) {

Spoken Language: If the student’s grade is more than 93 and the student missed three or fewer classes and the school
                 activities total three or more, OR if the student participated in two or more sports...




EASY TO READ:

    if ((grade > 93) && (classMissed <= 3) && ((numActs >= 3) || (sports >= 2)) {

Spoken Language: If the student’s grade is more than 93 and the student missed three or fewer classes and EITHER the
                 school activities total three or more OR the student participated in two or more sports...



If you like, you can break such long if statements into two or more lines, like this:
    if ((grade > 93) && (classMissed <= 3) &&
    ((numActs >= 3) || (sports >= 2)) {


Some C programmers even find that two if statements are clearer than four relational tests, such as these statements:
    if ((grade > 93) && (classMissed <= 3)
        { if ((numActs >= 3) || (sports >= 2))
           { /* Reward the student */ }






