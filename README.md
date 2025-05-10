# complex by miles-p

Have you ever wanted to work with complex numbers in C? Of course you have don't be silly.

# Cartesian Complex Numbers
General form: $a+ib$ where $i=\sqrt{-1}$

## Example 1: adding $3+4i$ and $2-3i$
```
cartesianComplexNumber a = {3, 4};
cartesianComplexNumber b = {2, -3};

cartesianComplexNumber result = addComplexCartesian(a, b);

printf("result:\i+\ii", result.real, result.imaginary);
```