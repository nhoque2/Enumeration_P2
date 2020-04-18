#include <stdio.h>

{
    one = 1,
    two = 2,
    four = 4,
    eight = 8
};

enum Randoms
{
    BigCount = 20,
    IntCount = 3
};

int main(void)
{
	int a = 0;
    // Basic Mathimatical operations
    printf("%d",one + two); 
    printf("%d",four - two);   
    printf("%d",two * eight);  
    printf("%d", eight / two);  

    // Some bitwise operations
	a = one | two;
    printf("%d",a); 
	
	a = two & four;
    printf("%d",a);   
	
	a = two ^ eight;
    printf("%d",a);
		
	a = eight << 1;
    printf("%d",a);   
	
	a = eight >> 1;
    printf("%d",a);
	int intArray[IntCount];

    
    int someVal = 5 + BigCount;

    return 0;
}
//This C program has much more lines than the CPP program and the CPP is much more effecient.