1. step01-1_加減乘除的運算,先看整數除法,有2個符號(斜線、百分比)分別代表除法、餘數., 請試試看除法的2個運算, 並截圖上傳
```c
#include <stdio.h>
int main()
{
    int a=123 , b=10;

    printf( "%d\n" , a/b );
    printf( "%d\n" , a%b );
}
```

2. step02-1_有小數點的float浮點數 vs. 整數,在除法不同。請截圖上傳
```c
#include <stdio.h>
int main()
{
    int a=123 , b=10;

    int ans= a/b;

    float ans2=123.0/10.0;

    printf("¾ã¼Æ°£¾ã¼Æ %d\n",ans);
    printf("floatªº°£ªk %f\n",ans2);
}
```

3. step02-2_介紹課本的printf()的書寫格式, float 及 double 都是有小數點的數,重點是小數點後面有幾位,全部有幾位

4. google: keyboard ninja 找到鍵盤忍者, 練習用 Home Row, 練習不要看鍵盤,玩一盤! 截圖上傳 (晚點上傳) (更強的軟體: TTOTD)

5. step03-2_有些運算之後再教,今天先用到 大於等於 的運算, 並在 if(判斷)裡用到它, 配合 else 來做下週的考試題目, 請在瘋狂程設-(左上角程式廣場-分支的那一關 A019 成績評等, 利用if() 及 else 來完成它。請截圖上傳。
