    FILE *fp;
    fp=fopen("test2.txt", "w");
    if (fp == NULL)
{
    printf("Error opening file!\n");
    exit(1);
}
fprintf(fp, "Gender:Male\n");
fprintf(fp, "Gender:Female\n");