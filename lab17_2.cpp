void myString(char*& p, int N){
	p = new char [N+1];    
	for(int i = 0; i < N;i++) p[i] = 'A'+i;
	p[N] = '\0';
}