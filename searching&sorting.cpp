#include<iostream>
using namespace::std;

main ()
{
  char M;
  int jumlah=5,beli,jb,harga[5],TOTAL=0,total[5],diskon,TOTAL2,u,temp=0;
  string n,masuk,barang,nm;
  cout<<"\n================program kasir===================";
  string nomor[5]={"A001","A002","A003","A007","A008"};
  string nama[5]={"Bayu","Irvan","Susanti","Diana","Roni"};
  cout<<"\napakah anda member :"; cin>>M;
  if (M=='y'||M=='Y')
  {
      cout<<"masukkan nomor identitas   :"; cin>>masuk;
      for(int i=0;i<jumlah;i++)
    {
        if(masuk==nomor[i])
        {
            n=nama[i];
        }
    }
     cout<<"Nama     :"<<n<<endl;
     cout<<"Berapa macam jumlah barang yang di beli :"; cin>>beli;
     for(int i=1;i<=beli;i++)
    {
        cout<<"Barang ke-"<<i<<endl;
        cout<<"Nama Barang      :"; cin>>barang;
        cout<<"jumlah barang    :"; cin>>jb;
        cout<<"harga barang     :"; cin>>harga[i];
        total[i]=jb*harga[i];
        cout<<"Total harga      :"<<total[i]<<endl;
        TOTAL=TOTAL+total[i];
    }
        cout<<"Total belanjaan :"<<TOTAL<<endl;
        cout<<"\nmember mendapat diskon : 5%";
        diskon=TOTAL*0.05;
        TOTAL2=TOTAL-diskon;
        cout<<"\njumlah yang dibayar  :"<<TOTAL2;
       for (int i=beli-1; i>=0; i--)
        {
            for (int u=1; u<=i; u++)
            {
                if(total[u]>total[u+1])
                {
                    temp=total[u];
                    total[u]=total[u+1];
                    total[u+1]=temp;
                }
            }
        }
        for (int t=1; t<=beli; t++ )
        {
            cout<<"\ntotal belanja ke-"<<t<<" : "<<total[t]<<endl;
        }
  }

  else
  {
    cout<<"masukkan nama   :"; cin>>nm;
    cout<<"Berapa macam jumlah barang yang di beli :"; cin>>beli;
     for(int i=1;i<=beli;i++)
    {
        cout<<"Barang ke-"<<i<<endl;
        cout<<"Nama Barang      :"; cin>>barang;
        cout<<"jumlah barang    :"; cin>>jb;
        cout<<"harga barang     :"; cin>>harga[i];
        total[i]=jb*harga[i];
        cout<<"Total harga      :"<<total[i]<<endl;
        TOTAL=TOTAL+total[i];
    }
        cout<<"Total belanjaan :"<<TOTAL<<endl;
        for (int i=beli-1; i>=0; i--)
        {
            for (int u=1; u<=i; u++)
            {
                if(total[u]>total[u+1])
                {
                    temp=total[u];
                    total[u]=total[u+1];
                    total[u+1]=temp;
                }
            }
        }
        for (int t=1; t<=beli; t++ )
        {
            cout<<"total belanja ke-"<<t<<" : "<<total[t]<<endl;
        }
  }

}

