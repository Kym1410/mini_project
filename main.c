#include <stdio.h>
#include <string.h>
#include "product.h"
#include "manager.h"

int main(){
#ifdef DEBUG
	printf("=>DEBUG\n");
#endif
    Product s[100];
    int menu;
    int index = 0;
    int count = 0;

    while(1){
        menu = Menu();
        if(menu == 0) break;
        if(menu == 1) {
            listProduct(s, index);
            }
        if(menu == 2) {
            count += addProduct(&s[index++]);
            }
        if(menu == 3) {
            int no = selectProduct(s,index);
            if(no>0){
            updataProduct(&s[no-1]);
            }
            }
        if(menu == 4) {
            int no = selectProduct(s, index);
            if(no>0){
                printf("정말로 삭제하시겠습니까?(1:삭제) ");
                int delok;
                scanf("%d",&delok);
                if(delok == 1)deleteProduct(&s[no-1]);
            }
            }
    }
    printf("종료됨!\n");
    return 0;
}
