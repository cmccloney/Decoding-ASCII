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
