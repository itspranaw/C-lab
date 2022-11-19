
int binary_to_decimal(int binary, int decimal, int weight);

int main()
{
    int binary, decimal, weight;

    decimal = 0, weight = 0;

    cout<< "Enter the binary num:";

    cin>> binary;

    decimal = binary_to_decimal();

    cout<< decimal << endl;

}

int binary_to_decimal(int binary, int decimal, int weight)
{
    int bit;

    if(binary>0)
    {
        bit = binary%10;
        decimal += bit*pow(2,weight);
        binary = binary/10
        weight++;

        binary_to_decimal();
    }
    else{
        return decimal;
    }
}
