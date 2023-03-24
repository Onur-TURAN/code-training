int main() 
{

    int n;
    scanf("%d", &n);
    int arr[2*n-1][2*n-1];
    
    // initialize all the array with n
    // then replace everything except for the outer ring with n - 1 ...
    // until reaching 1
    for (int j = 0; j < n; j++){
        for (int i = j; i <= 2*n - 2 - j; i++){
            for (int k = j; k <= 2*n - 2 - j; k++){
                arr[i][k] = n - j;
            }
        }
    }
    
    // print the array    
    for (int i = 0; i < 2*n - 1; i++){
        for (int j = 0; j < 2*n -1; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
