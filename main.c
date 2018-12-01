    #include <stdio.h>
    #include <string.h>
 
    int main()
    {
      FILE *fp;
      char buffer[1024];
      fp = fopen("text.txt", "r+");

      if(fp==NULL){
         printf("Не удалось открыть файл");
        return 1;
      }
      fgets(buffer, sizeof(buffer), fp);
      for(int i=sizeof(buffer); i>=0; i--){
          printf("%c",buffer[i]);   
      } 
      printf("\n");
      
      return 0;
    }