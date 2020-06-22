//Source - https://www.hackerrank.com/challenges/30-linked-list-deletion/problem

import java.io.*;
import java.util.*;
class Node{
	int data;
	Node next;
	Node(int d){
        data=d;
        next=null;
    }
	
}
class Solution
{
    public static Node removeDuplicates(Node head)
    {
      if (head==null)
        return null;
    Set<Integer> set =new HashSet<Integer>();
     Node prevNode = head;
    Node n =prevNode.next;
    if(n==null)
        return head;
    set.add(prevNode.data);

    while(n!=null)
        {
        if(set.contains(n.data))
            {
            prevNode.next=n.next;
            n=n.next;
        }
        else{
            set.add(n.data);
              prevNode=n;
        n=n.next;
        }
    }
    return head;

    }

	 public static  Node insert(Node head,int data)
     {
        Node p=new Node(data);			
        if(head==null)
            head=p;
        else if(head.next==null)
            head.next=p;
        else
        {
            Node start=head;
            while(start.next!=null)
                start=start.next;
            start.next=p;

        }
        return head;
    }
    public static void display(Node head)
        {
              Node start=head;
              while(start!=null)
              {
                  System.out.print(start.data+" ");
                  start=start.next;
              }
        }
        public static void main(String args[])
        {
              Scanner sc=new Scanner(System.in);
              Node head=null;
              int T=sc.nextInt();
              while(T-->0){
                  int ele=sc.nextInt();
                  head=insert(head,ele);
              }
              head=removeDuplicates(head);
              display(head);
       }
    }
    
