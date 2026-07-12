#include <iostream> 
#include <vector> 
#include <numeric> 
int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    int k; 
    std::cin >> n >> k;

 int eligible_students_count = 0; 
  for (int i = 0; i < n; ++i) {
        int yi; 
        std::cin >> yi;

        if (yi + k <= 5) {
            eligible_students_count++;
        }
    }

    int max_teams = eligible_students_count / 3;
    std::cout << max_teams << std::endl;

    return 0;
}

