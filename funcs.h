#ifndef FUNCS_H
#define FUNCS_H
#include <math.h>

struct route{
    char start[50];
    int length;
    int uphill;
    int downhill;
    int maxAlt;
    int minAlt;
    char finish[50];
} ;
int readFromInput(struct route A[] ){
    int N;
    scanf("%d", &N);
    for (int i=0; i<N; i++){
        scanf(" %[^\n]%*c", A[i].start);
        scanf("%d", &A[i].length);
        scanf("%d", &A[i].uphill);
        scanf("%d", &A[i].downhill);
        scanf("%d", &A[i].maxAlt);
        scanf("%d", &A[i].minAlt);
        scanf(" %[^\n]%*c", A[i].finish);
    }

    return N;


}
void printData(struct route A[],int n){
    struct route temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j< n-i-1; j++){
            if (A[j].length<A[j+1].length){
            temp=A[j];
            A[j]= A[j+1];
            A[j+1]=temp;
            }
        }
    }
    for (int i=0; i<n; i++){
        if (strcmp(A[i].start,A[i].finish)==0){
            printf("From %s", A[i].start);
            printf (" to %s\n", A[i].finish);
            printf("Uphill %d", A[i].uphill);
            printf (", Downhill %d\n", A[i].downhill);
            printf("Max altitude %d", A[i].maxAlt);
            printf (", Min altitude %d\n", A[i].minAlt);
            printf("Length %d", A[i].length );
            int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
            printf (", Estimated time %d min\n\n", time);

        }
        else{
            printf("From %s", A[i].start);
            printf (" to %s\n", A[i].finish);
            printf("Uphill %d", A[i].uphill);
            printf (", Downhill %d\n", A[i].downhill);
            printf("Max altitude %d", A[i].maxAlt);
            printf (", Min altitude %d\n", A[i].minAlt);
            printf("Length %d", A[i].length );
            int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
            printf (", Estimated time %d min\n\n", time);

            printf("From %s", A[i].finish);
            printf (" to %s\n", A[i].start);
            printf("Uphill %d", A[i].downhill);
            printf (", Downhill %d\n", A[i].uphill);
            printf("Max altitude %d", A[i].maxAlt);
            printf (", Min altitude %d\n", A[i].minAlt);
            printf("Length %d", A[i].length );
            int time2=round((float)(A[i].length)/65+ (float)(A[i].downhill)/10);
            printf (", Estimated time %d min\n\n", time2);



        }
    }
}
void findShort(struct route A[], int n){
    int L;
    scanf("%d", &L);
    struct route temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j< n-i-1; j++){
            if (A[j].length<A[j+1].length){
            temp=A[j];
            A[j]= A[j+1];
            A[j+1]=temp;
            }
        }
    }
    for (int i=0; i<n; i++){
        if (A[i].length<=L){
            if (strcmp(A[i].start,A[i].finish)==0){
            printf("From %s", A[i].start);
            printf (" to %s\n", A[i].finish);
            printf("Uphill %d", A[i].uphill);
            printf (", Downhill %d\n", A[i].downhill);
            printf("Max altitude %d", A[i].maxAlt);
            printf (", Min altitude %d\n", A[i].minAlt);
            printf("Length %d", A[i].length );
            int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
            printf (", Estimated time %d min\n\n", time);

        }
        else{
            printf("From %s", A[i].start);
            printf (" to %s\n", A[i].finish);
            printf("Uphill %d", A[i].uphill);
            printf (", Downhill %d\n", A[i].downhill);
            printf("Max altitude %d", A[i].maxAlt);
            printf (", Min altitude %d\n", A[i].minAlt);
            printf("Length %d", A[i].length );
            int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
            printf (", Estimated time %d min\n\n", time);

            printf("From %s", A[i].finish);
            printf (" to %s\n", A[i].start);
            printf("Uphill %d", A[i].downhill);
            printf (", Downhill %d\n", A[i].uphill);
            printf("Max altitude %d", A[i].maxAlt);
            printf (", Min altitude %d\n", A[i].minAlt);
            printf("Length %d", A[i].length );
            time=round((float)(A[i].length)/65+(float)(A[i].downhill)/10);
            printf (", Estimated time %d min\n\n", time);
            }
        }
    }
}

