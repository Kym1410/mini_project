void listProduct(Product *s, int count); //모든 등록된 제품 리스트 출력
int selectProduct(Product*s, int count);//업데이할 메뉴 선택
void searchName(Product *s, int count); //제품명 검색 함수
void searchPrice(Product *s, int count); //제품 가격 검색 함수
void searchStar(Product *s, int count);  //제품 별점 검색 함수
void saveData(Product *s, int count); //등록된 제품 파일에 저장 함수
int loadData(Product *s); //파일에 저장된 제품정보 입력함수
