#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<string.h>
#include<netdb.h>
#include<netinet/in.h>
#define MAX 80
#define PORT 8080
#define SA struct sock_addr

void func(int connfd)
{
    char buff[MAX];
    int n;
    for(;;){
        bzero(buff,MAX);
        read(connfd,buff,sizeof(buff));
        printf("From client :%s \t To client:",buff);
        bzero(buff,MAX);
        n=0;
        while((buff[n++)= getchar!())='\n')
        write(connfd,buff,sizeof(buff));

        if(strncmp("exit",buff,4)==0)
        {
            printf("server exit\n");
            break;
        }
    }
}
int main()
{
    int sockfd,connfd,len;
    struct sockaddr_in servaddr,cli;
    sockfd=socket(AF_INET,SOCK_STREAM,0);
    if(sockfd== -1)
    {
        printf("socket creation failed.. \n");
        exit(0);
    }
    else
    printf("Socket successfully created\n");
    bzero(&servaddr,sizeof(servaddr));

    servaddr.sin_family=AF_INET;
     servaddr.sin_addr.s_addr=hton1(INADDR_ANY);
      servaddr.sin_port = htons(PORT);
   
    // Binding newly created socket to given IP and verification
    if ((bind(sockfd, (SA*)&servaddr, sizeof(servaddr))) != 0) {
        printf("socket bind failed...\n");
        exit(0);
    }
    else
        printf("Socket successfully binded..\n");
   
    // Now server is ready to listen and verification
    if ((listen(sockfd, 5)) != 0) {
        printf("Listen failed...\n");
        exit(0);
    }
    else
        printf("Server listening..\n");
    len = sizeof(cli);
   
    // Accept the data packet from client and verification
    connfd = accept(sockfd, (SA*)&cli, &len);
    if (connfd < 0) {
        printf("server accept failed...\n");
        exit(0);
    }
    else
        printf("server accept the client...\n");
   
    // Function for chatting between client and server
    func(connfd);
   
    // After chatting close the socket
    close(sockfd);
}
}