void findLocation(struct route A[], int n){
    char loc[50];
    struct route temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j< n-i-1; j++){
            if (A[j].length<A[j+1].length){
            temp=A[j];
            A[j]= A[j+1];
            A[j+1]=temp;
            }
        }
    }
    scanf(" %[^\n]%*c", &loc);
    for (int i=0; i<n; i++){
        if (strcmp(A[i].start,loc)==0){
                printf("From %s", A[i].start);
                printf (" to %s\n", A[i].finish);
                printf("Uphill %d", A[i].uphill);
                printf (", Downhill %d\n", A[i].downhill);
                printf("Max altitude %d", A[i].maxAlt);
                printf (", Min altitude %d\n", A[i].minAlt);
                printf("Length %d", A[i].length );
                int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
                printf (", Estimated time %d min\n\n", time);

        }
        else if (strcmp(A[i].finish,loc)==0){
                printf("From %s", A[i].finish);
                printf (" to %s\n", A[i].start);
                printf("Uphill %d", A[i].downhill);
                printf (", Downhill %d\n", A[i].uphill);
                printf("Max altitude %d", A[i].maxAlt);
                printf (", Min altitude %d\n", A[i].minAlt);
                printf("Length %d", A[i].length );
                int time= round((float)(A[i].length)/65+ (float)(A[i].downhill)/10);
                printf (", Estimated time %d min\n\n", time);

        }

    }
}
void findUpHill(struct route A[], int n){
    struct route temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j< n-i-1; j++){
            if (A[j].length<A[j+1].length){
            temp=A[j];
            A[j]= A[j+1];
            A[j+1]=temp;
            }
        }
    }
    for (int i=0; i<n; i++){
        if (A[i].uphill>A[i].downhill){
            printf("From %s", A[i].start);
            printf (" to %s\n", A[i].finish);
            printf("Uphill %d", A[i].uphill);
            printf (", Downhill %d\n", A[i].downhill);
            printf("Max altitude %d", A[i].maxAlt);
            printf (", Min altitude %d\n", A[i].minAlt);
            printf("Length %d", A[i].length );
            int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
            printf (", Estimated time %d min\n\n", time);

        }


    }
}
void findDownHill(struct route A[],int n){
    struct route temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j< n-i-1; j++){
            if (A[j].length<A[j+1].length){
            temp=A[j];
            A[j]= A[j+1];
            A[j+1]=temp;
            }
        }
    }
    for (int i=0; i<n; i++){
        if (A[i].downhill>A[i].uphill){
            printf("From %s", A[i].start);
            printf (" to %s\n", A[i].finish);
            printf("Uphill %d", A[i].uphill);
            printf (", Downhill %d\n", A[i].downhill);
            printf("Max altitude %d", A[i].maxAlt);
            printf (", Min altitude %d\n", A[i].minAlt);
            printf("Length %d", A[i].length );
            int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
            printf (", Estimated time %d min\n\n", time);

        }
        else if (A[i].downhill<A[i].uphill){
                printf("From %s", A[i].finish);
                printf (" to %s\n", A[i].start);
                printf("Uphill %d", A[i].downhill);
                printf (", Downhill %d\n", A[i].uphill);
                printf("Max altitude %d", A[i].maxAlt);
                printf (", Min altitude %d\n", A[i].minAlt);
                printf("Length %d", A[i].length );
                int time= round((float)(A[i].length)/65+ (float)(A[i].downhill)/10);
                printf (", Estimated time %d min\n\n", time);
        }
    }
}
void findAltitude(struct route A[],int n){
    int min;
    int max;
    scanf("%d", &min);
    scanf("%d", &max);
    struct route temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j< n-i-1; j++){
            if (A[j].length<A[j+1].length){
            temp=A[j];
            A[j]= A[j+1];
            A[j+1]=temp;
            }
        }
    }
    for (int i=0; i<n; i++){
        if (A[i].maxAlt<=max && A[i].minAlt>=min){
            if (strcmp(A[i].start,A[i].finish)==0){
            printf("From %s", A[i].start);
            printf (" to %s\n", A[i].finish);
            printf("Uphill %d", A[i].uphill);
            printf (", Downhill %d\n", A[i].downhill);
            printf("Max altitude %d", A[i].maxAlt);
            printf (", Min altitude %d\n", A[i].minAlt);
            printf("Length %d", A[i].length );
            int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
            printf (", Estimated time %d min\n\n", time);

            }
            else   {
                printf("From %s", A[i].start);
                printf (" to %s\n", A[i].finish);
                printf("Uphill %d", A[i].uphill);
                printf (", Downhill %d\n", A[i].downhill);
                printf("Max altitude %d", A[i].maxAlt);
                printf (", Min altitude %d\n", A[i].minAlt);
                printf("Length %d", A[i].length );
                int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
                printf (", Estimated time %d min\n\n", time);

                printf("From %s", A[i].finish);
                printf (" to %s\n", A[i].start);
                printf("Uphill %d", A[i].downhill);
                printf (", Downhill %d\n", A[i].uphill);
                printf("Max altitude %d", A[i].maxAlt);
                printf (", Min altitude %d\n", A[i].minAlt);
                printf("Length %d", A[i].length );
                int time2=round((float)(A[i].length)/65+(float)(A[i].downhill)/10);
                printf (", Estimated time %d min\n\n", time2);
                }
        }

    }

}

