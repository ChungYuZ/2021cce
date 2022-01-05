1. step01-1 看影片複習「泡泡排序法」,讓大家再做一次上週寫的(部分)泡泡排序法,做一輪,看它的結果。利用CodeBlocks實作, 截圖上傳

2. step02-1 繼續泡泡排序法,搭配YouTube影片,看到它後面再做幾次後,就排好了。到底要做幾次呢 如果最差的狀況,要做9次。請把上週做過的這個課堂作業,再做一次。利用CodeBlocks實作, 截圖上傳

3. step02-2 再看另一種排序法-選擇排序法Selection Sort,左手i,右手j,要讓左手小、右手大,所以如果反過來,就交換。外面的迴圈很簡單,左手i,右手j,寫出它的兩層迴圈, 這便是Selection Sort選擇排序法, 口訣是: 左手i, 右手j, 小的留在舞台上。利用CodeBlocks實作, 截圖上傳

4. step03-1 為了熟悉Selection Sort, 下週要考它。所以我們利用瘋狂程設-第13週的考題,利用練習模式做一次。百數,所以要用陣列宣告。前面先Input讀入100個數,最後面Output印出100個數。中間的核心Selection Sort的口訣是 左手i,右手j,希望小到大,所以反過來,就要交換。比較容易出錯的是j=i+1的地方。請使用瘋狂程設的練習模式,並截圖上傳。

5.今天的程式 week12-1.cpp, week12-2.cpp, week12-3.cpp, week12-4.cpp, 上傳到 GitHub 的 week12 的資料夾中, 並整理你的 GitHub 倉庫的目錄(尤其是Week03之前亂亂的,要整理), 再截圖上傳







1. Chrome設定,變成預設Browser, 再登入GitHub

2. 安裝 Git for Windows 軟體



3. 開啟 cmd 小黑視窗

3.1. cd desktop 走到桌面

3.2. 把雲端的倉庫 複製 下來

     git clone https://github.com/你的帳號/2021cce

3.3. 把你的修改,加進去倉庫管理的.git資料

     cd 2021cce 進入你的倉庫

     git add . 都加進去

3.4. git commit -m "這是我第一次用git指令commit"

     簽名,說你要怎麼上傳。不過第1次上傳出錯,因為要說「你是誰」

     但你的Chrome太早登入。現在真的要簽名了!!! 只做一次

          git config --global user.email "jsyeh@mail.mcu.edu.tw"

          git config --global user.name "jsyeh"

3.5. 最後,把它推送到雲端

     git push
