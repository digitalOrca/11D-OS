#include "shell.h"

void launch_shell(int n){
	string ch = (string) malloc(200);	//allocate 200 bytes of memory
	do{
		print(ch);
		print("11DOS (");
		print(int_to_str(n));
		print("): ~$");
		ch = readStr();
		if(strEql(ch, "cmd")){
			print("\nNew recursive shell launched\n");
			launch_shell(n+1);
		}else if(strEql(ch, "exit")){
			print("\nGood Bye!\n");
		}else{
			print("\nUnrecognized command. (use 'help' for list of command)\n");
		}
	} while (!strEql(ch,"exit"));
}
