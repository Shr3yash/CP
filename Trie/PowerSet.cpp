//print all subsequences of the string

for(auto& it: str)
  sz++;

for(int i=0; i <= ((1<<sz)-1); ++i){
  string new="";
  for(j=0; j<sz-1; ++j)
    if((i&(1<<j)) new+=s[i];
       // and print or count whatever.
}
