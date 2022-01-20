#include<stdio.h>
int main()
{
	int x=1,a,y,b,c,d=0,q=1,p,l=0,m=0,n=0;
	printf("\t\tHello\n");
	printf("\tWelcome to this quiz text\n");
	while(q!=0)
	{
		printf("Would you like to answer a quiz test\n");
		printf("\t1:Yes \t2:No\n\t");
		scanf("%d",&y);
		if(y>=1&&y<=2)
			q=0;
		else
		printf("\nPlease enter a valid input\n\n");	
	}
	if(y==1)
	while(q!=1)
	{
			printf("\nHow many participants are there Maximum:3\n");
			scanf("%d",&p);
			if(p>=1&&p<=3)
			q=1;
			else
			printf("\nPlease enter a valid input\n");	
	}
	switch(p)
	{
		case 1:
		switch(x)
		{
			case 1:
			printf("\n\n\n\tLevel 1\n\n\n");
			c=12;
			printf("\nWhat is 150 divided by 5?\n");
			scanf("%d",&b);
			if(b==30)
			d+=2;
			printf("\nWhich of the following is the national animal of India?\n");
			printf("1.Lion     \t2.Tiger \n");
			printf("3.Elephant \t4.Rhinoceros \n");
			scanf("%d",&b);
			if(b==2)
			d+=2;
			printf("\n6500 + 500 + 250 + 90 + 5 =\n");
			scanf("%d",&b);
			if(b==7345)
			d+=2;
			printf("\nWhen do we celebrate Indian Independence day?\n");
			printf("1.15th January \t2.26th January \n");
			printf("3.26th August  \t4.15th August \n");
			scanf("%d",&b);
			if(b==4)
			d+=2;
			printf("\nKatie's birthday is in 51 weeks and 2 days, how many days are there untill Katie's birthday\n");
			scanf("%d",&b);
			if(b==359)
			d+=2;
			printf("\nWhich of the following month has 31 days?\n");
			printf("1.October \t2.February \n");
			printf("3.June    \t4.April \n");
			scanf("%d",&b);
			if(b==1)
			d+=2;
			printf("\nDo you still want to continue Yes:1,No:2\n");
			scanf("%d",&a);
			if(a==2)
			break;
			case 2:
			printf("\n\n\n\tLevel 2\n\n\n");
			c=24;
			printf("\nWhat is 11 * 11\n");
			scanf("%d",&b);
			if(b==121)
			d+=2;
			printf("\nYoung cat is also called?\n");
			printf("1.Calf  \t2.Kitten \n");
			printf("3.Puppy \t4.Cub \n");
			scanf("%d",&b);
			if(b==2)
			d+=2;
			printf("\nWhat is 100 - 151\n");
			scanf("%d",&b);
			if(b==-51)
			d+=2;
			printf("\nKuchipuddi is the dance form of which state?\n");
			printf("1.Tail Nadu \t2.Andra Pradesh \n");
			printf("3.Karnataka \t4.Kerala \n");
			scanf("%d",&b);
			if(b==2)
			d+=2;
			printf("\nWhat number must you add to 79 make the sum of 121\n");
			scanf("%d",&b);
			if(b==42)
			d+=2;
			printf("\nWho invented Computer?\n");
			printf("1.Thomas Alva Edison    \t2.Pascal \n");
			printf("3.Alexander Graham Bell \t4.Charles Babbage \n");
			scanf("%d",&b);
			if(b==4)
			d+=2;
			printf("\nDo you still want to continue Yes:1,No:2\n");
			scanf("%d",&a);
			if(a==2)
			break;
			case 3:
			printf("\n\n\n\tLevel 3\n\n\n");
			c=36;
			printf("\nHow many degrees is the right angle triangle\n");
			scanf("%d",&b);
			if(b==90)
			d+=2;
			printf("\nGir National park in Gujarat is famous for?\n");
			printf("1.Elephant \t2.Rhinncerus \n");
			printf("3.Lion     \t3.Tiger \n");
			scanf("%d",&b);
			if(b==3)
			d+=2;
			printf("\nThe surface area of a sphere of radius 7cm is ___cm.sq.\n");
			scanf("%d",&b);
			if(b==616)
			d+=2;
			printf("\nHighest dam of India is?\n");
			printf("1.Hirakud Dam      \t2.Idukki Dam \n");
			printf("3.Bakra Nangal Dam \t4.Tehri Dam \n");
			scanf("%d",&b);
			if(b==4)
			d+=2;
			printf("\nIn a triangle if angle A is 45 degrees and \n");
			printf("angle B is 90, how much degrees is angle C\n");
			scanf("%d",&b);
			if(b==45)
			d+=2;
			printf("\nAgra is situated on the bank of river?\n");
			printf("1.Ganga   \t2.Yamuna \n");
			printf("3.Narmada \t4.Gomti \n");
			scanf("%d",&b);
			if(b==2)
			d+=2;
			printf("\nDo you still want to continue Yes:1,No:2\n");
			scanf("%d",&a);
			if(a==2)
			break;
			case 4:
			printf("\n\n\n\tLevel 4\n\n\n");
			c=48;
			printf("\nAmy has 200 balloons, 25 percent of the balloons are green,10 percent are orange\n");
			printf("and the remaining are blue .Can you work out how many blue balloons Amy has?\n");
			scanf("%d",&b);
			if(b==130)
			d+=2;
			printf("\nCataract is the  disease of?\n");
			printf("1.Ears \t2.Lungs \n");
			printf("3.Eyes \t4.Heart \n");
			scanf("%d",&b);
			if(b==3)
			d+=2;
			printf("\nThe volume of water completely filled in a cylinder of height 7cm and radius 8cm is ___cm.sq\n");
			scanf("%d",&b);
			if(b==1408)
			d+=2;
			printf("\nCapital of Uttarkhand is?\n");
			printf("1.Lucknow  \t2.Allahabad \n");
			printf("3.Dehradun \t4.Ranchi \n");
			scanf("%d",&b);
			if(b==3)
			d+=2;
			printf("\nIf there are 23 boys and 21 girls in class A and 21 boys and 27 girls in class B,\n");
			printf("how many girls and boys in total are there?\n");
			scanf("%d",&b);
			if(b==92)
			d+=2;
			printf("\nHitler party which came into power in 1933 was known as?\n");
			printf("1.Labour party \t2.Nazi party \n");
			printf("3.Ku-Klux-Klan \t4.Democratic party \n");
			scanf("%d",&b);
			if(b==2)
			d+=2;
			printf("\nDo you still want to continue Yes:1,No:2\n");
			scanf("%d",&a);
			if(a==2)
			break;
			case 5:
			printf("\n\n\n\tLevel 5\n\n\n");
			c=60;
			printf("\nWhich is the first product of two odd prime numbers?\n");
			scanf("%d",&b);
			if(b==15)
			d+=2;
			printf("\nLongest river in the world is?\n");
			printf("1.Amazon \t2.South-China sea \n");
			printf("3.Ganga  \t4.Nile \n");
			scanf("%d",&b);
			if(b==4)
			d+=2;
			printf("\nWhich of the following number is completely divisible by 2,3,4, and 5\n");
			printf("1.1000 \t2.1100\n");
			printf("3.1200 \t4.1300\n");
			scanf("%d",&b);
			if(b==1200)
			d+=2;
			printf("\nLBW is related to which sports?\n");
			printf("1.Football  \t2.Hockey \n");
			printf("3.Badminton \t4.Cricket \n");
			scanf("%d",&b);
			if(b==4)
			d+=2;
			printf("\nYour mom is in the market, she bought 22kg of fish and 24kg of chicken, you ate 12kg\n");
			printf("of chicken and 4kg of fish,how many kg in total is left of the the two foods\n");
			scanf("%d",&b);
			if(b==30)
			d+=2;
			printf("\nWhich of the following is an example of an output device of a computer?\n");
			printf("1.Printer \t2.Keyboard \n");
			printf("3.Scanner \t4.Mouse \n");
			scanf("%d",&b);
			if(b==1)
			d+=2;
			printf("\n\n\t Your quiz is over\n\n\n");
			printf("You have secured %d of %d marks\n",d,c);
			break;
		}
		break;
			
		case 2:
			printf("\n\tPlayer 1:\n");
			printf("\nWhat is 150 divided by 5?\n");
			scanf("%d",&b);
			if(b==30)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nWhich of the following is the national animal of India?\n");
			printf("1.Lion     \t2.Tiger \n");
			printf("3.Elephant \t4.Rhinoceros \n");
			scanf("%d",&b);
			if(b==2)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nWhen do we celebrate Indian Independence day?\n");
			printf("1.15th January \t2.26th January \n");
			printf("3.26th August  \t4.15th August \n");
			scanf("%d",&b);
			if(b==4)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\n6500 + 500 + 250 + 90 + 5 =\n");
			scanf("%d",&b);
			if(b==7345)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nKatie's birthday is in 51 weeks and 2 days, how many days are there untill Katie's birthday\n");
			scanf("%d",&b);
			if(b==359)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nWhich of the following month has 31 days?\n");
			printf("1.October \t2.February \n");
			printf("3.June    \t4.April \n");
			scanf("%d",&b);
			if(b==1)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nYoung cat is also called?\n");
			printf("1.Calf  \t2.Kitten \n");
			printf("3.Puppy \t4.Cub \n");
			scanf("%d",&b);
			if(b==2)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nWhat is 11 * 11\n");
			scanf("%d",&b);
			if(b==121)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nWhat is 100 - 151\n");
			scanf("%d",&b);
			if(b==-51)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nKuchipuddi is the dance form of which state?\n");
			printf("1.Tail Nadu \t2.Andra Pradesh \n");
			printf("3.Karnataka \t4.Kerala \n");
			scanf("%d",&b);
			if(b==2)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nWho invented Computer?\n");
			printf("1.Thomas Alva Edison    \t2.Pascal \n");
			printf("3.Alexander Graham Bell \t4.Charles Babbage \n");
			scanf("%d",&b);
			if(b==4)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nWhat number must you add to 79 make the sum of 121\n");
			scanf("%d",&b);
			if(b==42)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nHow many degrees is the right angle triangle\n");
			scanf("%d",&b);
			if(b==90)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nGir National park in Gujarat is famous for?\n");
			printf("1.Elephant \t2.Rhinncerus \n");
			printf("3.Lion     \t3.Tiger \n");
			scanf("%d",&b);
			if(b==3)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nHighest dam of India is?\n");
			printf("1.Hirakud Dam      \t2.Idukki Dam \n");
			printf("3.Bakra Nangal Dam \t4.Tehri Dam \n");
			scanf("%d",&b);
			if(b==4)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nThe surface area of a sphere of radius 7cm is ___cm.sq.\n");
			scanf("%d",&b);
			if(b==616)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nIn a triangle if angle A is 45 degrees and \n");
			printf("angle B is 90, how much degrees is angle C\n");
			scanf("%d",&b);
			if(b==45)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nAgra is situated on the bank of river?\n");
			printf("1.Ganga   \t2.Yamuna \n");
			printf("3.Narmada \t4.Gomti \n");
			scanf("%d",&b);
			if(b==2)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nCataract is the  disease of?\n");
			printf("1.Ears \t2.Lungs \n");
			printf("3.Eyes \t4.Heart \n");
			scanf("%d",&b);
			if(b==3)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nAmy has 200 balloons, 25 percent of the balloons are green,10 percent are orange\n");
			printf("and the remaining are blue .Can you work out how many blue balloons Amy has?\n");
			scanf("%d",&b);
			if(b==130)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nThe volume of water completely filled in a cylinder of height 7cm and radius 8cm is ___cm.sq\n");
			scanf("%d",&b);
			if(b==1408)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nCapital of Uttarkhand is?\n");
			printf("1.Lucknow  \t2.Allahabad \n");
			printf("3.Dehradun \t4.Ranchi \n");
			scanf("%d",&b);
			if(b==3)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nHitler party which came into power in 1933 was known as?\n");
			printf("1.Labour party \t2.Nazi party \n");
			printf("3.Ku-Klux-Klan \t4.Democratic party \n");
			scanf("%d",&b);
			if(b==2)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nIf there are 23 boys and 21 girls in class A and 21 boys and 27 girls in class B,\n");
			printf("how many girls and boys in total are there?\n");
			scanf("%d",&b);
			if(b==92)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nWhich is the first product of two odd prime numbers?\n");
			scanf("%d",&b);
			if(b==15)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nLongest river in the world is?\n");
			printf("1.Amazon \t2.South-China sea \n");
			printf("3.Ganga  \t4.Nile \n");
			scanf("%d",&b);
			if(b==4)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nLBW is related to which sports?\n");
			printf("1.Football  \t2.Hockey \n");
			printf("3.Badminton \t4.Cricket \n");
			scanf("%d",&b);
			if(b==4)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nWhich of the following number is completely divisible by 2,3,4, and 5\n");
			printf("1.1000 \t2.1100\n");
			printf("3.1200 \t4.1300\n");
			scanf("%d",&b);
			if(b==1200)
			m+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nYour mom is in the market, she bought 22kg of fish and 24kg of chicken, you ate 12kg\n");
			printf("of chicken and 4kg of fish,how many kg in total is left of the the two foods\n");
			scanf("%d",&b);
			if(b==30)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nWhich of the following is an example of an output device of a computer?\n");
			printf("1.Printer \t2.Keyboard \n");
			printf("3.Scanner \t4.Mouse \n");
			scanf("%d",&b);
			if(b==1)
			m+=2;
			printf("\n\nYour quiz is over\n\n");
			printf("Your results out of 30 are:\n");
			printf("Player 1:%d\n",l);
			printf("Player 2:%d\n",m);
			if(l>m)
				printf("\nPlayer 1 wins\n");
			else if(l==m)
				printf("\nIts a Draw\n");
			else
				printf("\nPlayer 2 wins\n");
			break;
			
		case 3:
			printf("\n\tPlayer 1:\n");
			printf("\nWhat is 150 divided by 5?\n");
			scanf("%d",&b);
			if(b==30)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nWhich of the following is the national animal of India?\n");
			printf("1.Lion     \t2.Tiger \n");
			printf("3.Elephant \t4.Rhinoceros \n");
			scanf("%d",&b);
			if(b==2)
			m+=2;
			printf("\n\tPlayer 3:\n");
			printf("\n6500 + 500 + 250 + 90 + 5 =\n");
			scanf("%d",&b);
			if(b==7345)
			n+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nWhen do we celebrate Indian Independence day?\n");
			printf("1.15th January \t2.26th January \n");
			printf("3.26th August  \t4.15th August \n");
			scanf("%d",&b);
			if(b==4)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nKatie's birthday is in 51 weeks and 2 days, how many days are there untill Katie's birthday\n");
			scanf("%d",&b);
			if(b==359)
			m+=2;
			printf("\n\tPlayer 3:\n");
			printf("\nWhich of the following month has 31 days?\n");
			printf("1.October \t2.February \n");
			printf("3.June    \t4.April \n");
			scanf("%d",&b);
			if(b==1)
			n+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nWhat is 11 * 11\n");
			scanf("%d",&b);
			if(b==121)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nYoung cat is also called?\n");
			printf("1.Calf  \t2.Kitten \n");
			printf("3.Puppy \t4.Cub \n");
			scanf("%d",&b);
			if(b==2)
			m+=2;
			printf("\n\tPlayer 3:\n");
			printf("\nWhat is 100 - 151\n");
			scanf("%d",&b);
			if(b==-51)
			n+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nKuchipuddi is the dance form of which state?\n");
			printf("1.Tail Nadu \t2.Andra Pradesh \n");
			printf("3.Karnataka \t4.Kerala \n");
			scanf("%d",&b);
			if(b==2)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nWhat number must you add to 79 make the sum of 121\n");
			scanf("%d",&b);
			if(b==42)
			m+=2;
			printf("\n\tPlayer 3:\n");
			printf("\nWho invented Computer?\n");
			printf("1.Thomas Alva Edison    \t2.Pascal \n");
			printf("3.Alexander Graham Bell \t4.Charles Babbage \n");
			scanf("%d",&b);
			if(b==4)
			n+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nHow many degrees is the right angle triangle\n");
			scanf("%d",&b);
			if(b==90)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nGir National park in Gujarat is famous for?\n");
			printf("1.Elephant \t2.Rhinncerus \n");
			printf("3.Lion     \t3.Tiger \n");
			scanf("%d",&b);
			if(b==3)
			m+=2;
			printf("\n\tPlayer 3:\n");
			printf("\nThe surface area of a sphere of radius 7cm is ___cm.sq.\n");
			scanf("%d",&b);
			if(b==616)
			n+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nHighest dam of India is?\n");
			printf("1.Hirakud Dam      \t2.Idukki Dam \n");
			printf("3.Bakra Nangal Dam \t4.Tehri Dam \n");
			scanf("%d",&b);
			if(b==4)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nIn a triangle if angle A is 45 degrees and \n");
			printf("angle B is 90, how much degrees is angle C\n");
			scanf("%d",&b);
			if(b==45)
			m+=2;
			printf("\n\tPlayer 3:\n");
			printf("\nAgra is situated on the bank of river?\n");
			printf("1.Ganga   \t2.Yamuna \n");
			printf("3.Narmada \t4.Gomti \n");
			scanf("%d",&b);
			if(b==2)
			n+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nAmy has 200 balloons, 25 percent of the balloons are green,10 percent are orange\n");
			printf("and the remaining are blue .Can you work out how many blue balloons Amy has?\n");
			scanf("%d",&b);
			if(b==130)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nCataract is the  disease of?\n");
			printf("1.Ears \t2.Lungs \n");
			printf("3.Eyes \t4.Heart \n");
			scanf("%d",&b);
			if(b==3)
			m+=2;
			printf("\n\tPlayer 3:\n");
			printf("\nThe volume of water completely filled in a cylinder of height 7cm and radius 8cm is ___cm.sq\n");
			scanf("%d",&b);
			if(b==1408)
			n+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nCapital of Uttarkhand is?\n");
			printf("1.Lucknow  \t2.Allahabad \n");
			printf("3.Dehradun \t4.Ranchi \n");
			scanf("%d",&b);
			if(b==3)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nIf there are 23 boys and 21 girls in class A and 21 boys and 27 girls in class B,\n");
			printf("how many girls and boys in total are there?\n");
			scanf("%d",&b);
			if(b==92)
			m+=2;
			printf("\n\tPlayer 3:\n");
			printf("\nHitler party which came into power in 1933 was known as?\n");
			printf("1.Labour party \t2.Nazi party \n");
			printf("3.Ku-Klux-Klan \t4.Democratic party \n");
			scanf("%d",&b);
			if(b==2)
			n+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nWhich is the first product of two odd prime numbers?\n");
			scanf("%d",&b);
			if(b==15)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nLongest river in the world is?\n");
			printf("1.Amazon \t2.South-China sea \n");
			printf("3.Ganga  \t4.Nile \n");
			scanf("%d",&b);
			if(b==4)
			m+=2;
			printf("\n\tPlayer 3:\n");
			printf("\nWhich of the following number is completely divisible by 2,3,4, and 5\n");
			printf("1.1000 \t2.1100\n");
			printf("3.1200 \t4.1300\n");
			scanf("%d",&b);
			if(b==1200)
			n+=2;
			printf("\n\tPlayer 1:\n");
			printf("\nLBW is related to which sports?\n");
			printf("1.Football  \t2.Hockey \n");
			printf("3.Badminton \t4.Cricket \n");
			scanf("%d",&b);
			if(b==4)
			l+=2;
			printf("\n\tPlayer 2:\n");
			printf("\nYour mom is in the market, she bought 22kg of fish and 24kg of chicken, you ate 12kg\n");
			printf("of chicken and 4kg of fish,how many kg in total is left of the the two foods\n");
			scanf("%d",&b);
			if(b==30)
			m+=2;
			printf("\n\tPlayer 3:\n");
			printf("\nWhich of the following is an example of an output device of a computer?\n");
			printf("1.Printer \t2.Keyboard \n");
			printf("3.Scanner \t4.Mouse \n");
			scanf("%d",&b);
			if(b==1)
			n+=2;
			printf("\n\nYour quiz is over\n\n");
			printf("Your results out of 20 are:\n");
			printf("Player 1:%d\n",l);
			printf("Player 2:%d\n",m);
			printf("Player 3:%d\n",n);
			if((l>m)&&(l!=n))
			{
				if(l>n)
				printf("\nPlayer 1 wins\n");
				else
				printf("\nPlayer 3 wins\n");
			}
			else if((l==m)&&(l==n)&&(m==n))
			{
				printf("\nIts a draw\n");
				printf("\nAll three participants share the first place\n");
			}
			else if((l==m)&&(l>n))
				printf("\nPlayer 1 and Player 2 share the first place\n");
			else if((l==m)&&(l<n))
				printf("\nPlayer 3 wins\n");	
			else if((l==n)&&(l>m))
				printf("\nPlayer 1 and Player 3 share the first place\n");
			else if((l==n)&&(l<m))
				printf("\nPlayer 2 wins\n");
			else if((m==n)&&(m>l))
				printf("\nPlayer 2 and Player 3 share the first place\n");
			else if((m==n)&&(m<l))
				printf("\nPlayer 1 wins\n");
			else 
			{
				if(m>n)
				printf("\nPlayer 2 wins\n");
				else
				printf("\nPlayer 3 wins\n");
			}	
			break;
	}		
  	printf("\n\t     Thankyou\n\n");
	return 0;
}
