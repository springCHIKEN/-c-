

int main()
{
        printf("Line1%c", NL);
        printf("Line2%c", NL);
        
        int r = 5;

        printf("�뾶Ϊ%d��Բ������ǣ�%.2f���ܳ��ǣ�%.2f\n", r, S(r), C(r));
        
        float price;

        price = (2 * FANQIE + KONGXINCAI + YOUCAI) * 0.5; // 1�� == 0.5����
        printf("С����Ҫ֧��%.2fԪ\n", price);

        price = (3 * XIQIN + 0.5 * YANGCONG + 5 * HUANGGUA) * 0.5;
        printf("С����Ҫ֧��%.2fԪ\n", price);

        price = (10 * HUANGGUA + 20 * BAILUOBO) * 0.5;
        printf("С������Ҫ֧��%.2fԪ\n", price);

        return 0;
}
