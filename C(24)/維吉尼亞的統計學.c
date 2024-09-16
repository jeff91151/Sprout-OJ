#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char s[1005]; // 
	char k[1005];
	

	//sprout s[1000]
	//abcdef k[1000]
	char z;
	int i = 0;
	while(1){
		z = getchar(); // 得多用一個變數 z 來存儲， 為避免資料遺失 
		if (z =='\n'){ // 得用 ''， but 暫時不了解
			break;
		}
		s[i] = z;
		i++; 
	}
	i = 0;
	while(1){
		z = getchar(); // 得多用一個變數 z 來存儲， 為避免資料遺失 
		if (z =='\n' || z == EOF){ // 得用 ''， but 暫時不了解 
			break;
		}
		k[i] = z;
		i++; 
	}
	int j;
	int a;
	char out[1005] = {0};
	char eng[26] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};
	int total;
	int total_mod;
	for(j=0;j<i;j++){
//		method 2 超簡化 
//		int offset = s[j]-'a';
//		int offset2 = k[j]-'a';
//		total = offset + offset2;
//		total_mod = total % 26;
//		out[j] = eng[total_mod];
			switch((int)s[j]){ // a
			case 97:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[0];
					break;
					case 98:
						out[j] = eng[1];
					break;
					case 99:
						out[j] = eng[2];
					break;
					case 100:
						out[j] = eng[3];
					break;
					case 101:
						out[j] = eng[4];
					break;
					case 102:
						out[j] = eng[5];
					break;
		 			case 103:
						out[j] = eng[6];
					break;
					case 104:
						out[j] = eng[7];
					break;
					case 105:
						out[j] = eng[8];
					break;
					case 106:
						out[j] = eng[9];
					break;
					case 107:
						out[j] = eng[10];
					break;
					case 108:
						out[j] = eng[11];
					break;
					case 109:
						out[j] = eng[12];
					break;
					case 110:
						out[j] = eng[13];
					break;
					case 111:
						out[j] = eng[14];
					break;
					case 112:
						out[j] = eng[15];
					break;
					case 113:
						out[j] = eng[16];
					break;
					case 114:
						out[j] = eng[17];
					break;
					case 115:
						out[j] = eng[18];
					break;
					case 116:
						out[j] = eng[19];
					break;
					case 117:
						out[j] = eng[20];
					break;
					case 118:
						out[j] = eng[21];
					break;
					case 119:
						out[j] = eng[22];
					break;
					case 120:
						out[j] = eng[23];
					break;
					case 121:
						out[j] = eng[24];
					break;
					case 122:
						out[j] = eng[25];
					break;
			}
			break;
			case 98:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[1];
					break;
					case 98:
						out[j] = eng[2];
					break;
					case 99:
						out[j] = eng[3];
					break;
					case 100:
						out[j] = eng[4];
					break;
					case 101:
						out[j] = eng[5];
					break;
					case 102:
						out[j] = eng[6];
					break;
					case 103:
						out[j] = eng[7];
					break;
					case 104:
						out[j] = eng[8];
					break;
					case 105:
						out[j] = eng[9];
					break;
					case 106:
						out[j] = eng[10];
					break;
					case 107:
						out[j] = eng[11];
					break;
					case 108:
						out[j] = eng[12];
					break;
					case 109:
						out[j] = eng[13];
					break;
					case 110:
						out[j] = eng[14];
					break;
					case 111:
						out[j] = eng[15];
					break;
					case 112:
						out[j] = eng[16];
					break;
					case 113:
						out[j] = eng[17];
					break;
					case 114:
						out[j] = eng[18];
					break;
					case 115:
						out[j] = eng[19];
					break;
					case 116:
						out[j] = eng[20];
					break;
					case 117:
						out[j] = eng[21];
					break;
					case 118:
						out[j] = eng[22];
					break;
					case 119:
						out[j] = eng[23];
					break;
					case 120:
						out[j] = eng[24];
					break;
					case 121:
						out[j] = eng[25];
					break;
					case 122:
						out[j] = eng[0];
					break;
			}
			break;
			case 99:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[2];
					break;
					case 98:
						out[j] = eng[3];
					break;
					case 99:
						out[j] = eng[4];
					break;
					case 100:
						out[j] = eng[5];
					break;
					case 101:
						out[j] = eng[6];
					break;
					case 102:
						out[j] = eng[7];
					break;
					case 103:
						out[j] = eng[8];
					break;
					case 104:
						out[j] = eng[9];
					break;
					case 105:
						out[j] = eng[10];
					break;
					case 106:
						out[j] = eng[11];
					break;
					case 107:
						out[j] = eng[12];
					break;
					case 108:
						out[j] = eng[13];
					break;
					case 109:
						out[j] = eng[14];
					break;
					case 110:
						out[j] = eng[15];
					break;
					case 111:
						out[j] = eng[16];
					break;
					case 112:
						out[j] = eng[17];
					break;
					case 113:
						out[j] = eng[18];
					break;
					case 114:
						out[j] = eng[19];
					break;
					case 115:
						out[j] = eng[20];
					break;
					case 116:
						out[j] = eng[21];
					break;
					case 117:
						out[j] = eng[22];
					break;
					case 118:
						out[j] = eng[23];
					break;
					case 119:
						out[j] = eng[24];
					break;
					case 120:
						out[j] = eng[25];
					break;
					case 121:
						out[j] = eng[0];
					break;
					case 122:
						out[j] = eng[1];
					break;
			}
			break;
			case 100:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[3];
					break;
					case 98:
						out[j] = eng[4];
					break;
					case 99:
						out[j] = eng[5];
					break;
					case 100:
						out[j] = eng[6];
					break;
					case 101:
						out[j] = eng[7];
					break;
					case 102:
						out[j] = eng[8];
					break;
					case 103:
						out[j] = eng[9];
					break;
					case 104:
						out[j] = eng[10];
					break;
					case 105:
						out[j] = eng[11];
					break;
					case 106:
						out[j] = eng[12];
					break;
					case 107:
						out[j] = eng[13];
					break;
					case 108:
						out[j] = eng[14];
					break;
					case 109:
						out[j] = eng[15];
					break;
					case 110:
						out[j] = eng[16];
					break;
					case 111:
						out[j] = eng[17];
					break;
					case 112:
						out[j] = eng[18];
					break;
					case 113:
						out[j] = eng[19];
					break;
					case 114:
						out[j] = eng[20];
					break;
					case 115:
						out[j] = eng[21];
					break;
					case 116:
						out[j] = eng[22];
					break;
					case 117:
						out[j] = eng[23];
					break;
					case 118:
						out[j] = eng[24];
					break;
					case 119:
						out[j] = eng[25];
					break;
					case 120:
						out[j] = eng[0];
					break;
					case 121:
						out[j] = eng[1];
					break;
					case 122:
						out[j] = eng[2];
					break;
			}
			break;
			case 101:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[4];
					break;
					case 98:
						out[j] = eng[5];
					break;
					case 99:
						out[j] = eng[6];
					break;
					case 100:
						out[j] = eng[7];
					break;
					case 101:
						out[j] = eng[8];
					break;
					case 102:
						out[j] = eng[9];
					break;
					case 103:
						out[j] = eng[10];
					break;
					case 104:
						out[j] = eng[11];
					break;
					case 105:
						out[j] = eng[12];
					break;
					case 106:
						out[j] = eng[13];
					break;
					case 107:
						out[j] = eng[14];
					break;
					case 108:
						out[j] = eng[15];
					break;
					case 109:
						out[j] = eng[16];
					break;
					case 110:
						out[j] = eng[17];
					break;
					case 111:
						out[j] = eng[18];
					break;
					case 112:
						out[j] = eng[19];
					break;
					case 113:
						out[j] = eng[20];
					break;
					case 114:
						out[j] = eng[21];
					break;
					case 115:
						out[j] = eng[22];
					break;
					case 116:
						out[j] = eng[23];
					break;
					case 117:
						out[j] = eng[24];
					break;
					case 118:
						out[j] = eng[25];
					break;
					case 119:
						out[j] = eng[0];
					break;
					case 120:
						out[j] = eng[1];
					break;
					case 121:
						out[j] = eng[2];
					break;
					case 122:
						out[j] = eng[3];
					break;
			}
			break;
			case 102:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[5];
					break;
					case 98:
						out[j] = eng[6];
					break;
					case 99:
						out[j] = eng[7];
					break;
					case 100:
						out[j] = eng[8];
					break;
					case 101:
						out[j] = eng[9];
					break;
					case 102:
						out[j] = eng[10];
					break;
					case 103:
						out[j] = eng[11];
					break;
					case 104:
						out[j] = eng[12];
					break;
					case 105:
						out[j] = eng[13];
					break;
					case 106:
						out[j] = eng[14];
					break;
					case 107:
						out[j] = eng[15];
					break;
					case 108:
						out[j] = eng[16];
					break;
					case 109:
						out[j] = eng[17];
					break;
					case 110:
						out[j] = eng[18];
					break;
					case 111:
						out[j] = eng[19];
					break;
					case 112:
						out[j] = eng[20];
					break;
					case 113:
						out[j] = eng[21];
					break;
					case 114:
						out[j] = eng[22];
					break;
					case 115:
						out[j] = eng[23];
					break;
					case 116:
						out[j] = eng[24];
					break;
					case 117:
						out[j] = eng[25];
					break;
					case 118:
						out[j] = eng[0];
					break;
					case 119:
						out[j] = eng[1];
					break;
					case 120:
						out[j] = eng[2];
					break;
					case 121:
						out[j] = eng[3];
					break;
					case 122:
						out[j] = eng[4];
					break;
			}
			break;
			case 103:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[6];
					break;
					case 98:
						out[j] = eng[7];
					break;
					case 99:
						out[j] = eng[8];
					break;
					case 100:
						out[j] = eng[9];
					break;
					case 101:
						out[j] = eng[10];
					break;
					case 102:
						out[j] = eng[11];
					break;
					case 103:
						out[j] = eng[12];
					break;
					case 104:
						out[j] = eng[13];
					break;
					case 105:
						out[j] = eng[14];
					break;
					case 106:
						out[j] = eng[15];
					break;
					case 107:
						out[j] = eng[16];
					break;
					case 108:
						out[j] = eng[17];
					break;
					case 109:
						out[j] = eng[18];
					break;
					case 110:
						out[j] = eng[19];
					break;
					case 111:
						out[j] = eng[20];
					break;
					case 112:
						out[j] = eng[21];
					break;
					case 113:
						out[j] = eng[22];
					break;
					case 114:
						out[j] = eng[23];
					break;
					case 115:
						out[j] = eng[24];
					break;
					case 116:
						out[j] = eng[25];
					break;
					case 117:
						out[j] = eng[0];
					break;
					case 118:
						out[j] = eng[1];
					break;
					case 119:
						out[j] = eng[2];
					break;
					case 120:
						out[j] = eng[3];
					break;
					case 121:
						out[j] = eng[4];
					break;
					case 122:
						out[j] = eng[5];
					break;
			}
			break;
			case 104:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[7];
					break;
					case 98:
						out[j] = eng[8];
					break;
					case 99:
						out[j] = eng[9];
					break;
					case 100:
						out[j] = eng[10];
					break;
					case 101:
						out[j] = eng[11];
					break;
					case 102:
						out[j] = eng[12];
					break;
					case 103:
						out[j] = eng[13];
					break;
					case 104:
						out[j] = eng[14];
					break;
					case 105:
						out[j] = eng[15];
					break;
					case 106:
						out[j] = eng[16];
					break;
					case 107:
						out[j] = eng[17];
					break;
					case 108:
						out[j] = eng[18];
					break;
					case 109:
						out[j] = eng[19];
					break;
					case 110:
						out[j] = eng[20];
					break;
					case 111:
						out[j] = eng[21];
					break;
					case 112:
						out[j] = eng[22];
					break;
					case 113:
						out[j] = eng[23];
					break;
					case 114:
						out[j] = eng[24];
					break;
					case 115:
						out[j] = eng[25];
					break;
					case 116:
						out[j] = eng[0];
					break;
					case 117:
						out[j] = eng[1];
					break;
					case 118:
						out[j] = eng[2];
					break;
					case 119:
						out[j] = eng[3];
					break;
					case 120:
						out[j] = eng[4];
					break;
					case 121:
						out[j] = eng[5];
					break;
					case 122:
						out[j] = eng[6];
					break;
			}
			break;
			case 105:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[8];
					break;
					case 98:
						out[j] = eng[9];
					break;
					case 99:
						out[j] = eng[10];
					break;
					case 100:
						out[j] = eng[11];
					break;
					case 101:
						out[j] = eng[12];
					break;
					case 102:
						out[j] = eng[13];
					break;
					case 103:
						out[j] = eng[14];
					break;
					case 104:
						out[j] = eng[15];
					break;
					case 105:
						out[j] = eng[16];
					break;
					case 106:
						out[j] = eng[17];
					break;
					case 107:
						out[j] = eng[18];
					break;
					case 108:
						out[j] = eng[19];
					break;
					case 109:
						out[j] = eng[20];
					break;
					case 110:
						out[j] = eng[21];
					break;
					case 111:
						out[j] = eng[22];
					break;
					case 112:
						out[j] = eng[23];
					break;
					case 113:
						out[j] = eng[24];
					break;
					case 114:
						out[j] = eng[25];
					break;
					case 115:
						out[j] = eng[0];
					break;
					case 116:
						out[j] = eng[1];
					break;
					case 117:
						out[j] = eng[2];
					break;
					case 118:
						out[j] = eng[3];
					break;
					case 119:
						out[j] = eng[4];
					break;
					case 120:
						out[j] = eng[5];
					break;
					case 121:
						out[j] = eng[6];
					break;
					case 122:
						out[j] = eng[7];
					break;
			}
			break;
			case 106:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[9];
					break;
					case 98:
						out[j] = eng[10];
					break;
					case 99:
						out[j] = eng[11];
					break;
					case 100:
						out[j] = eng[12];
					break;
					case 101:
						out[j] = eng[13];
					break;
					case 102:
						out[j] = eng[14];
					break;
					case 103:
						out[j] = eng[15];
					break;
					case 104:
						out[j] = eng[16];
					break;
					case 105:
						out[j] = eng[17];
					break;
					case 106:
						out[j] = eng[18];
					break;
					case 107:
						out[j] = eng[19];
					break;
					case 108:
						out[j] = eng[20];
					break;
					case 109:
						out[j] = eng[21];
					break;
					case 110:
						out[j] = eng[22];
					break;
					case 111:
						out[j] = eng[23];
					break;
					case 112:
						out[j] = eng[24];
					break;
					case 113:
						out[j] = eng[25];
					break;
					case 114:
						out[j] = eng[0];
					break;
					case 115:
						out[j] = eng[1];
					break;
					case 116:
						out[j] = eng[2];
					break;
					case 117:
						out[j] = eng[3];
					break;
					case 118:
						out[j] = eng[4];
					break;
					case 119:
						out[j] = eng[5];
					break;
					case 120:
						out[j] = eng[6];
					break;
					case 121:
						out[j] = eng[7];
					break;
					case 122:
						out[j] = eng[8];
					break;
			}
			break;
			case 107:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[10];
					break;
					case 98:
						out[j] = eng[11];
					break;
					case 99:
						out[j] = eng[12];
					break;
					case 100:
						out[j] = eng[13];
					break;
					case 101:
						out[j] = eng[14];
					break;
					case 102:
						out[j] = eng[15];
					break;
					case 103:
						out[j] = eng[16];
					break;
					case 104:
						out[j] = eng[17];
					break;
					case 105:
						out[j] = eng[18];
					break;
					case 106:
						out[j] = eng[19];
					break;
					case 107:
						out[j] = eng[20];
					break;
					case 108:
						out[j] = eng[21];
					break;
					case 109:
						out[j] = eng[22];
					break;
					case 110:
						out[j] = eng[23];
					break;
					case 111:
						out[j] = eng[24];
					break;
					case 112:
						out[j] = eng[25];
					break;
					case 113:
						out[j] = eng[0];
					break;
					case 114:
						out[j] = eng[1];
					break;
					case 115:
						out[j] = eng[2];
					break;
					case 116:
						out[j] = eng[3];
					break;
					case 117:
						out[j] = eng[4];
					break;
					case 118:
						out[j] = eng[5];
					break;
					case 119:
						out[j] = eng[6];
					break;
					case 120:
						out[j] = eng[7];
					break;
					case 121:
						out[j] = eng[8];
					break;
					case 122:
						out[j] = eng[9];
					break;
			}
			break;
			case 108:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[11];
					break;
					case 98:
						out[j] = eng[12];
					break;
					case 99:
						out[j] = eng[13];
					break;
					case 100:
						out[j] = eng[14];
					break;
					case 101:
						out[j] = eng[15];
					break;
					case 102:
						out[j] = eng[16];
					break;
					case 103:
						out[j] = eng[17];
					break;
					case 104:
						out[j] = eng[18];
					break;
					case 105:
						out[j] = eng[19];
					break;
					case 106:
						out[j] = eng[20];
					break;
					case 107:
						out[j] = eng[21];
					break;
					case 108:
						out[j] = eng[22];
					break;
					case 109:
						out[j] = eng[23];
					break;
					case 110:
						out[j] = eng[24];
					break;
					case 111:
						out[j] = eng[25];
					break;
					case 112:
						out[j] = eng[0];
					break;
					case 113:
						out[j] = eng[1];
					break;
					case 114:
						out[j] = eng[2];
					break;
					case 115:
						out[j] = eng[3];
					break;
					case 116:
						out[j] = eng[4];
					break;
					case 117:
						out[j] = eng[5];
					break;
					case 118:
						out[j] = eng[6];
					break;
					case 119:
						out[j] = eng[7];
					break;
					case 120:
						out[j] = eng[8];
					break;
					case 121:
						out[j] = eng[9];
					break;
					case 122:
						out[j] = eng[10];
					break;
		 	}
			break;
			case 109:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[12];
					break;
					case 98:
						out[j] = eng[13];
					break;
					case 99:
						out[j] = eng[14];
					break;
					case 100:
						out[j] = eng[15];
					break;
					case 101:
						out[j] = eng[16];
					break;
					case 102:
						out[j] = eng[17];
					break;
					case 103:
						out[j] = eng[18];
					break;
					case 104:
						out[j] = eng[19];
					break;
					case 105:
						out[j] = eng[20];
					break;
					case 106:
						out[j] = eng[21];
					break;
					case 107:
						out[j] = eng[22];
					break;
					case 108:
						out[j] = eng[23];
					break;
					case 109:
						out[j] = eng[24];
					break;
					case 110:
						out[j] = eng[25];
					break;
					case 111:
						out[j] = eng[0];
					break;
					case 112:
						out[j] = eng[1];
					break;
					case 113:
						out[j] = eng[2];
					break;
					case 114:
						out[j] = eng[3];
					break;
					case 115:
						out[j] = eng[4];
					break;
					case 116:
						out[j] = eng[5];
					break;
					case 117:
						out[j] = eng[6];
					break;
					case 118:
						out[j] = eng[7];
					break;
					case 119:
						out[j] = eng[8];
					break;
					case 120:
						out[j] = eng[9];
					break;
					case 121:
						out[j] = eng[10];
					break;
					case 122:
						out[j] = eng[11];
					break;
					
		 	}
			break;
			case 110:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[13];
					break;
					case 98:
						out[j] = eng[14];
					break;
					case 99:
						out[j] = eng[15];
					break;
					case 100:
						out[j] = eng[16];
					break;
					case 101:
						out[j] = eng[17];
					break;
					case 102:
						out[j] = eng[18];
					break;
					case 103:
						out[j] = eng[19];
					break;
					case 104:
						out[j] = eng[20];
					break;
					case 105:
						out[j] = eng[21];
					break;
					case 106:
						out[j] = eng[22];
					break;
					case 107:
						out[j] = eng[23];
					break;
					case 108:
						out[j] = eng[24];
					break;
					case 109:
						out[j] = eng[25];
					break;
					case 110:
						out[j] = eng[0];
					break;
					case 111:
						out[j] = eng[1];
					break;
					case 112:
						out[j] = eng[2];
					break;
					case 113:
						out[j] = eng[3];
					break;
					case 114:
						out[j] = eng[4];
					break;
					case 115:
						out[j] = eng[5];
					break;
					case 116:
						out[j] = eng[6];
					break;
					case 117:
						out[j] = eng[7];
					break;
					case 118:
						out[j] = eng[8];
					break;
					case 119:
						out[j] = eng[9];
					break;
					case 120:
						out[j] = eng[10];
					break;
					case 121:
						out[j] = eng[11];
					break;
					case 122:
						out[j] = eng[12];
					break;
					
		 	}
			break;
			case 111:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[14];
					break;
					case 98:
						out[j] = eng[15];
					break;
					case 99:
						out[j] = eng[16];
					break;
					case 100:
						out[j] = eng[17];
					break;
					case 101:
						out[j] = eng[18];
					break;
					case 102:
						out[j] = eng[19];
					break;
					case 103:
						out[j] = eng[20];
					break;
					case 104:
						out[j] = eng[21];
					break;
					case 105:
						out[j] = eng[22];
					break;
					case 106:
						out[j] = eng[23];
					break;
					case 107:
						out[j] = eng[24];
					break;
					case 108:
						out[j] = eng[25];
					break;
					case 109:
						out[j] = eng[0];
					break;
					case 110:
						out[j] = eng[1];
					break;
					case 111:
						out[j] = eng[2];
					break;
					case 112:
						out[j] = eng[3];
					break;
					case 113:
						out[j] = eng[4];
					break;
					case 114:
						out[j] = eng[5];
					break;
					case 115:
						out[j] = eng[6];
					break;
					case 116:
						out[j] = eng[7];
					break;
					case 117:
						out[j] = eng[8];
					break;
					case 118:
						out[j] = eng[9];
					break;
					case 119:
						out[j] = eng[10];
					break;
					case 120:
						out[j] = eng[11];
					break;
					case 121:
						out[j] = eng[12];
					break;
					case 122:
						out[j] = eng[13];
					break;
					
		 	}
			break;
			case 112:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[15];
					break;
					case 98:
						out[j] = eng[16];
					break;
					case 99:
						out[j] = eng[17];
					break;
					case 100:
						out[j] = eng[18];
					break;
					case 101:
						out[j] = eng[19];
					break;
					case 102:
						out[j] = eng[20];
					break;
					case 103:
						out[j] = eng[21];
					break;
					case 104:
						out[j] = eng[22];
					break;
					case 105:
						out[j] = eng[23];
					break;
					case 106:
						out[j] = eng[24];
					break;
					case 107:
						out[j] = eng[25];
					break;
					case 108:
						out[j] = eng[0];
					break;
					case 109:
						out[j] = eng[1];
					break;
					case 110:
						out[j] = eng[2];
					break;
					case 111:
						out[j] = eng[3];
					break;
					case 112:
						out[j] = eng[4];
					break;
					case 113:
						out[j] = eng[5];
					break;
					case 114:
						out[j] = eng[6];
					break;
					case 115:
						out[j] = eng[7];
					break;
					case 116:
						out[j] = eng[8];
					break;
					case 117:
						out[j] = eng[9];
					break;
					case 118:
						out[j] = eng[10];
					break;
					case 119:
						out[j] = eng[11];
					break;
					case 120:
						out[j] = eng[12];
					break;
					case 121:
						out[j] = eng[13];
					break;
					case 122:
						out[j] = eng[14];
					break;
					
		 	}
			break;
			case 113:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[16];
					break;
					case 98:
						out[j] = eng[17];
					break;
					case 99:
						out[j] = eng[18];
					break;
					case 100:
						out[j] = eng[19];
					break;
					case 101:
						out[j] = eng[20];
					break;
					case 102:
						out[j] = eng[21];
					break;
					case 103:
						out[j] = eng[22];
					break;
					case 104:
						out[j] = eng[23];
					break;
					case 105:
						out[j] = eng[24];
					break;
					case 106:
						out[j] = eng[25];
					break;
					case 107:
						out[j] = eng[0];
					break;
					case 108:
						out[j] = eng[1];
					break;
					case 109:
						out[j] = eng[2];
					break;
					case 110:
						out[j] = eng[3];
					break;
					case 111:
						out[j] = eng[4];
					break;
					case 112:
						out[j] = eng[5];
					break;
					case 113:
						out[j] = eng[6];
					break;
					case 114:
						out[j] = eng[7];
					break;
					case 115:
						out[j] = eng[8];
					break;
					case 116:
						out[j] = eng[9];
					break;
					case 117:
						out[j] = eng[10];
					break;
					case 118:
						out[j] = eng[11];
					break;
					case 119:
						out[j] = eng[12];
					break;
					case 120:
						out[j] = eng[13];
					break;
					case 121:
						out[j] = eng[14];
					break;
					case 122:
						out[j] = eng[15];
					break;
					
		 	}
			break;
			case 114:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[17];
					break;
					case 98:
						out[j] = eng[18];
					break;
					case 99:
						out[j] = eng[19];
					break;
					case 100:
						out[j] = eng[20];
					break;
					case 101:
						out[j] = eng[21];
					break;
					case 102:
						out[j] = eng[22];
					break;
					case 103:
						out[j] = eng[23];
					break;
					case 104:
						out[j] = eng[24];
					break;
					case 105:
						out[j] = eng[25];
					break;
					case 106:
						out[j] = eng[0];
					break;
					case 107:
						out[j] = eng[1];
					break;
					case 108:
						out[j] = eng[2];
					break;
					case 109:
						out[j] = eng[3];
					break;
					case 110:
						out[j] = eng[4];
					break;
					case 111:
						out[j] = eng[5];
					break;
					case 112:
						out[j] = eng[6];
					break;
					case 113:
						out[j] = eng[7];
					break;
					case 114:
						out[j] = eng[8];
					break;
					case 115:
						out[j] = eng[9];
					break;
					case 116:
						out[j] = eng[10];
					break;
					case 117:
						out[j] = eng[11];
					break;
					case 118:
						out[j] = eng[12];
					break;
					case 119:
						out[j] = eng[13];
					break;
					case 120:
						out[j] = eng[14];
					break;
					case 121:
						out[j] = eng[15];
					break;
					case 122:
						out[j] = eng[16];
					break;
					
		 	}
			break;
			case 115:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[18];
					break;
					case 98:
						out[j] = eng[19];
					break;
					case 99:
						out[j] = eng[20];
					break;
					case 100:
						out[j] = eng[21];
					break;
					case 101:
						out[j] = eng[22];
					break;
					case 102:
						out[j] = eng[23];
					break;
					case 103:
						out[j] = eng[24];
					break;
					case 104:
						out[j] = eng[25];
					break;
					case 105:
						out[j] = eng[0];
					break;
					case 106:
						out[j] = eng[1];
					break;
					case 107:
						out[j] = eng[2];
					break;
					case 108:
						out[j] = eng[3];
					break;
					case 109:
						out[j] = eng[4];
					break;
					case 110:
						out[j] = eng[5];
					break;
					case 111:
						out[j] = eng[6];
					break;
					case 112:
						out[j] = eng[7];
					break;
					case 113:
						out[j] = eng[8];
					break;
					case 114:
						out[j] = eng[9];
					break;
					case 115:
						out[j] = eng[10];
					break;
					case 116:
						out[j] = eng[11];
					break;
					case 117:
						out[j] = eng[12];
					break;
					case 118:
						out[j] = eng[13];
					break;
					case 119:
						out[j] = eng[14];
					break;
					case 120:
						out[j] = eng[15];
					break;
					case 121:
						out[j] = eng[16];
					break;
					case 122:
						out[j] = eng[17];
					break;
					
		 	}
			break;
			case 116:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[19];
					break;
					case 98:
						out[j] = eng[20];
					break;
					case 99:
						out[j] = eng[21];
					break;
					case 100:
						out[j] = eng[22];
					break;
					case 101:
						out[j] = eng[23];
					break;
					case 102:
						out[j] = eng[24];
					break;
					case 103:
						out[j] = eng[25];
					break;
					case 104:
						out[j] = eng[0];
					break;
					case 105:
						out[j] = eng[1];
					break;
					case 106:
						out[j] = eng[2];
					break;
					case 107:
						out[j] = eng[3];
					break;
					case 108:
						out[j] = eng[4];
					break;
					case 109:
						out[j] = eng[5];
					break;
					case 110:
						out[j] = eng[6];
					break;
					case 111:
						out[j] = eng[7];
					break;
					case 112:
						out[j] = eng[8];
					break;
					case 113:
						out[j] = eng[9];
					break;
					case 114:
						out[j] = eng[10];
					break;
					case 115:
						out[j] = eng[11];
					break;
					case 116:
						out[j] = eng[12];
					break;
					case 117:
						out[j] = eng[13];
					break;
					case 118:
						out[j] = eng[14];
					break;
					case 119:
						out[j] = eng[15];
					break;
					case 120:
						out[j] = eng[16];
					break;
					case 121:
						out[j] = eng[17];
					break;
					case 122:
						out[j] = eng[18];
					break;
					
		 	}
			break;
			case 117:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[20];
					break;
					case 98:
						out[j] = eng[21];
					break;
					case 99:
						out[j] = eng[22];
					break;
					case 100:
						out[j] = eng[23];
					break;
					case 101:
						out[j] = eng[24];
					break;
					case 102:
						out[j] = eng[25];
					break;
					case 103:
						out[j] = eng[0];
					break;
					case 104:
						out[j] = eng[1];
					break;
					case 105:
						out[j] = eng[2];
					break;
					case 106:
						out[j] = eng[3];
					break;
					case 107:
						out[j] = eng[4];
					break;
					case 108:
						out[j] = eng[5];
					break;
					case 109:
						out[j] = eng[6];
					break;
					case 110:
						out[j] = eng[7];
					break;
					case 111:
						out[j] = eng[8];
					break;
					case 112:
						out[j] = eng[9];
					break;
					case 113:
						out[j] = eng[10];
					break;
					case 114:
						out[j] = eng[11];
					break;
					case 115:
						out[j] = eng[12];
					break;
					case 116:
						out[j] = eng[13];
					break;
					case 117:
						out[j] = eng[14];
					break;
					case 118:
						out[j] = eng[15];
					break;
					case 119:
						out[j] = eng[16];
					break;
					case 120:
						out[j] = eng[17];
					break;
					case 121:
						out[j] = eng[18];
					break;
					case 122:
						out[j] = eng[19];
					break;
					
		 	}
			break;
			case 118:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[21];
					break;
					case 98:
						out[j] = eng[22];
					break;
					case 99:
						out[j] = eng[23];
					break;
					case 100:
						out[j] = eng[24];
					break;
					case 101:
						out[j] = eng[25];
					break;
					case 102:
						out[j] = eng[0];
					break;
					case 103:
						out[j] = eng[1];
					break;
					case 104:
						out[j] = eng[2];
					break;
					case 105:
						out[j] = eng[3];
					break;
					case 106:
						out[j] = eng[4];
					break;
					case 107:
						out[j] = eng[5];
					break;
					case 108:
						out[j] = eng[6];
					break;
					case 109:
						out[j] = eng[7];
					break;
					case 110:
						out[j] = eng[8];
					break;
					case 111:
						out[j] = eng[9];
					break;
					case 112:
						out[j] = eng[10];
					break;
					case 113:
						out[j] = eng[11];
					break;
					case 114:
						out[j] = eng[12];
					break;
					case 115:
						out[j] = eng[13];
					break;
					case 116:
						out[j] = eng[14];
					break;
					case 117:
						out[j] = eng[15];
					break;
					case 118:
						out[j] = eng[16];
					break;
					case 119:
						out[j] = eng[17];
					break;
					case 120:
						out[j] = eng[18];
					break;
					case 121:
						out[j] = eng[19];
					break;
					case 122:
						out[j] = eng[20];
					break;
					
		 	}
			break;
			case 119:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[22];
					break;
					case 98:
						out[j] = eng[23];
					break;
					case 99:
						out[j] = eng[24];
					break;
					case 100:
						out[j] = eng[25];
					break;
					case 101:
						out[j] = eng[0];
					break;
					case 102:
						out[j] = eng[1];
					break;
					case 103:
						out[j] = eng[2];
					break;
					case 104:
						out[j] = eng[3];
					break;
					case 105:
						out[j] = eng[4];
					break;
					case 106:
						out[j] = eng[5];
					break;
					case 107:
						out[j] = eng[6];
					break;
					case 108:
						out[j] = eng[7];
					break;
					case 109:
						out[j] = eng[8];
					break;
					case 110:
						out[j] = eng[9];
					break;
					case 111:
						out[j] = eng[10];
					break;
					case 112:
						out[j] = eng[11];
					break;
					case 113:
						out[j] = eng[12];
					break;
					case 114:
						out[j] = eng[13];
					break;
					case 115:
						out[j] = eng[14];
					break;
					case 116:
						out[j] = eng[15];
					break;
					case 117:
						out[j] = eng[16];
					break;
					case 118:
						out[j] = eng[17];
					break;
					case 119:
						out[j] = eng[18];
					break;
					case 120:
						out[j] = eng[19];
					break;
					case 121:
						out[j] = eng[20];
					break;
					case 122:
						out[j] = eng[21];
					break;
					
		 	}
			break;
			case 120:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[23];
					break;
					case 98:
						out[j] = eng[24];
					break;
					case 99:
						out[j] = eng[25];
					break;
					case 100:
						out[j] = eng[0];
					break;
					case 101:
						out[j] = eng[1];
					break;
					case 102:
						out[j] = eng[2];
					break;
					case 103:
						out[j] = eng[3];
					break;
					case 104:
						out[j] = eng[4];
					break;
					case 105:
						out[j] = eng[5];
					break;
					case 106:
						out[j] = eng[6];
					break;
					case 107:
						out[j] = eng[7];
					break;
					case 108:
						out[j] = eng[8];
					break;
					case 109:
						out[j] = eng[9];
					break;
					case 110:
						out[j] = eng[10];
					break;
					case 111:
						out[j] = eng[11];
					break;
					case 112:
						out[j] = eng[12];
					break;
					case 113:
						out[j] = eng[13];
					break;
					case 114:
						out[j] = eng[14];
					break;
					case 115:
						out[j] = eng[15];
					break;
					case 116:
						out[j] = eng[16];
					break;
					case 117:
						out[j] = eng[17];
					break;
					case 118:
						out[j] = eng[18];
					break;
					case 119:
						out[j] = eng[19];
					break;
					case 120:
						out[j] = eng[20];
					break;
					case 121:
						out[j] = eng[21];
					break;
					case 122:
						out[j] = eng[22];
					break;
					
		 	}
			break;
			case 121:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[24];
					break;
					case 98:
						out[j] = eng[25];
					break;
					case 99:
						out[j] = eng[0];
					break;
					case 100:
						out[j] = eng[1];
					break;
					case 101:
						out[j] = eng[2];
					break;
					case 102:
						out[j] = eng[3];
					break;
					case 103:
						out[j] = eng[4];
					break;
					case 104:
						out[j] = eng[5];
					break;
					case 105:
						out[j] = eng[6];
					break;
					case 106:
						out[j] = eng[7];
					break;
					case 107:
						out[j] = eng[8];
					break;
					case 108:
						out[j] = eng[9];
					break;
					case 109:
						out[j] = eng[10];
					break;
					case 110:
						out[j] = eng[11];
					break;
					case 111:
						out[j] = eng[12];
					break;
					case 112:
						out[j] = eng[13];
					break;
					case 113:
						out[j] = eng[14];
					break;
					case 114:
						out[j] = eng[15];
					break;
					case 115:
						out[j] = eng[16];
					break;
					case 116:
						out[j] = eng[17];
					break;
					case 117:
						out[j] = eng[18];
					break;
					case 118:
						out[j] = eng[19];
					break;
					case 119:
						out[j] = eng[20];
					break;
					case 120:
						out[j] = eng[21];
					break;
					case 121:
						out[j] = eng[22];
					break;
					case 122:
						out[j] = eng[23];
					break;
					
		 	}
			break;
			case 122:
				switch((int)k[j]){ // a
					case 97:
						out[j] = eng[25];
					break;
					case 98:
						out[j] = eng[0];
					break;
					case 99:
						out[j] = eng[1];
					break;
					case 100:
						out[j] = eng[2];
					break;
					case 101:
						out[j] = eng[3];
					break;
					case 102:
						out[j] = eng[4];
					break;
					case 103:
						out[j] = eng[5];
					break;
					case 104:
						out[j] = eng[6];
					break;
					case 105:
						out[j] = eng[7];
					break;
					case 106:
						out[j] = eng[8];
					break;
					case 107:
						out[j] = eng[9];
					break;
					case 108:
						out[j] = eng[10];
					break;
					case 109:
						out[j] = eng[11];
					break;
					case 110:
						out[j] = eng[12];
					break;
					case 111:
						out[j] = eng[13];
					break;
					case 112:
						out[j] = eng[14];
					break;
					case 113:
						out[j] = eng[15];
					break;
					case 114:
						out[j] = eng[16];
					break;
					case 115:
						out[j] = eng[17];
					break;
					case 116:
						out[j] = eng[18];
					break;
					case 117:
						out[j] = eng[19];
					break;
					case 118:
						out[j] = eng[20];
					break;
					case 119:
						out[j] = eng[21];
					break;
					case 120:
						out[j] = eng[22];
					break;
					case 121:
						out[j] = eng[23];
					break;
					case 122:
						out[j] = eng[24];
					break;
					
		 	}
			break;
		}
	
	}
	
	int num[26] = {0};
	for (j = 0; j < i; j++) {
		switch(out[j]) {
			case 97: num[0] += 1; break;
			case 98: num[1] += 1; break;
			case 99: num[2] += 1; break;
			case 100: num[3] += 1; break;
			case 101: num[4] += 1; break;
			case 102: num[5] += 1; break;
			case 103: num[6] += 1; break;
			case 104: num[7] += 1; break;
			case 105: num[8] += 1; break;
			case 106: num[9] += 1; break;
			case 107: num[10] += 1; break;
			case 108: num[11] += 1; break;
			case 109: num[12] += 1; break;
			case 110: num[13] += 1; break;
			case 111: num[14] += 1; break;
			case 112: num[15] += 1; break;
			case 113: num[16] += 1; break;
			case 114: num[17] += 1; break;
			case 115: num[18] += 1; break;
			case 116: num[19] += 1; break;
			case 117: num[20] += 1; break;
			case 118: num[21] += 1; break;
			case 119: num[22] += 1; break;
			case 120: num[23] += 1; break;
			case 121: num[24] += 1; break;
			case 122: num[25] += 1; break;
		}
	}
	
	printf("%d", num[0]);
	for (j = 1; j < 26; j++) {
		printf(" %d", num[j]);
	}
	return 0;
}
