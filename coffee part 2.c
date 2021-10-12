// luyen tap nhanh
#include<stdio.h>

main()
{
	int sokhach, i, loaicf, thue = 0;
	long int sotien = 0, sotiensauthue = 0, tongsotien = 0;
	
	printf("\nCac ban co bao nhieu nguoi? ");
	scanf("%d", &sokhach);
	int khachhang[sokhach];
	int tien[sokhach];
	
	printf("\n\t Menu");
	printf("\n Den da(ma so 1) gia 30000\n Nau da(ma so 2) gia 30000\n Cappuccino(ma so 3) gia 45000\n Latte(ma so 4) gia 45000");
	
	for(i = 0; i < sokhach; i++)
	{
		printf("\nKhach hang %d muon uong gi?", i+1);
		scanf("%d", &loaicf);
		
		    switch(loaicf)
		    {
			    case 1:
				    thue = 30000 / 10;
				    tien[i] = 30000 + thue;
				    printf("\nKhach hang %d da mua cafe Den da voi gia 30000(thue 10%% = %d).", i+1, thue);
				    printf("\nSo tien khach hang %d phai thanh toan la %ld ", i+1, tien[i]);
			    	break;
			    case 2:	
			        thue = 30000 / 10;
				    tien[i] = 30000 + thue;
				    printf("\nKhach hang %d da mua cafe Nau da voi gia 30000(thue 10%% = %d).", i+1, thue);
				    printf("\nSo tien khach hang %d phai thanh toan la %ld", i+1, tien[i]);
				    break;
			    case 3:	
			        thue = 45000 / 10;
				    tien[i] = 45000 + thue;
				    printf("\nKhach hang %d da mua cafe Cappuccino voi gia 45000(thue 10%% = %d).", i+1, thue);
				    printf("\nSo tien khach hang %d phai thanh toan la %ld", i+1, tien[i]);
				    break;
			    case 4:	
			        thue = 45000 / 10;
				    tien[i] = 45000 + thue;
			    	printf("\nKhach hang %d da mua cafe Latte voi gia 45000(thue 10%% = %d).", i+1, thue);
				    printf("\nSo tien khach hang %d phai thanh toan la %ld", i+1, tien[i]);
				    break;		
	            default:
	        	    printf("\nKhong co loai cafe ban chon.");
	        	    break;
		    }
		    tongsotien+=tien[i];
	}
	printf("\nTong so tien cac ban phai tra la %d", tongsotien);
    
	return 0;	
}
