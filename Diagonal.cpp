//fungsi untuk mencari dengan cara diagonal :D
for(a=0;a<15;a++)
	{
		for(b=0;b<15;b++)
		{
			if(words[0]==soal[a][b])
			{
				for(c=0;c<length;c++)
				{
					if(words[c]==soal[a+c][b+c] )
					{
						tmp=c;
			//}
			//else
			//{mp=c;
				    }
					else
					{
						tmp!=c;
						break;
					}
					cout<<tmp<<endl;
					
				}
			}
			if(tmp==(batas-1))
			//{
				temp+=1;
				temp+=0;
			//}
		}
}
