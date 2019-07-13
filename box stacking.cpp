truct box
{
    int h;
    int w;
    int l;
};
bool compare(box a, box b)
{
    return ((a.w * a.l) > (b.w * b.l));
}
int maxHeight(int height[],int width[],int length[],int n)
{
    box rot[3*n];
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        rot[index].h = height[i];
        rot[index].w = width[i];
        rot[index].l = length[i];
        index++;
        rot[index].h = width[i];
        rot[index].w = min(height[i], length[i]);
        rot[index].l = max(height[i], length[i]);
        index++;
        rot[index].h = length[i];
        rot[index].w = min(height[i], width[i]);
        rot[index].l = max(height[i], width[i]);
        index++;
    }
     n = n*3;
    sort(rot, rot + n, compare);
    int msh[n];
    for(int i = 0; i < n; i++)
    msh[i] = rot[i].h;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(rot[j].w > rot[i].w && rot[j].l > rot[i].l
            && msh[i] < msh[j] + rot[i].h)
            msh[i] = msh[j] + rot[i].h;
        }
    }
    int m = msh[0];
    for(int i = 1; i < n; i++)
    {
        if(m < msh[i])
        m = msh[i];
    }
    return m;
}
