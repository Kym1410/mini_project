typedef struct{
    char name[50];
    int weight;
    int price;
    int star;
    int starnum;
} Product;

int addProduct(Product *s); //제품을 주가하는 함수
void readProduct(Product s); //하나의 제품 출력 함수
int updataProduct(Product *s); //품목 업데이트 함수
int deleteProduct(Product *s); //제품 삭제 함수
int Menu(); //메뉴 선택 함수