void findTimely(struct route A[],int n){
    int T;
    scanf("%d", &T);
    struct route temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j< n-i-1; j++){
            if (A[j].length<A[j+1].length){
            temp=A[j];
            A[j]= A[j+1];
            A[j+1]=temp;
            }
        }
    }

    for (int i=0; i<n; i++){
        float time=(float)(A[i].length)/65+ (float)(A[i].uphill)/10;
        float time2=(float)(A[i].length)/65+ (float)(A[i].downhill)/10;
        if (time<=T){
            if (time2<=T){
                if (strcmp(A[i].start,A[i].finish)==0){
                    printf("From %s", A[i].start);
                    printf (" to %s\n", A[i].finish);
                    printf("Uphill %d", A[i].uphill);
                    printf (", Downhill %d\n", A[i].downhill);
                    printf("Max altitude %d", A[i].maxAlt);
                    printf (", Min altitude %d\n", A[i].minAlt);
                    printf("Length %d", A[i].length );
                    int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
                    printf (", Estimated time %d min\n\n", time);

                }
                else   {
                    printf("From %s", A[i].start);
                    printf (" to %s\n", A[i].finish);
                    printf("Uphill %d", A[i].uphill);
                    printf (", Downhill %d\n", A[i].downhill);
                    printf("Max altitude %d", A[i].maxAlt);
                    printf (", Min altitude %d\n", A[i].minAlt);
                    printf("Length %d", A[i].length );
                    int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
                    printf (", Estimated time %d min\n\n", time);

                    printf("From %s", A[i].finish);
                    printf (" to %s\n", A[i].start);
                    printf("Uphill %d", A[i].downhill);
                    printf (", Downhill %d\n", A[i].uphill);
                    printf("Max altitude %d", A[i].maxAlt);
                    printf (", Min altitude %d\n", A[i].minAlt);
                    printf("Length %d", A[i].length );
                    time=round((float)(A[i].length)/65+(float)(A[i].downhill)/10);
                    printf (", Estimated time %d min\n\n", time);
                }

            }
            else{
                printf("From %s", A[i].start);
                printf (" to %s\n", A[i].finish);
                printf("Uphill %d", A[i].uphill);
                printf (", Downhill %d\n", A[i].downhill);
                printf("Max altitude %d", A[i].maxAlt);
                printf (", Min altitude %d\n", A[i].minAlt);
                printf("Length %d", A[i].length );
                int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
                printf (", Estimated time %d min\n\n", time);
            }
       }
    }

}
int readFromFile(struct route A[]){
    char S[50];
    int N;
    scanf("%s", S);
    FILE *fp;
    fp= fopen(S,"r");
    if (fp!=NULL){
        fscanf(fp,"%d",&N );
        for (int i=0;i<N; i++){

            if (fgets(A[i].start,50 ,fp)!=NULL){
                fgets(A[i].start,50 ,fp);
                printf("%s", A[i].start);
            }

            fscanf(fp, "%d", &A[i].length);
            fscanf(fp, "%d", &A[i].uphill);
            fscanf(fp, "%d", &A[i].downhill);
            fscanf(fp, "%d", &A[i].maxAlt);
            fscanf(fp, "%d", &A[i].minAlt);
            printf("%d",A[i].length);

            if (fgets(A[i].finish,50 ,fp)!= NULL){
                fgets(A[i].finish,50 ,fp);
                printf("%s",A[i].finish);
            }

        }
       fclose(fp);

   // else{
       // printf("Error opening file");
   // }
    //return N;
    }
}
/*void saveData(struct route A[], int n){
    char *S;
    struct route temp;
    FILE *fp;
    scanf("%s",S);
    fp= fopen(S, "w");
    if (fp!=NULL){
        for (int i=0; i<n-1; i++){
            for (int j=0; j< n-i-1; j++){
                if (A[j].length<A[j+1].length){
                temp=A[j];
                A[j]= A[j+1];
                A[j+1]=temp;
                }
            }
        }
        for (int i=0; i<n; i++){
            if (strcmp(A[i].start,A[i].finish)==0){
                fprintf(fp,"From %s", A[i].start);
                fprintf (fp," to %s\n", A[i].finish);
                fprintf(fp,"Uphill %d", A[i].uphill);
                fprintf (fp,", Downhill %d\n", A[i].downhill);
                fprintf(fp,"Max altitude %d", A[i].maxAlt);
                fprintf (fp,", Min altitude %d\n", A[i].minAlt);
                fprintf(fp,"Length %d", A[i].length );
                int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
                fprintf (fp,", Estimated time %d min\n\n", time);

            }
            else{
                printf(fp,"From %s", A[i].start);
                printf (fp," to %s\n", A[i].finish);
                printf(fp,"Uphill %d", A[i].uphill);
                printf (fp,", Downhill %d\n", A[i].downhill);
                printf(fp,"Max altitude %d", A[i].maxAlt);
                printf (fp,", Min altitude %d\n", A[i].minAlt);
                printf(fp,"Length %d", A[i].length );
                int time= round((float)(A[i].length)/65+ (float)(A[i].uphill)/10);
                printf (fp,", Estimated time %d min\n\n", time);

                printf(fp,"From %s", A[i].finish);
                printf (fp," to %s\n", A[i].start);
                printf(fp,"Uphill %d", A[i].downhill);
                printf (fp,", Downhill %d\n", A[i].uphill);
                printf(fp,"Max altitude %d", A[i].maxAlt);
                printf (fp,", Min altitude %d\n", A[i].minAlt);
                printf(fp,"Length %d", A[i].length );
                int time2=round((float)(A[i].length)/65+ (float)(A[i].downhill)/10);
                printf (fp,", Estimated time %d min\n\n", time2);



            }
        }
        fclose(fp);

    }
    else{
        printf("Error opening file");
    }



}
*/





















#endif // FUNCS_H
