#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main(int argc, char *argv[])
{
    int Case = 0;
    vector<int> heights;
    cin >> Case;
    for (int z = 0; z < Case; z++)
    {
        int number = 0, low_height = 0, high_height = 0;
        heights.clear();
        cin >> number;
        for (int i = 0; i < number; i++)
        {
            int height = 0;
            cin >> height;
            heights.push_back(height);
        }
        for (int i = 1; i < heights.size(); i++)
        {
            if (heights[i] > heights[i - 1])
                high_height++;
            if (heights[i] < heights[i - 1])
                low_height++;
        }
        cout << "Case " << z + 1 << ": " << high_height << ' ' << low_height << '\n';
    }
    return 0;
}