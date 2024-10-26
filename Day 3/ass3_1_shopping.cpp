#include <iostream>
#include <string>
using namespace std;
class shop
{
private:
    int itemcode[100];
    float itemprice[100];
    int count;

public:
    void setcount()
    {
        count = 0;
    }
    void getitem();
    void displaysum();
    void itemremove();
    void display();
    };
    void shop ::getitem()

    {

        cout << "Enter the itemcode:\n";
        cin >> itemcode[count];
        cout << "Enter the itemprice:\n";
        cin >> itemprice[count];
        count++;
    }
    void shop ::displaysum()
    {
        float sum = 0;
        for (int i = 0; i < count; i++)
        {
            sum += itemprice[i];
        }
        cout << "The Total sum of the price is: " << sum << "\n";
    }
    void shop ::itemremove()
    {
        int a;
        cout << "Enter the itemcode you want to remove: ";
        cin >> a;
        for (int i = 0; i < count; i++)
        {

            if (itemcode[i] == a)
            {
                itemprice[i] = 0;
            }
        }
    }
    void shop ::display()
    {
        cout << "Code price";
        for (int i = 0; i < count; i++)
        {
            cout << "Item" << itemcode[i];
            cout << "Price" << itemprice[i];
        }
        cout << "\n";
    }

int main()
{
    shop order;
    order.setcount();
    int x;
    do
    {
        cout << "1.Add item\n2.Display item\n3.Remove item\n4.Display sum\n5.Quit\nEnter your choice\n";
        cin >> x;
        switch (x)
        {
        case 1:
            order.getitem();

            break;
        case 2:
            order.displaysum();

            break;
        case 3:
            order.itemremove();

            break;
        case 4:
            order.display();

            break;
        case 5:
            break;

        default:
            cout << "Wrong input";
            break;
        }
    } while (x != 5);
    return 0;
}
