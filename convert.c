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
