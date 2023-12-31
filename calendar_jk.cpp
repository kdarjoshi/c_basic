


#include<stdio.h>
#include<string.h>
struct month
{
    char mname[20];
    char wday[20];
};
int main()
{

    struct month s[13];
    char mname[20];
    char wday[20];
    strcpy(s[1].mname,"january");
    strcpy(s[2].mname,"febraury");
    strcpy(s[3].mname,"march");
    strcpy(s[4].mname,"april");
    strcpy(s[5].mname,"may");
    strcpy(s[6].mname,"june");
    strcpy(s[7].mname,"july");
    strcpy(s[8].mname,"august");
    strcpy(s[9].mname,"september");
    strcpy(s[10].mname,"october");
    strcpy(s[11].mname,"november");
    strcpy(s[12].mname,"december");
    strcpy(s[0].wday,"SUNDAY");
    strcpy(s[1].wday,"MONDAY");
    strcpy(s[2].wday,"TUESDAY");
    strcpy(s[3].wday,"WEDNESDAY");
    strcpy(s[4].wday,"THURSDAY");
    strcpy(s[5].wday,"FRIDAY");
    strcpy(s[6].wday,"SATURDAY");
    int z=0,n=0;
    printf("------------------THE MEGA CALENDAR-----------------\n");
    printf("Enter the number of calenders u want to view: ");
    scanf("%d",&n);
    for(z=0;z<n;z++)
    {
    int i=0,j=0,l=0,day=1,max=0,edate=0,month=0,date=1,year=0,F=0,F2=0,d=0,k=0,m=0,c=0,f=0,f2=0;
    printf("\nEnter the Date, Month and Year:\n");
    scanf("%d %d %d",&edate,&month,&year);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    max=31;
    if(month==4||month==6||month==9||month==11)
    max=30;
    if(month==2)
    {
        if(year%4==0)
        max=29;
        else
        max=28;
    }
    k=date;
    m=month-2;
    if(month==1)
    {
        year=year-1;
        m=11;
    }
    if(month==2)
    {
        year=year-1;
        m=12;
    }
    d=year%100;
    c=year/100;
    F=k+((13*m-1)/5)+d+(d/4)+(c/4)-2*c;
    f=F%7;
    f=f<0?f+7:f;
    l=f;


    printf("----------------------%s------------------------\n",s[month].mname);
    printf("SUN\tMON\tTUE\tWED\tTHURS\tFRI\tSAT\n");
    {
        for(j=0;j<7;j++)
        {
                if(j==l)
                {
                    for(i=0;i<6;i++)
                    {
                        for(;l<7;l++)
                        {
                            {
                                if(day<=max)
                                printf("%d\t",day++);
                                else
                                    goto end;
                            }
                        }
                        printf("\n");l=0;
                    }
                }
            printf("\t");
        }
    }
    end:
    F2=edate+((13*m-1)/5)+d+(d/4)+(c/4)-2*c;
    f2=F2%7;
    f2=f2<0?f2+7:f2;
    printf("\n-------------------------------------------------------\n");
    printf("Entered date comes on %s",s[f2].wday);
    }
return 0;
}

