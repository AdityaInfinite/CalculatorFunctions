# Miscellaneous Calculator Functions 
## In C

### Includes
- isprime()
- sum()
- percent()
- percentOf()
- isRightTriangle()
- mean()


### isprime()
**Checks weather a number is prime**

format : isprime( int )
returns: boolean value

eg.
```
if(isprime(7))
  printf(" 7 is prime");
```
result: 7 is prime


### sum()
**calculates sum of an array**

make a float array of the numbers you want to add, eg. x

format : sum(&x[0] , number of elements in the array)
returns: float

eg. 
```
float add[3] = {1,4,5};
  printf(" sum = %d",sum(&add[0],3));
```
result: sum = 9

### percent()
**calculate percentage of a fraction or decimal or number (like 1/5 = 20%)**

format : percent(fraction)
returns: float

eg.
```
printf("%f",percent(0.25));
```
result: 25

eg.
```
printf("%f",percent(1/5));
```
result: 20

### percentOf()
**calculates x% of y**

format : percentOf(percent , 100% Value)
returns: float

eg.
```
printf("%f",percentOf(10,50));
```
result: 5

### isRightTriangle()
**checks weather given set of numbers can be sides of right angled triangle using pythogoras theoram**

format : isRightTriangle(side1 , side2 , side3){
returns: boolean

eg. 
```
if(isRightTriangle(5,3,4)){
  printf(" 5,3,4 are sides of right angled triangle");
```
result: 5,3,4 are sides of right angled triangle

### mean()
**calculates average**

make a float array, name it eg. x

format: mean(&x[0],numberOfElemntsInArray)
reurns: float

eg. 
```
float set[3]={3,4,3};
printf("%f",mean(&set[0],3));
```
result: 3.3333333

