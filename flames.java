/*Program for Flames*/

import java.util.*;
class flames{
	static int i,j,count=0,len,temp=0;
	public static void main(String []args){
		Scanner s = new Scanner(System.in);
		String s1=s.next();
		String s2=s.next();
		s1=s1.toLowerCase();
		s2=s2.toLowerCase();
		char[] str1 = new String(s1).toCharArray();
		char[] str2 = new String(s2).toCharArray();
		System.out.println(s1+"  "+s2);
		System.out.println(s1.length()+"  "+s2.length());
		for(i=0;i<s1.length();i++){
			for(j=0;j<s2.length();j++){
				if(str1[i]==str2[j]) {
					count++;
					str1[i]=' ';str2[j]=' ';
					break;
				}
			}
		}
		len=s1.length()+s2.length()-(2*count);
		System.out.println(len);
		
		count=0;
		char[] flames = new String("flames").toCharArray();
		for(i=0;i<=6&&temp!=5;i++){
			if(i==6) i=0;
			if(flames[i]!=' ') 
			{
				count++;
				if(len==count) {
					flames[i]=' '; 
					count=0;
					temp++;
				}
			}
		}
		if(len==0)
			System.out.println("Friends");
		for(i=0;i<6&&len!=0;i++){
			if(flames[i]!=' '){
				switch(flames[i]){
					case 'f':
					System.out.println("Friends");
					break;
					case 'l':
					System.out.println("Love");
					break;
					case 'a':
					System.out.println("Attraction");
					break;
					case 'm':
					System.out.println("Marriage");
					break;
					case 'e':
					System.out.println("Enemy");
					break;
					case 's':
					System.out.println("Sibling");
					break;
				}
			}
		}
	}
}
