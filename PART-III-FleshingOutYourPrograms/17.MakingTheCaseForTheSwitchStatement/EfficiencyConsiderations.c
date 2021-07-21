// EFFICIENCY CONSIDERATIONS

/*
case statements don’t have to be arranged in any order.
Even default doesn’t have to be the last case statement.
the break after the default statement isn’t needed as long as default appears at the end of switch.
However, putting break after default helps ensure that you move both statements if you ever rearrange the case statements.
If you were to put default higher in the order of case statements, default would require a break so that the rest of
the case statements wouldn’t execute.


TIP:
You can rearrange the case statements for efficiency.
Put the most common case possibilities toward the top of the switch statement so that C doesn’t have to search down
into the case statements to find a matching case.

