EXEMPLO 1

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

int main(){
	int sock;
	
	if((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0){
		perror("socket failed");
		exit(EXIT_FAILURE);
	}else{
		printf("socket open sucess..");
	}
	printf("\n%d", sock);
	
	return 0;
}

----------------------------------------------------------------------------------------------------------------
EXEMPLO 2

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

int main() {
  int sock;
  
  sock = socket(AF_INET6. SOCK_DGRAM, 0);
  
  if(sock < 0) {
      perror("socket failed");
      exit(EXIT_FAILURE);
  }else{
      printf("socket open sucess..); 
 }
 printf("\n%d", sock);
 shutdown(sock, 2);
 
 return 0;
}

----------------------------------------------------------------------------------------------------------------
EXEMPLO 3

int main(){
  int sock, dados;

  sock = socket(AF_INET6, SOCK_DGRAM, 0);

    if(sock < 0) {
      perror("socket failed");
      exit(EXIT_FAILURE);
  }else{
      printf("socket open sucess..); 
 }
 dados = listen(sock, 5);
 printf("%d", dados);

 return 0;
}

----------------------------------------------------------------------------------------------------------------
FORK EXEMPLO:

#include <stdio.h>
#include <unistd.h>

int main() {
  fork();
  fork();
  fork();
  
  printf("hello world\n");
  return 0;

}

----------------------------------------------------------------------------------------------------------------
FORK EXEMPLO 1

#include <stdio.h>
#include <unistd.h>

void forkexample(){

  if (fork() == 0)
         printf("hello from child!\n");
  else
          printf("hello from parent!\n");
}
int main(){
  forkexample();
  return 0;
}

----------------------------------------------------------------------------------------------------------------
FORK EXEMPLO 2

#include <stdio.h>
#include <unistd.h>

int main(){
 int n = 2;
 for (int i = 0; i < n; i++)
     fork();
  return 0;
}

----------------------------------------------------------------------------------------------------------------
FORK EXEMPLO 3

#include <stdio.h>
#include <unistd.h>

void forkexample(){
  int x = 1;
  
  if (fork() == 0)
     printf("child has x = %d\n", ++x);
  else
     printf("parent has x = %d\n", --x);
}
int main(){
  forkexample();
  return 0;
}
