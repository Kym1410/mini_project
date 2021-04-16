#include <stdio.h>
#include <string.h>
#include "product.h"
#include "manager.h"

int selectProduct(Product *s, int count){
    int no;
    listProduct(s, count);
    printf("번호는(취소:0)? ");
    scanf("%d",&no);
    return no;
}

void listProduct(Product *s, int count){
    printf("  Product     Weight     Price    Star\n");
    printf("----------------------------------------\n");
    for(int i=0; i<count; i++){
        if(s[i].price == -1) continue;
        printf("%d", i+1);
        readProduct(s[i]);
    }
}

void searchName(Product *s, int count){
    int scnt = 0;
    char search[20];

    printf("검색할 품목?");
    scanf("%s",search);

    printf("\n  Product     Weight     Price    Star\n");
    printf("----------------------------------------\n");

        for(int i=0; i<count; i++){
        if(s[i].price == 0) continue;
        if(strstr(s[i].name,search)) {
            printf("%2d",i+1);
            readProduct(s[i]);
            scnt++;
        }
    }
    if(scnt == 0) printf("=>검색된 데이터 없음!");
    printf("\n");

}



