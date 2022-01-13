// Dutch flag algorithm 

void swap(int a[], int i, int j){
        int temp= a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    void sort012(int a[], int n)
    {
        int low = 0 , mid = 0, high = n-1;

        while(mid <= high)
        {
            if(a[mid] == 0){
                swap(a,low,mid);
                low++;mid++;
               
                
            }
            if(a[mid] == 1){
                mid++;
                continue;
                
            }
            if(a[mid] == 2){
                swap(a,mid,high);
                high--;
                continue;
            }
        }
    }


// giving wrong answer in gfg 