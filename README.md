#  DSA Study Guide｜DSA 總整理

##  目錄（Table of Contents）

1. 基礎資料結構
2. 進階資料結構
3. 圖論
4. 演算法技巧
5. 數學演算法
6. 模擬與 STL 容器技巧
7. 進階資料結構補充
8. 計算理論與複雜度
9. 演算法分析與證明技巧
10. 補充資源

---

## 一、基礎資料結構（Elementary Structures）

### 陣列與字串（Array & String） 
- 基礎操作、查詢與修改 (略)
- 二分搜尋、prefix sum、差分陣列
- 字串反轉、子字串計數、滑動視窗
- KMP、Rabin-Karp、Z-algorithm
- Manacher：最長回文子字串
- 字典序排列與 `next_permutation`

### 鏈結串列（Linked List）
- 單向、雙向、循環鏈結串列
- 快慢指標、判環、找中點
- Merge sort on Linked List
- `LRU Cache`：List + HashMap 結合

### 堆疊與佇列（Stack & Queue）
- 基礎操作、括號匹配、Min Stack
- 單調棧 / 單調佇列（如直方圖最大矩形）
- 後序求值、中序轉後序、運算子優先順序
- 滑動視窗最大值（Monotonic Queue）

### 雜湊（Hash Table / Hash Map）
- 雜湊碰撞處理（開放定址、鏈結法）
- `unordered_map` / `unordered_set` 技巧
- 雜湊 + 順序結構應用（Group Anagram）

### 位元運算（Bit Manipulation）
- XOR, AND, OR, 補數、lowbit
- mask 枚舉、popcount、Gray Code
- Bit Trie、bitset

---

## 二、進階資料結構（Advanced Structures）

### 樹（Tree）
- DFS / BFS 遍歷
- 建樹：in+pre、in+post
- 最近公共祖先（LCA）：倍增、Euler Tour + RMQ
- 子樹和、重心、Tree DP
- 樹鏈剖分（HLD）、DSU on Tree（進階）

### BST（二元搜尋樹）
- 基本操作：查詢、插入、刪除
- 查找第 k 小、前驅後繼
- 平衡樹：AVL, Splay, Red-Black Tree

### Trie（字典樹）
- 插入、查詢、刪除、prefix 查詢
- Aho-Corasick（多字串比對）、bit-trie

### Heap（堆）
- Min/Max Heap、優先佇列
- Top-K、Median from stream
- K-way Merge（合併 k 個排序陣列）

### 區間資料結構（Range Structures）
- Segment Tree：區間查詢 + 區間更新（含 Lazy Propagation）
- Binary Indexed Tree（Fenwick Tree）
- 動態開點線段樹、可持久化線段樹（Persistent Segment Tree）
- 線段樹合併、主席樹（進階）

### Union-Find（Disjoint Set）
- 合併集合、找代表元
- 路徑壓縮 + 按秩合併
- Kruskal MST、動態連通性

---

## 三、圖論（Graph）

### 基礎操作
- 鄰接串列 / 矩陣
- DFS / BFS 遍歷
- 連通塊計算、拓樸排序（Kahn, DFS）

### 最短路徑
- Dijkstra（小根堆優化）
- Bellman-Ford、SPFA
- Floyd-Warshall（任意點對）

### 最小生成樹（MST）
- Prim（堆優化）、Kruskal（Union-Find）、Borůvka（進階）

### 強連通分量（SCC）
- Kosaraju、Tarjan（low-link）

### 二分圖與匹配
- 染色法判斷二分圖
- 最大匹配：Hungarian, Hopcroft-Karp
- König 定理：匹配 vs 覆蓋

### 網路流
- Ford-Fulkerson、Edmonds-Karp（BFS）、Dinic（分層圖）
- 最大流 = 最小割（最小割定理）

---

## 四、演算法技巧（Algorithmic Techniques）

### 排序與搜尋
- Merge Sort、Quick Sort、Heap Sort
- 計數排序、桶排序、基數排序
- 二分搜尋、Ternary Search（極值點）

### 雙指標與分治
- 尺取法、滑動視窗、Divide and Conquer
- 最近點對（Closest Pair in 2D）
- Karatsuba 乘法、矩陣乘法加速

### 動態規劃（DP）
- 一維 / 二維 / 區間 DP（LIS, LCS, Edit Distance）
- 記憶化 DFS、自底向上
- 背包問題（0/1、完全、多重、分組）
- 狀態壓縮 DP（Subset DP、TSP）
- DP 優化技巧：單調隊列、斜率、四邊形不等式

### 貪婪法（Greedy）
- 活動選擇、區間覆蓋、最少平台
- Huffman 編碼樹、交換論證

### 回溯法（Backtracking）
- N 皇后、數獨、全排列、Subset
- 剪枝與位元壓縮優化

---

## 五、數學演算法（Mathematics）

### 整數與模運算
- GCD, LCM、擴展歐幾里得
- 快速冪、模反元素、中國剩餘定理（CRT）

### 質數與篩法
- Eratosthenes 篩、線性篩（歐拉）
- 素因數分解、質因數統計

### 組合數學
- 組合數 C(n, k)、Pascal’s Triangle
- Catalan 數列、整數分拆

### 幾何演算法
- 點、向量、點積 / 叉積
- 判斷相交、點到線距
- 凸包（Graham Scan、Andrew）

---

## 六、模擬與 STL 容器技巧

- 差分陣列、掃描線演算法
- 模擬：表格更新、區域統計
- STL 容器應用：`priority_queue`, `map`, `set`, `deque`
- 多資料結構整合：堆 + map、線段樹 + 佇列

---

## 七、進階資料結構補充

- **B-Tree / B+ Tree**：多路搜尋樹，範圍查詢與資料庫索引
- **Suffix Tree**：Ukkonen 建構（O(n)）、查詢重複子字串
- **Suffix Array**：倍增法、SA-IS 建構、LCP Array
- **Rope / Treap / Scapegoat Tree**：動態字串與平衡 BST

---

## 八、計算理論與複雜度（Complexity Theory）

### 複雜度類別
- P：多項式時間可解
- NP：多項式時間可驗證
- NP-Complete（NPC）：所有 NP 問題可多項式歸約至該問題
- NP-Hard：不一定在 NP 中，比 NPC 更難

### 常見 NPC 問題
- Subset Sum、3-SAT、Vertex Cover、TSP、Hamiltonian Path、CLIQUE、Independent Set

### 歸約與證明
- Polynomial-time Reduction（多項式時間歸約）
- Cook-Levin Theorem（SAT 是第一個 NPC 問題）

---

## 九、演算法分析與證明技巧

- Big-O / Θ / Ω 表記法
- Master Theorem（分治遞迴分析）
- Amortized Analysis（aggregate, accounting, potential）
- 迴圈不變式（loop invariant）
- 歸納法、反證法
- 貪婪證明：交換引理

---
