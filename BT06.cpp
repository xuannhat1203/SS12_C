#include <stdio.h>
int main() {
	int choice;
	int size;
	printf("Nhap kich thuong cua mang: ");
	scanf("%d", &size);
	int array[size];
	int index;
	int value;
	int newValue;
	int a;
	int start = 0;
	int end = size;
	int mid = (start+end)/2;
	do
	{
		printf("\n1. Nh?p s? ph?n t? c?n nh?p và giá tr? các ph?n t?");
		printf("\n2. In ra giá tr? các ph?n t? dang qu?n lý");
		printf("\n3. Thêm m?t ph?n t? vào v? trí ch? d?nh");
		printf("\n4. S?a m?t ph?n t? ? v? trí ch? d?nh");
		printf("\n5. Xóa m?t ph?n t? ? v? trí ch? d?nh");
		printf("\n6. S?p x?p các ph?n t? ");
		printf("\n7. Gi?m d?n");
		printf("\n8. Tang d?n");
		printf("\n9. Tìm ki?m ph?n t? nh?p vào");
		printf("\n10. Thoát");
		printf("\nNhap luc chon cua ban: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				for(int i=0; i<size; i++){
					printf("nhap phan tu thu [%d]: ",i);
					scanf("%d",&array[i]);
				}
				break;
			case 2:
				for(int i=0; i<size; i++){
					printf("%d\n",array[i]);
				}
				break;
			case 3:
				printf("\nNhap vi tri muon them phan tu: ");
				scanf("%d", &index);
				printf("\nNhap gia tri muon them vao phan tu: ");
				scanf("%d", &value);
				array[index]=value;
				for (int i = size - 1; i >= index; i--) {
    			array[i + 1] = array[i];
				}
				array[index] = value;
				size++;

				for (int i = 0; i < size; i++) {
    			printf("%d\n", array[i]);
				}
				break;
			case 4: 
				printf("Nhap vi tri muon sua: ");
				scanf("%d",&index);
				printf("NHap gia tri moi: ");
				scanf("%d",&newValue);
				array[index]=newValue;
				for(int i=0; i<size;i++){
					if(i==index){
						array[i]=array[index];
					}
				}
				for (int i = 0; i < size; i++) {
    			printf("%d\n", array[i]);
				}
				break;
			case 5: 
				printf("Nhap vi tri muon xoa phan tu: ");
				scanf("%d", &index);
				for(int i=0; i<size; i++){
					if(i==index){
						array[i]=array[i-1];
						size--;
					}
				}
				for (int i = 0; i < size; i++) {
    			printf("%d\n", array[i]);
				}
				break;
			case 6: 
				for(int i=0; i<size; i++){
					for(int j=i+1;j<size; j++){
						if(array[i]<array[j]){
							int temp = array[i];
							array[i]=array[j];
							array[j]=temp;
						}
					}
				}
				for (int i = 0; i < size; i++) {
    			printf("%d\n", array[i]);
				}
				break;
			case 7: 
				for(int i=0; i<size; i++){
					for(int j=i+1;j<size; j++){
						if(array[i]>array[j]){
							int temp = array[i];
							array[i]=array[j];
							array[j]=temp;
						}
					}
				}
				for (int i = 0; i < size; i++) {
    			printf("%d\n", array[i]);
				}
				break;
			case 8:
				printf("Nhap so a: ");
				scanf("%d", &a);
				if(a==0){
					for(int i=0; i<size-1;i++){
						if(i==search){
							break;
						}
					}
				printf("vi tri thu %d",i);
				}else if(a==1){
				while(start<=end){
				if(array[mid]==search){
					break;
				}else if(array[mid]<search){
					start = mid +1;
				}else{
					end = mid -1
				}
				}
				printf("%d",mid);
				}
				return 0;
			default:
				printf("NHap tu 1-10")	;	
		}
		
	}while(1==1);
}
