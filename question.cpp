vector<int> solve(vector<int> input)
{
    int input1 = input[0];
    int input2 = input[1];

    vector<int> blank;
    if(input1 % 2 != 0) return blank;

    int output1 = input1/2 - input2;
    int output2 = 2*input2 - input1/28;

    if(output1 < 0) return blank;
    if(output2 < 0) return blank;

    vector<int> ans;
    ans.push_back(output1);
    ans.push_back(outpu2);
    return ans;

}