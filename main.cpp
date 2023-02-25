int  getSum(vector <int> v)
{
    int sum = 0;
    for(int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    return sum;
}
int  getMin(vector <int> v)
{
    int minIndex = 0;
    for(int i = 1; i < v.size(); i++)
    {
        if(v[i] < v[minIndex])
        {
            minIndex = i;
        }
    }
    return (v[minIndex]);
}
int main(void)
{
    vector <int> v {1,2,3,4,5,6,7,8,9,10};
    cout << getSum(v) << "\n";
    cout << getMin(v) << "\n";
    return 0;
}