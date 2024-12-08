#include<stdio.h>
int main()
{
	int a[101];
	int chon;
	int m;
	int dem;
	int min;
	int min_1;
	int max,max_1;
	int value;
	int vitri;
	int xoa;
	int nhap;
	int count=0;
	int low,high,mid,key,found=0; 
	int unique[m];
	int k=0;
	int temp;
	do
	{
		printf("MENU\n");
		printf("1. Nhap so luong va gia tri cho cac phan tu\n");
		printf("2. In mang (a[0]=...,)\n");
		printf("3. Dem so luong so hoan hao\n");
		printf("4. Dem so luong nguyen to\n");
		printf("5. Tim gia tri lon thu 2(khong sap xep)\n");
		printf("6. Tim gia tri nho thu 2(khong sap xep)\n");
		printf("7. Them phan tu tai vi tri \n");
		printf("8. Xoa phan tu tai vi tri\n");
		printf("9. Sap xep mang theo thu tu tang dan(sap xep chen)\n");
		printf("10. Sap xep mang theo thu tu giam dan(sap xep chen)\n");
		printf("11. Tim kiem phan tu (tim kiem nhi phan)\n");
		printf("12. xoa phan tu trung lap va in phan tu doc nhat\n");
		printf("13. Sap xep va hien thi so chan dung truoc, so le duong sau\n");
		printf("14. Dao nguoc mang\n");
		printf("15. Thoat\n");
		printf("moi chon 1-15: ");
		scanf("%d", &chon);
		printf("\n");
		switch(chon)
		{
			// Nhap so luong va gia tri cho cac phan tu
			case 1:
			{
				printf("moi nhap kich thuoc: ");
				scanf("%d",&m);
				for(int i=0;i<m;i++)
				{
					printf("a[%d]",i);
					scanf("%d",&a[i]);
				}
				printf("\n");
				break;
			}
			//In mang (a[0]=...,)
			case 2:
			{
				printf("mang: ");
				for (int i=0;i<m;i++)
				{
					printf("a[%d]= %d, ",i,a[i]);
				}
				printf("\n");
				break;
			}
			 //Dem so luong so hoan hao
			case 3:
			{
				printf("cac so hoan hao trong mang: ");
				for(int i=0;i<m;i++)
				{
					int sum=0;
					for(int j=1;j<=a[i]/2;j++)
					{
						if(a[i]%j==0)
						{
							sum+=j;
						}
					}
					if(sum==a[i]&&a[i]!=0)
					{
						printf("%d, ",a[i]);
						count++;
					}
					else
					{
						printf("\ntrong mang ko co so hoan hao");
						break;
					}
				}
				printf("\n so luong so hoan hao: %d",count);
				printf("\n");
				break;
			}
			//Dem so luong nguyen to
			case 4:
			{
				printf("cac so nguyen to trong mang: ");
				for(int i=0;i<m;i++)
				{
					int n=a[i];
					int ngto=1;
					if(n<=1)
					{
						ngto=0;
					}
					else
					{
						for(int j=2;j<n;j++)
						{
							if(n%j==0)
							{
								ngto=0;
								break;
							}
						}
					}
					if(ngto)
					{
						printf("%d, ",a[i]);
						dem++;
					}
				}
					printf("\nso luong so nguyen to: %d", dem);
					printf("\n");
				break;
			}
			//Tim gia tri lon thu 2(khong sap xep)
			case 5:
			{
				max =a[0];
				for(int i=1;i<m;i++)
				{
					if(a[i]>max)
					{
						max_1=max;
						max=a[i];
					}
					else if( a[i]>max_1)
					{
						max_1=a[i];
					}
				}
				printf("so lon thu hai trong mang la : %d",max_1);
				printf("\n");
				break;
			}
			//Tim gia tri nho thu 2(khong sap xep)
			case 6:
			{
				min =a[0];
				for(int i=1;i<m;i++)
				{
					if(a[i]<min)
					{
						min_1=min;
						min=a[i];
					}
					else if( a[i]<min_1)
					{
						min_1=a[i];
					}
				}
				printf("so nho thu hai trong mang la : %d",min_1);
				printf("\n");
				break;
			}
			//Them phan tu tai vi tri
			case 7:
			{
			printf("nhap gia tri muon them: ");
			scanf("%d",&value);
			printf("nhap vi tri muon them(1-%d) : ",m);
			scanf("%d",&vitri);
			vitri-=1;
			if(vitri<0||vitri>m){
				printf("vi tri ko hop le");
			}
			else
			{
				for(int i=m;i>vitri;i--)
				{
					a[i]=a[i-1];
					
				}
				a[vitri]=value;
				m++;
				printf("mang da them: ");
				for(int i=0;i<m;i++)
				{
					printf("%d, ",a[i]);
				}
			printf("\n");
				break;
			}
			}
			//xoa phan tu tai vi tri	
			case 8:
			{
				printf("nhap vt xoa(0-%d): ",m-1);
				scanf("%d",&xoa);
				if(xoa<0&&xoa>=m)
				{
					printf("sai vi tri");
				}
				else
				{
					for(int i=xoa;i<m-1;i++)
					{
						a[i]=a[i+1];
					}
					m--;
					printf("mang da xoa: ");
					for(int i=0;i<m;i++)
					{
						printf("%d, ",a[i]);
					}
				}
				printf("\n");
				break;
			}
			//Sap xep mang theo thu tu tang dan(sap xep chen)
			case 9:
			{
				for(int i=1;i<m;i++)
				{
					int key = a[i];
					int j=i-1;
					while(j>=0&&a[j]>key)
					{
						a[j+1]=a[j];
						j--;
					}
					a[j+1]=key;
				}
				printf("Mang sau khi sap xep tang dan:\n");
			    for (int i = 0; i < m; i++) 
				{
			        printf("%d ", a[i]);
			    }
			    printf("\n");
				break;
			}
			//Sap xep mang theo thu tu giam dan(sap xep chen)
			case 10:
			{
				for(int i=1;i<m;i++)
				{
					int key = a[i];
					int j=i-1;
					while(j>=0&&a[j]<key)
					{
						a[j+1]=a[j];
						j--;
					}
					a[j+1]=key;
				}
				printf("Mang sau khi sap xep tang dan:\n");
			    for (int i = 0; i < m; i++) 
				{
			        printf("%d ", a[i]);
			    }
			    printf("\n");
				break;
			}
			//Tim kiem phan tu (tim kiem nhi phan)
			case 11:
			{
				printf("nhap gia tri can tim: ");
				scanf("%d",&key);
				low =0;
				high=m-1;
				while(low<=high)
				{
					mid=(low+high)/2;
					if(a[mid]==key)
					{
						found=1;
						printf("phan tu %d duoc tim thay tai vi tri %d \n",key,mid+1);
						break;
					}else if(a[mid]<key)
						{
							low =mid+1;
						}
						else
						{
							high=mid-1;
						}
				}
				if(!found)
				{
					printf("phan tu %d khong co trong mang\n",key);
				}
				printf("\n");
				break;
			}
			//xoa phan tu trung lap va in phan tu doc nhat
			case 12:
			{
				for (int i = 0; i < m; i++)
				 {
			        int isDuplicate = 0;
			        for (int j = 0; j < k; j++) 
					{
           			 if (a[i] == unique[j])
						 {
               				 isDuplicate = 1;
               				 break;
            			}
      			 	 }	
      			 	 if(!isDuplicate)
      			 	  {
      			 	   unique[k]=a[i];
      			     	k++;
					  }
				 }
				 printf("cac phan tu duy nhat trong mang la : \n");
				 for (int i = 0; i < k; i++)
				  {
       				 printf("%d ", unique[i]);
   			      }
   					 printf("\n");
				
					break;
			}
			//Sap xep va hien thi so chan dung truoc, so le duong sau
			case 13:
			{
				for (int i = 0; i < m - 1; i++)
				 {
       			 for (int j = i + 1; j < m; j++)
					{
	          		   if ((a[i] % 2 == 1 && a[i] > 0) && (a[j] % 2 == 0 || a[j] <= 0)) 
					    {
		                  temp = a[i];
		                  a[i] = a[j];
		                  a[j] = temp;
	          		    }
      			   }
   				 }
   				 printf("mang sau khi sap xep(so chan truoc ,le sau: \n)");
   				 for(int i=0;i<m;i++)
   				 {
   				 	printf("%d",a[i]);
				 }
				 printf("\n");
				break;
			}
			case 14:
			{
				printf("dao nguoc thu tu");
				for(int i=m-1;i>=0;i--)
				{
					printf("a[%d]= %d,",i,a[i]);
				}
				break;
			}
				
				
				
				
		}
		
		
	}while(chon>0&&chon<15);
}
