#include<stdio.h>
#define LEN 40 

struct names
{
	char first[LEN];
	char last[LEN];
};

struct guy
{
	struct names handle;
	char favoritefood[LEN];
	char job[LEN];
	char favoritegame[LEN];
	float income;
};
int main(void)
{
	struct guy classa[2] = {
	   {
		{"Chen,Zihan"},
	         "yuxiangrousi",
	         "coder",
	         "GTA",
	          0
	   },
	   {
		{ "Li,Manxi" },
		  "肉",
		  "student",
		  "王者荣耀",
		  10000000
	   }

	};
	struct guy *she;
	printf("adress #1: %p #2: %p\n", &classa[0], &classa[1]);
	she = &classa[0];
	printf("my name is %s\n", &she->handle);
	printf("my favorite food is %s\n", &she->favoritefood);
	printf("my imcome is %d\n", &she->income);
	printf("my favoritegame is %s\n", &she->favoritegame);
	printf("im is a %s\n", &she->job);

}


