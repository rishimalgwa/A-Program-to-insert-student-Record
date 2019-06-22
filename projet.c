#include<stdio.h>
struct student
{
	int rno;
	char name[50];
	struct marks
	{
		int phy,chem,maths,eng,hindi;
	}m;
}s;
int i;
void newfile();   
void addrecord();
void updaterecord();
void deleterecord();               //menu functions
void search();
void marksheet();
void Exit();                     
void file();
void mainmenu();
int main()
{
    file();
	mainmenu();
}
void mainmenu()
{
	int menu;
	printf("Enter your choice form the menu:\n");             //Menu
	printf("1.Create a new file:\n");
	printf("2.Add a record in a file:\n");
	printf("3.Update student record:\n");
	printf("4.Delete student record:\n");
	printf("5.Search student with roll no.:\n");
	printf("6.Print Marksheet of a student:\n");
	printf("7.Exit:\n");
	scanf("%d",&menu);
	switch (menu)
	{
		case 1: newfile();
		        mainmenu();
		break;
		case 2: addrecord();
		        mainmenu();
		break;
		case 3: updaterecord();
		        mainmenu();
		break;
		case 4: deleterecord();
		        mainmenu();
		break;
		case 5: search();
		        mainmenu();
		break;
		case 6: marksheet();
		        mainmenu();
		break;
		case 7: Exit();
		        mainmenu();
		break;
		default: printf("wrong choice\n");
	}
}
void file()
{
	
	struct student s[i];
	struct marks m;
	FILE *fp;
	fp=fopen("data.csv","w");       //Writing record file 
	for(i=0;i<2;i++)
	{
	printf("enter student name\n");
	scanf("%s",s[i].name);
	printf("enter student rollno.\n");
	scanf("%d",&s[i].rno);
	printf("enter Marks\n");
	printf("enter marks of Physics:\n");
	scanf("%d",&m.phy);
	printf("enter marks of Chemistry:\n");
	scanf("%d",&m.chem);
	printf("enter marks of Maths:\n");
	scanf("%d",&m.maths);
	printf("enter marks of English:\n");
	scanf("%d",&m.eng);
	printf("enter marks of Hindi:\n");
	scanf("%d",&m.hindi);
    }
    for(i=0;i<2;i++)
    {
    	fprintf(fp,"Student name:%s"",""rollno.:%d"",""Physics:%d"",""Chemistry:%d"",""Maths:%d"",""English:%d"",""Hindi:%d""\n",s[i].name,s[i].rno,m.phy,m.chem,m.maths,m.eng,m.hindi);
	}
	fclose(fp);
    
}
void newfile()
{
	
	struct student s[i];
	struct marks m;
	FILE *fn;
	fn=fopen("newrecord.csv","w");       //1.Writing new record file 
	for(i=0;i<2;i++)
	{
	printf("enter student name\n");
	scanf("%s",s[i].name);
	printf("enter student rollno.\n");
	scanf("%d",&s[i].rno);
	printf("enter Marks\n");
	printf("enter marks of Physics:\n");
	scanf("%d",&m.phy);
	printf("enter marks of Chemistry:\n");
	scanf("%d",&m.chem);
	printf("enter marks of Maths:\n");
	scanf("%d",&m.maths);
	printf("enter marks of English:\n");
	scanf("%d",&m.eng);
	printf("enter marks of Hindi:\n");
	scanf("%d",&m.hindi);
    }
    for(i=0;i<2;i++)
    {
    fprintf(fn,"Student name:%s"",""rollno.:%d"",""Physics:%d"",""Chemistry:%d"",""Maths:%d"",""English:%d"",""Hindi:%d""\n",s[i].name,s[i].rno,m.phy,m.chem,m.maths,m.eng,m.hindi);
	}
	fclose(fn);
}
void addrecord()
{
	int n;
	printf("enter the no. of new record which u want to add\n");
	scanf("%d",&n);
	struct student s[i];
	struct marks m;
	FILE *fa;
	fa=fopen("data.csv","a");       //2.adding new record in a file 
	for(i=0;i<n;i++)
	{
	printf("enter student name\n");
	scanf("%s",s[i].name);
	printf("enter student rollno.\n");
	scanf("%d",&s[i].rno);
	printf("enter Marks\n");
	printf("enter marks of Physics:\n");
	scanf("%d",&m.phy);
	printf("enter marks of Chemistry:\n");
	scanf("%d",&m.chem);
	printf("enter marks of Maths:\n");
	scanf("%d",&m.maths);
	printf("enter marks of English:\n");
	scanf("%d",&m.eng);
	printf("enter marks of Hindi:\n");
	scanf("%d",&m.hindi);
    }
    for(i=0;i<n;i++)
    {
    	fprintf(fa,"Student name:%s"",""rollno.:%d"",""Physics:%d"",""Chemistry:%d"",""Maths:%d"",""English:%d"",""Hindi:%d""\n",s[i].name,s[i].rno,m.phy,m.chem,m.maths,m.eng,m.hindi);
	}
	fclose(fa);
}
void updaterecord()
{
	
}
void deleterecord()
{
}
void search()
{
}
void marksheet()
{
}
void Exit()
{
}
