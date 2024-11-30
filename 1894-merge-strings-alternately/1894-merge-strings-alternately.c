char * mergeAlternately(char * word1, char * word2){
int count1=strlen(word1);
int count2=strlen(word2);
int i =0;
int curr=0;
char *temp1=word1;
char *temp2=word2;
char *ptr=(char*)malloc((count1+count2+1)*sizeof(char));
while(curr<count1 || curr<count2){
    if(curr<count1){
        ptr[i]=*temp1;
        i++;
        temp1++;
    }
     if(curr<count2){

        ptr[i]=*temp2;
        i++;
        temp2++;
    }
curr++;
}

ptr[i]='\0';

return ptr;
}