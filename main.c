int fn_try(int x)
{
	x++;
	return x;
}
void reset_handler(void)
{
	int y=0;
	while (1)
	y=fn_try(y);
}
