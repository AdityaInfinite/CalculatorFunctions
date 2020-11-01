#include<math.h>

/*
format : isprime( int )
returns: boolean value

eg. if(isprime(7))
        printf(" 7 is prime");

result: 7 is prime
*/
int isprime()
{
    int num = 2;
    if (num == 2 || num == 3)
    {
        return 1;
    } 
    else
    {
        for (int i = 2; i <= (num / 2); i++)
        {
            if (num % i == 0)
            {
                return 0;
                break;
            }
            if ((i == (num / 2) && num % i != 0))
            {
                return 1;
                break;
            }
        }
    }
}

/*
make a float array of the numbers you want to add, eg. x
format : sum(&x[0] , number of elements in the array)
returns: float

eg. float add[3] = {1,4,5};
    printf(" sum = %d",sum(&add[0],3));

result: sum = 9
*/
float sum(float *f, int n)
{
    float sum = 0;
    for (int i = 1; i <= (n); i++)
    {
        sum = sum + (*f);
        *f++;
    }
    return sum;
}

/*
format : percent(fraction)
returns: float

eg. printf("%f",percent(0.25));
result: 25

eg. printf("%f",percent(1/5));
result: 20
*/
float percent(float f)
{
    return f * 100;
}

/*
calculates x% of y

format : percentOf(percent , 100% Value)
returns: float

eg. printf("%f",percentOf(10,50));
result: 5
*/
float percentOf(float p, float b)
{
    return (p/100)*b ;
}

/*
checks weather given set of numbers can be sides of right angled triangle using pythogoras theoram

format : isRightTriangle(side1 , side2 , side3){
returns: boolean

eg. if(isRightTriangle(5,3,4)){
        printf(" 5,3,4 are sides of right angled triangle");

result: 5,3,4 are sides of right angled triangle
}
}
*/
int isRightTriangle(float a,float b,float c){
    for(int i = 1; i <=3 ;i++){
        if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c== b*b)
        {
            return 1;
            break;
        }else{
            return 0; 
            break;
        }
    }
}

/*
returns average
make a float array, name it eg. x

format: mean(&x[0],numberOfElemntsInArray)
reurns: float

eg. set[3]={3,4,3};
    printf("%f",mean(&set[0],3));

result: 3.3333333
*/
float mean(float *fl, int n){
    return (sum( fl ,n)/n);
}
