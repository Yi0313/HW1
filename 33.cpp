#include <stdio.h>

//�p��@�Ѷ}����O�����
double calculate_daily_cost(double mileage, double fuel_price, double fuel_efficiency, double parking_fee, double toll_fee) 
{
	//�p��U�o����
	double fuel_cost = (mileage / fuel_efficiency) * fuel_price;
	    
	// �p��@�Ѫ��`����
	double total_cost = fuel_cost + parking_fee + toll_fee;
	    
	return total_cost;
}

int main() 
{
    double mileage, fuel_price, fuel_efficiency, parking_fee, toll_fee, daily_cost;
    
    //����J������T
    printf("�п�J�@�Ѫ��`���{�� (����): ");
    scanf("%lf", &mileage);
    
    printf("�п�J�T�o�@����/�[�ڪ�����: ");
    scanf("%lf", &fuel_price);
    
    printf("�п�J�C����/�[�گ��p��������: ");
    scanf("%lf", &fuel_efficiency);
    
    printf("�п�J�@�Ѫ������O: ");
    scanf("%lf", &parking_fee);
    
    printf("�п�J�@�Ѫ��q��O/�L���O: ");
    scanf("%lf", &toll_fee);
    
    //�p��@�Ѫ��`��O
    daily_cost = calculate_daily_cost(mileage, fuel_price, fuel_efficiency, parking_fee, toll_fee);
    
    //��ܵ��G
    printf("�z�@�Ѫ��}��������: %.2f ��\n", daily_cost);
    
    return 0;
}

