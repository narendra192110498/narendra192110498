### Hi there š

<!--
**narendra192110498/narendra192110498** is a āØ _special_ āØ repository because its `README.md` (this file) appears on your GitHub profile.

Here are some ideas to get you started:

- š­ Iām currently working on ...
- š± Iām currently learning ...
- šÆ Iām looking to collaborate on ...
- š¤ Iām looking for help with ...
- š¬ Ask me about ...
- š« How to reach me: ...
- š Pronouns: ...
- ā” Fun fact: ...
-->
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("you are allowed to vote\n");
	}
	else if((age>0) && (age<18))
	{
		printf("you are eligible to vote after %d",18-age);
	}
	else if(age<=0)
	{
		printf("Enter a valid input");
	}
	else
	{
		printf("enter valid input");
	}
	return 0;
		
}
