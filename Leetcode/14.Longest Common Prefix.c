char * longestCommonPrefix(char ** strs, int strsSize){
    int min=strlen(strs[0]);
    int index=0;
    char* temp;
    for(int i=1;i<strsSize;i++)
    {
        if(strlen(strs[i])<min)
        {
            min=strlen(strs[i]);
            index=i;
        }
    }
    temp = strs[index];
    for(int i=0;i<min;i++)
    {
        int word=strs[index][i];
        for(int j=0;j<strsSize;j++)
        {
            
            if(strlen(strs[j])==i||strs[j][i]!=word)
            {
                temp[i]='\0';
                
            }
        }
    }
    return temp;
}

// �t�@�ؼg�k 
//char * longestCommonPrefix(char ** strs, int strsSize){
//    char* temp;         //?�ؤ@???�r�ū�??�qtemp
//    int i, j;           
//    
//    if(strsSize <= 0)   //�P??�J�@???�O�_�j�_0�A�Y�O�_�s�b??�G?�r�Ŧ�F
//        return "";
//    
//    temp = strs[0];     //?�Ĥ@?�r�Ŧ�?�q����??temp�F
//    for(i=1; i<strsSize; i++){ 
//        
//        j=0;            //�C����??�r�Ŧ�Ĥ@?�r�Ť�?�F
//        
//        while(temp[j] && strs[i][j] && temp[j]==strs[i][j])     //�C?�@��r�Ŧ��Otemp?�q?���?
//            j ++;
//        
//        temp[j] = '\0'; //��??�����Z�I�utemp�F
//    }
//    
//    return temp;
//
//}
