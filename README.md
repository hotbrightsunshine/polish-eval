# polish-eval

The following program evaluates a IPN string and prints the first item on the stack.

## Supported operations
Two-variables operations: `+` `-` `*` `/` `%` `log <base> <arg>`

One-variable operations: `sin` `cos` `tan` `exp`

Direct access to «math.c» variables: `pi` `e`

## Variables
Variables can be created using the <varname> eq; instruction, up to a maximum of ten variables.
Variables automatically get assigned the result of the last expression evaluated.
For example,
```
0;
one eq;
one sin;
alt;
```
prints 0.

~文汐
