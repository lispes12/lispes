#include <stdio.h>

int main() {
    int num_products;

    printf("상품 개수(종류)를 입력하세요 (1-100): ");
    scanf("%d", &num_products);

    int stock_quantities[num_products];
    int sales_quantities[num_products];
    int inventory[num_products];

    printf("%d개의 상품 별 입고수량을 입력하세요: ", num_products);
    for (int i = 0; i < num_products; i++) {
        scanf("%d", &stock_quantities[i]);
    }

    printf("%d개의 상품 별 판매수량을 입력하세요: ", num_products);
    for (int i = 0; i < num_products; i++) {
        scanf("%d", &sales_quantities[i]);
    }


    for (int i = 0; i < num_products; i++) {
        inventory[i] = stock_quantities[i] - sales_quantities[i];
    }

    int product_id;
    printf("조회할 상품의 ID를 입력하세요 (1-100): ");
    scanf("%d", &product_id);

    int product_inventory = inventory[product_id - 1];

    printf("%d ⇒ 입력한 ID에 해당하는 제품의 재고 수량\n", product_inventory);
    printf("모든 상품의 재고 수량 출력: ");
    for (int i = 0; i < num_products; i++) {
        printf("%d ", inventory[i]);
    }
    printf("\n");

    return 0;
}
