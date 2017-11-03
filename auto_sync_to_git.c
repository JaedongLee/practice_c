#include <stdio.h>
#include <stdlib.h>

int main() {
	chdir("f:\\practise\\C");
	system("git add .");
	system("git commit -m 'test'");
    system("git push -u origin master");
    return 0;
}