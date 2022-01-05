1. step02-1 最大公因數,老師先用瘋狂程設-程式廣場-迴圈-最大公因數那題示範一下 16287 及 45924 找最大公因數, 解釋它是在國一教分數的約分時要用最大公因數。接下來使用暴力for迴圈從 1到a去試每個數字,只要都整除,就是最大公因數。最後在CodeBlocks試著寫出來。請截圖上傳。

2. step02-2_使用「輾轉相除法」計算最大公因數,老師先講解它的口訣「除法」「餘數」「輾轉」,也就是持續 大a 除 中b 得到小c, 老大換人當,老二換人當,老三是它們的餘數,持續做,直到c是0,則b是答案。請用 CodeBlocks 實作, 截圖上傳。

3. step03-1_利用while迴圈寫的輾轉相除法,用到了while迴圈、餘數、數字又改來改去,很難看懂、很難理解,所以老師印了一堆數字,讓大家了解a大的, b中的, c小的, 它的過程怎麼變化。看著印出來的數字,就看到過程,幫助大家了解輾轉相除法在做什麼事。請用 CodeBlocks 實作, 截圖上傳。

4. step03-2 講解完輾轉相除法,同學們雖然懂口訣,但是寫程式時,沒有信心寫得出來, 因為我們知道程式只要有一個步驟順序出錯,答案可能完全錯誤。所以老師把轉展相除法,發明一個黑盒子 int box(int a, int b) 來解決, 如果a是0,return b, 如果b是0, return a, 不然就再 return box(b, a%b) 再往下去問。請用 CodeBlocks 實作, 截圖上傳。

5. step03-3 使用 C Tutor 把剛剛的程式跑跑看。不過老師做了一些修改,方便你看懂, 請跑過它, 並搞懂它。再截圖上傳。

///Week15-5.cpp step03-3

///函式呼叫函式 (黑盒子)

#include <stdio.h>

///這個box會把答案算出來

int box(int a, int b)

{   ///  老大   老二

    int ans;

    if(a==0){

      ans=b;

      return ans;

    }

    if(b==0){

      ans=a;

      return ans;

    }

    ans = box( b, a%b );

    return ans;

} ///   再問 新老大 新老二

int main()

{

    int a=987654321, b=123456789;

    //scanf("%d %d", &a, &b);不要讀

    int ans = box(a,b);

    printf("%d", ans);

}



6. 試著複習上週的git 指令, 將你的 github 倉庫clone複製下來, 將今天的程式 week15-1.cpp, week15-2.cpp, week15-3.cpp, week15-4.cpp, week15-5.cpp week15-6.cpp 放到 倉庫的 week15 的資料夾中、修正你的 README.md (介紹你的每週目錄), 整理你的 GitHub 倉庫的目錄, 使用 add(加入你的修正) 及 commit(確認你的修正並附上訊息), push(推上雲端), 再截圖上傳


