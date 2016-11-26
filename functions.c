void convert(char line[40], int line1[40]){
    int i = 0;
    while(i < 40){
        if((int)line[i] >= 32 && (int)line[i] <= 126){
            line1[i] = (int)line[i];
            i++;
        }else{
            break;
        }
    }
}

void decrypt(char line1[40], char line2[40], int lineOne[40], int lineTwo[40]){
    encryptOne(line2,lineTwo,0);
    encryptTwo(line1,lineOne,0);
    int i = 0, j = 0;
    char* decrypt = (char*)malloc(90 * sizeof(char));
    while(i < 80){
        if(line1[i] != '\0' || line1[i] != '\n'){
            decrypt[j] = line1[i];
            j++;
        }else if(line2[i] == '\0'){
            break;
        }
        if(line2[i] != '\0' || line2[i] != '\n'){
            decrypt[j] = line2[i];
            j++;
        }
        i++;
    }
    printf("The decrypted message is %s",decrypt);
}

void encryptOne(char output[40], int line[40],int x){
    int i = 0;
    while(i < 80){
        if(line[i] >= 32 && line[i] <= 126){
            if(line[i] <= 125){
                line[i] += 1;
            }else{
                line[i] = 32;
            }
            output[i] = line[i];
        }else{
            break;
        }
        i++;
    }
    if(x == 1){
        printf("Row 1 is encrypted as %s",output);
    }
}

void encryptTwo(char output[40], int line[40], int x){
    int i = 0;
    while(i < 80){
        if(line[i] >= 32 && line[i] <= 126){
            if(line[i] >= 33){
                line[i] -= 1;
            }else{
                line[i] = 126;
            }
            output[i] = line[i];
        }else{
            break;
        }
        i++;
    }
    if(x == 1){
        printf("Row 2 is encrypted is as %s",output);
    }
}
