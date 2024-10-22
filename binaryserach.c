#include <stdio.h>
int main() {
    int a[30], i, n, item, s = 0, e, mid, found = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the search element: ");
    scanf("%d", &item);
    e = n - 1;
    while (s <= e) {
        mid = (s+e)/2; 
        if (a[mid] == item) 
        {
            printf("Item %d is present at index %d.\n", item, mid);
            found = 1; 
            break;
        } 
        else if (a[mid] < item)
        {
            s = mid + 1; 
        } 
        else 
        {
            e = mid - 1; 
        }
    }
    if (!found)
    {
        printf("Item %d not found in the array.\n", item);
    }
}

