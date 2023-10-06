using System;
using System.Collections.Generic;
using System.Collections;
using System.Linq;

/* Link list Node */
public class Node {
public int key;
public Node next;
public Node(int d)
{
	key = d;
	next = null;
}
}

// function to sort 
class GFG : IComparer<int>
{
	public int Compare(int x, int y)
	{
		if (x == 0 || y == 0)
		{
			return 0;
		}

		// CompareTo() method
		return x.CompareTo(y);

	}
}

class HelloWorld {

	public static Node newNode(int key){
		Node temp = new Node(key);
		temp.next = null;
		return temp;
	}

	static void Main() {
		/* Let us create two sorted linked lists to test
		the above functions. Created lists shall be
			a: 5->10->15->40
			b: 2->3->20 */
		Node a = newNode(5);
		a.next = newNode(10);
		a.next.next = newNode(15);
		a.next.next.next = newNode(40);

		Node b = newNode(2);
		b.next = newNode(3);
		b.next.next = newNode(20);

		List<int> v = new List<int>();

		while(a!=null){
			v.Add(a.key);
			a=a.next;
		}
		while(b!=null){
			v.Add(b.key);
			b=b.next;
		}


		GFG gg = new GFG();
		v.Sort(gg);

		Node result= newNode(-1);
		Node temp=result;
		for(int i=0;i<v.Count;i++){
			result.next=newNode(v[i]);
			result=result.next;
		}
		temp=temp.next;
		Console.WriteLine("Resultant Merge Linked List Is :");
		while(temp!=null){
			Console.Write(temp.key + " ");
			temp=temp.next;
		}

	}
}

// The code is contributed by Jai Chhabra
