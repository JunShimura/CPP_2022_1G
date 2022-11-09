double getAverage(const int *a, int length) {
  double sum;		// 合計値
  double average;	// 平均値
  int i;		// 配列の要素番号（ループカウンタ）

  // 配列の合計値を求める
  sum = 0;
  for (i = 0; i < length; i++) {
    // ポインタが指し示している要素の値を読み出し集計する
    sum += *a;

    // ポインタを更新する（次の要素を指し示す）
    a++;
  }

  // 配列の平均値を求める
  average = (double)sum / length;

  // 配列の合計値を返す
  return average;
}
