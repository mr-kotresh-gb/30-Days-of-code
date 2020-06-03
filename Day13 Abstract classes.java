//Source - https://www.hackerrank.com/challenges/30-abstract-classes/problem

import java.util.*;

abstract class Book {
    String title;
    String author;
    Book(String title, String author)
    {
        this.title = title;
        this.author = author;
    }
    abstract void display();
}

class MYBook extends Book
{
    int newprice;    
    void MyBook(String title, String author,int price){
    super(title,author);
    this.newprice=price;
}

public void display()
{
        System.out.println("Title:"+title);
        System.out.println("Author:"+author);
        System.out.println("Price:"+newprice);
    }
}

public class Solution
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        String title = scanner.nextLine();
        String author = scanner.nextLine();
        int price = scanner.nextInt();
        scanner.close();
        Book book = new MyBook(title, author, price);
        book.display();
    }
}
