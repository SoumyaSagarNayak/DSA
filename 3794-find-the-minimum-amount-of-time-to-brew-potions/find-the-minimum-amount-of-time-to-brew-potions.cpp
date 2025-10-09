class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
       int n = skill.size();
        int m = mana.size();

        long long sumSkill = 0;
        for (int x : skill) sumSkill += x;

        long long prevWizardDone = sumSkill * (long long)mana[0];

        for (int j = 1; j < m; ++j) {
            long long prevPotionDone = prevWizardDone;

            for (int i = n - 2; i >= 0; --i) {
                prevPotionDone -= (long long)skill[i + 1] * mana[j - 1];
                prevWizardDone = max(
                    prevPotionDone,
                    prevWizardDone - (long long)skill[i] * mana[j]
                );
            }

            prevWizardDone += sumSkill * (long long)mana[j];
        }

        return prevWizardDone;
    }
};