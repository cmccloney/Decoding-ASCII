
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
