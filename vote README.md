### Hi there 👋

<!--
**narendra192110498/narendra192110498** is a ✨ _special_ ✨ repository because its `README.md` (this file) appears on your GitHub profile.

Here are some ideas to get you started:

- 🔭 I’m currently working on ...
- 🌱 I’m currently learning ...
- 👯 I’m looking to collaborate on ...
- 🤔 I’m looking for help with ...
- 💬 Ask me about ...
- 📫 How to reach me: ...
- 😄 Pronouns: ...
- ⚡ Fun fact: ...
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
