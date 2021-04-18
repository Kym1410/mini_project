#include <stdio.h>
#include <string.h>
#include "product.h"

int addProduct(Product *s){
    printf("추가할 제품은? :");
    scanf("%s",s->name);
    printf("제품의 무개는? :");
    scanf("%d",&s->weight);
    printf("제품의 가격은? :");
    scanf("%s",s->price);
    printf("별점(1~5개) :");
    scanf("%s",s->star);

    return 1;
}


void readProduct(Product s){
    printf("  %4s      %4d      %5s     %4s\n",s.name,s.weight,s.price,s.star);
}


int updataProduct(Product *s){
    printf("추가할 제품은? :");
    scanf("%s",s->name);
    printf("제품의 무개는? :");
    scanf("%d",&s->weight);
    printf("제품의 가격은? :");
    scanf("%s",s->price);
    printf("별점(1~5개) :");
    scanf("%s",s->star);
    printf("수정성공!");

    return 1;
}

int deleteProduct(Product *s){
    s->weight = 0;
    printf("=> 삭제됨!");

    return 1;
} 

int Menu(){
    int menu;
    printf("\n***제품 관리***\n");
    printf("1. 제품조회\n");
    printf("2. 제품추가\n");
    printf("3. 제품수정\n");
    printf("4. 제품삭제\n");
    printf("5. 제품저장\n");
    printf("6. 제품검색\n");
    printf("7. 가격검색\n");
    printf("8. 별점검색\n"); 
    printf("0. 종료\n");
    printf("=> 원하는 메뉴는? :");
    scanf("%d",&menu);
    return menu;

}

