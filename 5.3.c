void main()
{
    int ram,shyam,ajay;
    printf("enter the age of ram:");
    scanf("%d",&ram);
    printf("enter the age of shyam:");
    scanf("%d",&shyam);
    printf("enter the age of ajay:");
    scanf("%d",&ajay);
    if(ram==shyam)
    {
        if(shyam==ajay)
        {
            printf("all are equal");
        }
        else
        {
            printf("ram and shyam are same age");
        }
    }
    else
    {
       if(ajay==shyam)
       {
           printf("shyam and ajay are same age");
       }
       else
       {
           if(ram>shyam)
           {
              printf("shyam is younger");
           }
           else
           {
               if(shyam>ajay)
               {
                   printf("ajay is younger");
               }
           }
           }
       }
    }
    if(ram==ajay)
    {
        if(ajay==shyam)
        {
            printf("all are same age");
        }
        else
        {
            printf("ajay and ram are same age");
        }
    }



