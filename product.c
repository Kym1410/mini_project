#include <stdio.h>
#include <string.h>
#include "product.h"

int addProduct(Product *s){
    printf("추가할 제품은? :");
    scanf("%s",s->name);
    printf("제품의 무개는? :");
    scanf("%d",&s->weight);
    printf("제품의 가격은? :");
    scanf("%d",&s->price);
    printf("별점(1~5개) :");
    scanf("%d",&s->star);
    s->starnum=s->star;

    return 1;
}


void readProduct(Product s){
    printf("  %4s      %4d      %5d     %4d\n",s.name,s.weight,s.price,s.starnum);
}


int updataProduct(Product *s){
    printf("추가할 제품은? :");
    scanf("%s",s->name);
    printf("제품의 무개는? :");
    scanf("%d",&s->weight);
    printf("제품의 가격은? :");
    scanf("%d",&s->price);
    printf("별점(1~5개) :");
    scanf("%d",&s->star);
    s->starnum=s->star;
    printf("수정성공!");

    return 1;
}

int deleteProduct(Product *s){
    s->price = -1;
    s->star = -1;
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
    printf("0. 종료\n");
    printf("=> 원하는 메뉴는? :");
    scanf("%d",&menu);
    return menu;

}

