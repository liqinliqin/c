extern void a(char *);
int main(int ac,char **av){
	static char s[]="Hello World\n";
	a(s);
	return 0;
}
