int floydpiramida(int n)
{
    int number = 1;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<i; j++)
        {

           printf("%3d", number++);

        }

        printf("\n");
    }
    return 1;
}
