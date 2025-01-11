#include<unistd.h>
int main()
{
	write(1,"hello",5);/*writes hello on screen*/
	write(1,"hello",2);/*writes he on screen*/
	write(1,"hello",20);/*writes garbages ono screen*/
	return 0;
}


