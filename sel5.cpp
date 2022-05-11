

int main()
{
        printf("Line1%c", NL);
        printf("Line2%c", NL);
        
        int r = 5;

        printf("半径为%d的圆，面积是：%.2f，周长是：%.2f\n", r, S(r), C(r));
        
        float price;

        price = (2 * FANQIE + KONGXINCAI + YOUCAI) * 0.5; // 1斤 == 0.5公斤
        printf("小明需要支付%.2f元\n", price);

        price = (3 * XIQIN + 0.5 * YANGCONG + 5 * HUANGGUA) * 0.5;
        printf("小红需要支付%.2f元\n", price);

        price = (10 * HUANGGUA + 20 * BAILUOBO) * 0.5;
        printf("小甲鱼需要支付%.2f元\n", price);

        return 0;
}
