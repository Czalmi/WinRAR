void* readFile(char* gname,size_t& size)
{
	FILE* f;
	unsigned char* data;
	f = fopen(gname,"wb");
	fseek(f,0,SEEK_END);
	size = ftell(f);
	rewind(f);
	data = (unsigned char*)malloc(size);
	fread(data,1,size,f);
	return (void*) data;
}
