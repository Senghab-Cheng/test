#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Product{
    private:
        int id;
        string name;
        double price;
    public:
        void setName(string name) {
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void setPrice(double price) {
            this->price = price;
        }
        double getPrice(){
            return this->price;
        }
        void setId(int id) {
            this->id = id;
        }
        int getId() { 
            return this->id;
        }
};

class Order{
    private:
        int id;
        string name;
        string remark;
        vector<Product> products;
    public:
        void setId(int id) {
            this->id = id;
        }
        int getId() {
            return id;
        }
        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return name;
        }
        void setRemark(string remark) {
            this->remark = remark;
        }
        string getRemark() {
            return remark;
        }
        void addProduct(Product product) {
            products.push_back(product);
        }
        vector<Product> getProducts(){
            return products;
        }
};
int main(){
    system("clear");
    Product p1;
    p1.setId(1233232);
    cout << p1.getId()<< endl;
    p1.setName("John Doe");
    cout << p1.getName()<< endl;
    p1.setPrice(19.99);
    cout << ", Price: $" << p1.getPrice();

    //
    Order order;
    order.setId(456789);
    order.setName("Coca Order");
    order.setRemark("coca with no ice");
    order.addProduct(p1);
    
    //
    cout<<"[+] List all project"<<endl;
    for(Product p: order.getProducts()){
        cout<<p.getId()<<endl;
        cout<<", "<<p.getName()<<endl;
        cout<<", "<<p.getPrice()<<endl;
    }


    
    

    return 0;
}