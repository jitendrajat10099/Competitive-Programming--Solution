import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner scn=new Scanner(System.in);
		int t=scn.nextInt();
	
		for(int i=0;i<t;i++){
		    String str=scn.next();
		   postfix(str);
		}
	}
	public static void postfix(String str){
	    Stack<Integer>st=new Stack<>();
	    for(int i=0;i<str.length();i++){
	        char ch=str.charAt(i);
	        
	        if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
	            int val2=st.pop();
	            int val1=st.pop();
	            int val=operation(val1,val2,ch);
	            st.push(val);
	        }
	        else
	        st.push(ch-'0');
	    }
	    int val=st.pop();
	    System.out.println(val);
	}
	public static int operation(int val1,int val2,char ch){
	    if(ch=='+')
	    return val1+val2;
	    else if(ch=='-')
	    return val1-val2;
	    else if(ch=='/')
	    return val1/val2;
	    else
	    return val1*val2;
	}
}
