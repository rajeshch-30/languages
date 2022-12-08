#include <stdio.h>
#include <string.h>

int main(){
	
    char str[1000], substr[100], firstCharUpr, firstCharLwr;
    char *ptrCurr, *ptrNext;
    int i, idxCurr, idxNext, count = 0;
    
    //scan the input string and substring
    scanf("%s",str);
    scanf("%s",substr);

    if('a' <= str[0] && str[0] <= 'z'){
        firstCharUpr = str[0] - 'a' + 'A';
        firstCharLwr = str[0];
    }else{
        firstCharUpr = str[0];
        firstCharLwr = str[0] - 'A' + 'a';
    }
    // count for first character occurences with out considering upper and lower 
    for(i = 0; i < strlen(str); i++)
        if(str[i] == firstCharUpr || str[i] == firstCharLwr)
            count++;
    
    printf("%d\n", count);
    
    // assign pointer to the input string
    ptrCurr = str;
    idxCurr = 0;
    
    while(strlen(ptrCurr) > 0){
    	// strstr - This function returns a pointer to the first occurrence in mainstring (ptrCurr here) of any of the entire sequence of characters specified in substr
		// or a null pointer if the sequence is not present in mainstring.
        ptrNext = strstr(ptrCurr,substr);
        // if null pointer is returned from strstr function
        if(!ptrNext){
            for(; idxCurr < strlen(str); idxCurr++)
                printf("%c", str[idxCurr]);
            break;
        }
        else{
            idxNext = idxCurr + ptrNext - ptrCurr;
            for(; idxCurr < idxNext; idxCurr++)
                printf("%c", str[idxCurr]);
            // Print XXX when substr case matched
			printf("XXX");
			//update the current pointer value
            ptrCurr = ptrNext + 2;
            idxCurr = idxNext + strlen(substr);
        }
    }
    
    return 0;
}
