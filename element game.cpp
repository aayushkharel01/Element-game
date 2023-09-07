#include <stdio.h>
int main()
{
	int a,b,d,e,f;
	char c,g,z;
	z= 'magnesium';
	
	
	
	printf("\n Are you ready to play the element quiz. I will ask you which element falls under the given number(which i will provide to you) and you have to guess and say the name of the element ");
	printf("\n Enter 1 when you are ready= ");
	scanf("%d",&a);
	if(a==1){
		printf("\n I am going to start the game enter 1 to start");
	    scanf("%d",&b);
	    if(b==1)
	    {
	    printf("\n  Your game is getting started. Rules of the game are very simple. Firstly you are asked to press any of the alphabetical letter like a,b,c.. so on and when you will enter those letter (only one letter at a time) and then I will provide you the number according to which it is arranged in peroidic table and you have to write and send me the name of the element that falls under this number.Okay Now I think we should start.");
			
			scanf("%d",&d);
			if(d==1){
				printf("\n enter any alphabetical letter =");
			scanf("%c",&g);
			if(g=='f')
			{
				printf("12= ? ");
			 scanf("%c",&e);
		     if(g=='z') 
			 {
		     	printf("Congrats your answer is correct ");
			 }
			}
			
	
		     	
		    }
			
	    
		}
	    
		
	}
		

	return 0;
}
