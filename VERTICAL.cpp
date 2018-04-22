//fungsi vertical

int a,b;
for(a=0; a<15; a++)
{
   for(b=0; b<15;b++)
	{
		if(words[0]==soal[b][a] )
			{
				for(c=0;c<length;c++)
				{
				if(words[c]==soal[b+a][a] )
				{
					tmp=c;
				}
					else
					{
						tmp!=c;
						break;
					}
					cout<<tmp<<endl;
					
				}
			}
			//if(tmp==(batas-1))
			//{
				temp+=1;
			//}
			//else
			//{
				temp+=0;
			//}
		}
}
   
   
   
