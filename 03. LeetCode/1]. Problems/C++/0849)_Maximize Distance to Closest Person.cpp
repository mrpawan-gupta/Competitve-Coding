class Solution
{
public:
    int maxDistToClosest(vector<int> &seats)
    {
        int i = 0, maxDist = 0, lastPerson;

        // Placing Alex in the beginning
        while (seats[i] == 0)
        {
            i++;
        }
        maxDist = i;
        lastPerson = i;

        // Placing Alex in b/w two people
        for (; i < seats.size(); i++)
        {
            if (seats[i] == 1)
            {
                // Alter => maxDist = max(max,(i-lastPerson)/2)
                maxDist = maxDist > (i - lastPerson) / 2 ? maxDist : (i - lastPerson) / 2;
                lastPerson = i;
            }
        }

        // Placing Alex at the end
        // Alter => maxDist = max(max,n-1-lastPerson)
        maxDist = maxDist > i - lastPerson - 1 ? maxDist : i - lastPerson - 1;

        return maxDist;
    }
};