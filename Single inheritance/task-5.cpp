// Question:

// Create a C++ program that demonstrates single inheritance with parameterized constructors and method overloading. Define a base class Product with private member variables productName and price, and a public parameterized constructor to initialize these values. Include methods to get these values. Then, derive a class DiscountedProduct from Product which adds a private member variable discount (as a percentage) and provides overloaded methods to apply and display discounts.

// Requirements:

// Define the base class Product with:

// Private member variables productName (of type std::string) and price (of type double).
// A public parameterized constructor that initializes productName and price.
// Public methods getProductName and getPrice to get the product name and price.
// Define the derived class DiscountedProduct which inherits from Product with:

// A private member variable discount (of type double).
// A public parameterized constructor that initializes productName, price, and discount.
// A public method applyDiscount that calculates and returns the new price after applying the discount.
// An overloaded public method applyDiscount that takes an additional parameter for a flat amount discount and calculates the new price after applying both the percentage and the flat amount discount.
// A public method displayDetails that prints "Product Name: [productName], Original Price: [price], Discount: [discount]%, Discounted Price: [discountedPrice]".
// In the main function:

// Create an instance of the DiscountedProduct class using the parameterized constructor.
// Call the displayDetails method to display the product's details including the discounted price with percentage and flat amount discounts applied.
#include<iostream>
using namespace std;
class Product{
    private:
    string productName;
    double price;
    public:
    Product(string productName,double price)
    {
        this->productName= productName;
        this->price = price;
    }
    string getproductName()
    {
        return productName;
    }
    double getPrice()
    {
        return price;
    }

};
class DiscountedProduct:public Product{
    private:
    double discount;
    public:
    DiscountedProduct(string productName,double price ,double discount):Product(productName,price),discount(discount)
    {}
    double applydiscount()
    {
      return getPrice()*(1-discount/100);
    }
     double applydiscount(double flatamount)
    {
      double discountedPrice = getPrice()*(1-discount/100);
      return discountedPrice - flatamount;
    }
    void displaydetail( double flatamount = 0.0)
    { 
        double discountedPrice = applydiscount(flatamount);
        cout<<"ProductName:"<<getproductName()<<endl;
        cout<<"OriginalPrice:"<<getPrice()<<endl;
        cout<<"Discount:"<<discount<<endl;
        cout<<"DiscontedPrice:"<<discountedPrice<<endl;


    }

};

int main()
{   DiscountedProduct D1("Book",300,10.3);
    D1.displaydetail();
    
    return 0;
}