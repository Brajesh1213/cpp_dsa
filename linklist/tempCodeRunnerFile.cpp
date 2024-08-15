vector<float>v{a,b,c};
   sort(v.begin(),v.end());
   float k=ceil(v[2]/2);
   if(k-1<=(b+c)){
    cout<<a+b+c;
   }
   else cout<<-1;