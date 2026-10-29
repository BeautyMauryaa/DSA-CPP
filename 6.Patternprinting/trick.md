### the three step trick :

- 1. count the row -> outer loop

```
for(int i=1;i=n;i++)
```

- 2. count the col for each row: always ask how many columns in row i?

```
- fixed col: for(j=1;j<=nj++>)
- increasing with row: for(j=1;j<=i;j++)
- decreasing with row: for(j=1;j<=n-i+1;j++)

```

- 3. decide what to print in each col:

### the real secret: break the triangle into pieces

- instead of solving the whole pattern at once:

1. draw the pattern on paper
2. split it into halves (left triangle, right triangle or upper + lower)
3. solve eahc piece using the row/col logic
4. combine them in one row using inner loops

### spaces formula: for pyramid/diamonds

- If it's a pyramid centered pattern, spaces almost always follow:
  spaces = n - i (for row i, decreasing as i increases)
  printed before the actual star/number triangle in that row.

for(int i=1; i<=n; i++){
for(int j=1; j<=n-i; j++) cout << " "; // spaces
for(int j=1; j<=2*i-1; j++) cout << "*"; // stars
cout << endl;
}
