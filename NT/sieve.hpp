vl sieve(int N){
  vl res(N + 1, 1);
  res[0] = res[1] = 0;
  for(int i = 2; i <= N; ++i){
    int j = 2 * i;
    while(j <= N){
      res[j] = 0; j += i;
    }
  }
  vl ans;
  FOR(i, N + 1){
    if(res[i]) ans.eb(i);
  }
  return ans;
}
