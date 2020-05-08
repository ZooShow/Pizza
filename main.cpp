#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pizza {
protected:
    string name;
    string description;
    unsigned int price;
    int size;
    unsigned int howManyCheese;
    unsigned int howManySalt;
public:
    virtual string getName() const = 0;

    virtual unsigned int getSize() const = 0;

    virtual unsigned int getCountOfCheese() const = 0;

    virtual unsigned int getCountOfSalt() const = 0;

    virtual string getDescription() const = 0;

    virtual unsigned int getPrice() const = 0;

    virtual void addMoreSalt(int countOfSalt) = 0;

    virtual void addMoreCheese(int countOfCheese) = 0;
};

class PizzaWithPineaple : public Pizza {

public:
    PizzaWithPineaple(int size) {
        name = "Пицца с ананасами";
        description = "Пицца для маньяков";
        howManySalt = 0;
        howManyCheese = 0;
        switch (size) {
            case 1:
                this->size = 25;
                break;
            case 2:
                this->size = 30;
                break;
            case 3:
                this->size = 35;
                break;
            case 4:
                this->size = 40;
                break;
            default:
                cout << "вы ввели некоректное значение, размер выбран по умолчанию (25)" << endl;
                this->size = 25;
        }
        price = this->size * 15;
    }

    unsigned int getCountOfCheese() const override {
        return howManyCheese;
    }

    unsigned int getSize() const override {
        return size;
    }

    unsigned int getCountOfSalt() const override {
        return howManySalt;
    }

    string getName() const override {
        return name;
    }

    string getDescription() const override {
        return description;
    }

    unsigned int getPrice() const override {
        return price;
    }

    void addMoreCheese(int countOfCheese) override {
        howManyCheese += countOfCheese;
        price += countOfCheese * 20;
    }

    void addMoreSalt(int countOfSalt) override {
        howManySalt += countOfSalt;
        price += countOfSalt * 5;
    }
};

class PizzaMargarita : public Pizza {

public:
    PizzaMargarita(int size) {
        name = "Маргарита";
        description = "типичный classic, я бы сказал pleasantly";
        howManySalt = 0;
        howManyCheese = 0;
        switch (size) {
            case 1:
                this->size = 25;
                break;
            case 2:
                this->size = 30;
                break;
            case 3:
                this->size = 35;
                break;
            case 4:
                this->size = 40;
                break;
            default:
                cout << "вы ввели некоректное значение, размер выбран по умолчанию (25)" << endl;
                this->size = 25;
        }
        price = this->size * 22;
    }

    unsigned int getCountOfCheese() const override {
        return howManyCheese;
    }

    unsigned int getSize() const override {
        return size;
    }

    unsigned int getCountOfSalt() const override {
        return howManySalt;
    }

    string getName() const override {
        return name;
    }

    string getDescription() const override {
        return description;
    }

    unsigned int getPrice() const override {
        return price;
    }

    void addMoreCheese(int countOfCheese) override {
        howManyCheese += countOfCheese;
        price += countOfCheese * 22;
    }

    void addMoreSalt(int countOfSalt) override {
        howManySalt += countOfSalt;
        price += countOfSalt * 10;
    }
};

class PizzaWithExtraCheese : public Pizza {

public:
    PizzaWithExtraCheese(int size) {
        name = "Пицца с максимальным количеством сыра";
        description = "нет ничего кроме сыра и теста, получи сырный шок!";
        howManySalt = 0;
        howManyCheese = 0;
        switch (size) {
            case 1:
                this->size = 25;
                break;
            case 2:
                this->size = 30;
                break;
            case 3:
                this->size = 35;
                break;
            case 4:
                this->size = 40;
                break;
            default:
                cout << "вы ввели некоректное значение, размер выбран по умолчанию (25)" << endl;
                this->size = 25;
        }
        price = this->size * 20;
    }


    unsigned int getCountOfCheese() const override {
        return howManyCheese;
    }

    unsigned int getSize() const override {
        return size;
    }

    unsigned int getCountOfSalt() const override {
        return howManySalt;
    }

    string getName() const override {
        return name;
    }

    string getDescription() const override {
        return description;
    }

    unsigned int getPrice() const override {
        return price;
    }

    void addMoreCheese(int countOfCheese) override {
        howManyCheese += countOfCheese;
        price += countOfCheese * 30;
    }

    void addMoreSalt(int countOfSalt) override {
        howManySalt += countOfSalt;
        price += countOfSalt * 4;
    }
};

class PizzaWithMushroom : public Pizza {

public:
    PizzaWithMushroom(int size) {
        name = "Пицца с грибами";
        description = "типичная классека, нравится всем адекватным людям";
        howManySalt = 0;
        howManyCheese = 0;
        switch (size) {
            case 1:
                this->size = 25;
                break;
            case 2:
                this->size = 30;
                break;
            case 3:
                this->size = 35;
                break;
            case 4:
                this->size = 40;
                break;
            default:
                cout << "вы ввели некоректное значение, размер выбран по умолчанию (25)" << endl;
                this->size = 25;
        }
        price = this->size * 20;
    }

    unsigned int getSize() const override {
        return size;
    }

    unsigned int getCountOfCheese() const override {
        return howManyCheese;
    }

    unsigned int getCountOfSalt() const override {
        return howManySalt;
    }

    string getName() const override {
        return name;
    }

    string getDescription() const override {
        return description;
    }

    unsigned int getPrice() const override {
        return price;
    }

    void addMoreCheese(int countOfCheese) override {
        howManyCheese += countOfCheese;
        price += countOfCheese * 19;
    }

    void addMoreSalt(int countOfSalt) override {
        howManySalt += countOfSalt;
        price += countOfSalt * 8;
    }
};

class PizzaAsian : public Pizza {

public:
    PizzaAsian(int size) {
        name = "Азиатская пицца";
        description = "поговаривают, из-за нее наступила эпидемия коронавируса";
        howManySalt = 0;
        howManyCheese = 0;
        switch (size) {
            case 1:
                this->size = 25;
                break;
            case 2:
                this->size = 30;
                break;
            case 3:
                this->size = 35;
                break;
            case 4:
                this->size = 40;
                break;
            default:
                cout << "вы ввели некоректное значение, размер выбран по умолчанию (25)" << endl;
                this->size = 25;
        }
        price = this->size * 25;
    }

    unsigned int getCountOfCheese() const override {
        return howManyCheese;
    }

    unsigned int getSize() const override {
        return size;
    }

    unsigned int getCountOfSalt() const override {
        return howManySalt;
    }

    string getName() const override {
        return name;
    }

    string getDescription() const override {
        return description;
    }

    unsigned int getPrice() const override {
        return price;
    }

    void addMoreCheese(int countOfCheese) override {
        howManyCheese += countOfCheese;
        price += countOfCheese * 28;
    }

    void addMoreSalt(int countOfSalt) override {
        howManySalt += countOfSalt;
        price += countOfSalt * 13;
    }
};

class PizzaOriginal : public Pizza {

public:
    PizzaOriginal(int size) {
        name = "Оригинальная пицца";
        description = "необычное сочетание ингридиентов, подойдет не всем";
        howManySalt = 0;
        howManyCheese = 0;
        switch (size) {
            case 1:
                this->size = 25;
                break;
            case 2:
                this->size = 30;
                break;
            case 3:
                this->size = 35;
                break;
            case 4:
                this->size = 40;
                break;
            default:
                cout << "вы ввели некоректное значение, размер выбран по умолчанию (25)" << endl;
                this->size = 25;
        }
        price = this->size * 13;
    }

    unsigned int getCountOfCheese() const override {
        return howManyCheese;
    }

    unsigned int getSize() const override {
        return size;
    }

    unsigned int getCountOfSalt() const override {
        return howManySalt;
    }

    string getName() const override {
        return name;
    }

    string getDescription() const override {
        return description;
    }

    unsigned int getPrice() const override {
        return price;
    }

    void addMoreCheese(int countOfCheese) override {
        howManyCheese += countOfCheese;
        price += countOfCheese * 40;
    }

    void addMoreSalt(int countOfSalt) override {
        howManySalt += countOfSalt;
        price += countOfSalt * 9;
    }
};

class PizzaRoman : public Pizza {

public:
    PizzaRoman(int size) {
        name = "Римская пицца";
        description = "возможно наличие легионеров";
        howManySalt = 0;
        howManyCheese = 0;
        switch (size) {
            case 1:
                this->size = 25;
                break;
            case 2:
                this->size = 30;
                break;
            case 3:
                this->size = 35;
                break;
            case 4:
                this->size = 40;
                break;
            default:
                cout << "вы ввели некоректное значение, размер выбран по умолчанию (25)" << endl;
                this->size = 25;
        }
        price = this->size * 14;
    }

    unsigned int getCountOfCheese() const override {
        return howManyCheese;
    }

    unsigned int getSize() const override {
        return size;
    }

    unsigned int getCountOfSalt() const override {
        return howManySalt;
    }

    string getName() const override {
        return name;
    }

    string getDescription() const override {
        return description;
    }

    unsigned int getPrice() const override {
        return price;
    }

    void addMoreCheese(int countOfCheese) override {
        howManyCheese += countOfCheese;
        price += countOfCheese * 18;
    }

    void addMoreSalt(int countOfSalt) override {
        howManySalt += countOfSalt;
        price += countOfSalt * 16;
    }
};

class PizzaWithMeat : public Pizza {

public:
    PizzaWithMeat(int size) {
        name = "Мясная пицца";
        description = "максимальное содержание мяса, для настоящих мужиков";
        howManySalt = 0;
        howManyCheese = 0;
        switch (size) {
            case 1:
                this->size = 25;
                break;
            case 2:
                this->size = 30;
                break;
            case 3:
                this->size = 35;
                break;
            case 4:
                this->size = 40;
                break;
            default:
                cout << "вы ввели некоректное значение, размер выбран по умолчанию (25)" << endl;
                this->size = 25;
        }
        price = this->size * 40;
    }

    unsigned int getCountOfCheese() const override {
        return howManyCheese;
    }

    unsigned int getCountOfSalt() const override {
        return howManySalt;
    }

    unsigned int getSize() const override {
        return size;
    }

    string getName() const override {
        return name;
    }

    string getDescription() const override {
        return description;
    }

    unsigned int getPrice() const override {
        return price;
    }

    void addMoreCheese(int countOfCheese) override {
        howManyCheese += countOfCheese;
        price += countOfCheese * 40;
    }

    void addMoreSalt(int countOfSalt) override {
        howManySalt += countOfSalt;
        price += countOfSalt * 8;
    }
};

class PizzaAmericanDream : public Pizza {

public:
    PizzaAmericanDream(int size) {
        name = "Американская мечта";
        description = "если у вас есть нефть, она объявит вам войну";
        howManySalt = 0;
        howManyCheese = 0;
        switch (size) {
            case 1:
                this->size = 25;
                break;
            case 2:
                this->size = 30;
                break;
            case 3:
                this->size = 35;
                break;
            case 4:
                this->size = 40;
                break;
            default:
                cout << "вы ввели некоректное значение, размер выбран по умолчанию (25)" << endl;
                this->size = 25;
        }
        price = this->size * 19;
    }

    unsigned int getCountOfCheese() const override {
        return howManyCheese;
    }

    unsigned int getSize() const override {
        return size;
    }

    unsigned int getCountOfSalt() const override {
        return howManySalt;
    }

    string getName() const override {
        return name;
    }

    string getDescription() const override {
        return description;
    }

    unsigned int getPrice() const override {
        return price;
    }

    void addMoreCheese(int countOfCheese) override {
        howManyCheese += countOfCheese;
        price += countOfCheese * 14;
    }

    void addMoreSalt(int countOfSalt) override {
        howManySalt += countOfSalt;
        price += countOfSalt * 7;
    }
};

class PizzaMexican : public Pizza {

public:
    PizzaMexican(int size) {
        name = "Мексиканская пицца";
        description = "против нее Трамп воззводит стены";
        howManySalt = 0;
        howManyCheese = 0;
        switch (size) {
            case 1:
                this->size = 25;
                break;
            case 2:
                this->size = 30;
                break;
            case 3:
                this->size = 35;
                break;
            case 4:
                this->size = 40;
                break;
            default:
                cout << "вы ввели некоректное значение, размер выбран по умолчанию (25)" << endl;
                this->size = 25;
        }
        price = this->size * 14;
    }

    unsigned int getCountOfCheese() const override {
        return howManyCheese;
    }

    unsigned int getSize() const override {
        return size;
    }

    unsigned int getCountOfSalt() const override {
        return howManySalt;
    }

    string getName() const override {
        return name;
    }

    string getDescription() const override {
        return description;
    }

    unsigned int getPrice() const override {
        return price;
    }

    void addMoreCheese(int countOfCheese) override {
        howManyCheese += countOfCheese;
        price += countOfCheese * 19;
    }

    void addMoreSalt(int countOfSalt) override {
        howManySalt += countOfSalt;
        price += countOfSalt * 18;
    }
};

class Order {
    vector<const Pizza *> pizzas;
    unsigned int totalPrice;
public:
    Order(){
       totalPrice = 0;

    }
    void add(Pizza &pizza) {
        pizzas.push_back(&pizza);
        totalPrice += pizza.getPrice();
    }

    void print() {
        size_t size = pizzas.size();
        if (size == 0) {
            cout << "Вы еще ничего не заказали" << endl;
        } else {
            for (size_t i = 0; i < size; ++i) {
                cout << (i + 1) << ". " << pizzas[i]->getName() << endl <<
                     "    " << pizzas[i]->getDescription() << endl
                     << " соли: "
                     << pizzas[i]->getCountOfSalt() << ", сыра: "
                     << pizzas[i]->getCountOfCheese() << ", размер: "
                     << pizzas[i]->getSize() << " на сумму: " <<
                     pizzas[i]->getPrice() << " руб." << endl;
                cout << " итого : " << totalPrice << " руб.";
            }
        }
    }

};

void add_cheese(Pizza &pizza, int a) {
    pizza.addMoreCheese(a);
};

void add_salt(Pizza &pizza, int a) {
    pizza.addMoreSalt(a);
}

int main() {
    Order order;
    int count = -1;
    int typeOfPizza;
    int size;
    int countOfSalt;
    int countOfCheese;
    std::string add = "";
    std::string salt = "";
    std::string cheese = "";
    while (count != 0) {
        cout << "Хотите добавит пиццу в заказ? (y/n)" << endl;
        cin >> add;
        if (add == "y") {
            cout << "Выберите пиццу (нажмите на соответствующую цифру):" << endl;
            cout << "1. С ананасами" << endl
                 << "2. Маргарита" << endl
                 << "3. Экстра сырная" << endl
                 << "4. С грибами" << endl
                 << "5. Азиатская" << endl
                 << "6. Оригинальная" << endl
                 << "7. Римская" << endl
                 << "8. Мясная" << endl
                 << "9. Американская мечта" << endl
                 << "10. Мексиканская" << endl;
            cin >> typeOfPizza;
            cout << "Какого размера пиццу хотите?" << endl;
            cout << "1. 25см" << endl
                 << "2. 30см" << endl
                 << "3. 35см" << endl
                 << "4. 40см" << endl;
            cin >> size;
            cout << "Хотите добавить соль? (y/n)" << endl;
            cin >> salt;
            if (salt == "y") {
                cout << "Сколько соли вы хотите?" << endl;
                cin >> countOfSalt;
            } else {
                countOfSalt = 0;
            }
            cout << "Хотите добавить сыр? (y/n)" << endl;
            cin >> cheese;
            if (cheese == "y") {
                cout << "Сколько соли вы хотите?" << endl;
                cin >> countOfCheese;
            } else {
                countOfCheese = 0;
            }
            switch (typeOfPizza) {
                case 1: {
                    PizzaWithPineaple *pizzaWithPineaple = new PizzaWithPineaple(size);
                    add_cheese(*pizzaWithPineaple, countOfCheese);
                    add_salt(*pizzaWithPineaple, countOfSalt);
                    order.add(*pizzaWithPineaple);
                }
                    break;
                case 2: {
                    PizzaMargarita *pizzaMargarita = new PizzaMargarita(size);
                    add_cheese(*pizzaMargarita, countOfCheese);
                    add_salt(*pizzaMargarita, countOfSalt);
                    order.add(*pizzaMargarita);
                }
                    break;

                case 3: {
                    PizzaWithExtraCheese *pizzaWithExtraCheese = new PizzaWithExtraCheese(size);
                    add_cheese(*pizzaWithExtraCheese, countOfCheese);
                    add_salt(*pizzaWithExtraCheese, countOfSalt);
                    order.add(*pizzaWithExtraCheese);
                }
                    break;
                case 4: {
                    PizzaWithMushroom *pizzaWithMushroom = new PizzaWithMushroom(size);
                    add_cheese(*pizzaWithMushroom, countOfCheese);
                    add_salt(*pizzaWithMushroom, countOfSalt);
                    order.add(*pizzaWithMushroom);
                }
                    break;
                case 5: {
                    PizzaAsian *pizzaAsian = new PizzaAsian(size);
                    add_cheese(*pizzaAsian, countOfCheese);
                    add_salt(*pizzaAsian, countOfSalt);
                    order.add(*pizzaAsian);
                }
                    break;
                case 6: {
                    PizzaOriginal *pizzaOriginal = new PizzaOriginal(size);
                    add_cheese(*pizzaOriginal, countOfCheese);
                    add_salt(*pizzaOriginal, countOfSalt);
                    order.add(*pizzaOriginal);
                }
                    break;
                case 7: {
                    PizzaRoman *pizzaRoman = new PizzaRoman(size);
                    add_cheese(*pizzaRoman, countOfCheese);
                    add_salt(*pizzaRoman, countOfSalt);
                    order.add(*pizzaRoman);
                }
                    break;
                case 8: {
                    PizzaWithMeat *pizzaWithMeat = new PizzaWithMeat(size);
                    add_cheese(*pizzaWithMeat, countOfCheese);
                    add_salt(*pizzaWithMeat, countOfSalt);
                    order.add(*pizzaWithMeat);
                }
                    break;
                case 9: {
                    PizzaAmericanDream *pizzaAmericanDream = new PizzaAmericanDream(size);
                    add_cheese(*pizzaAmericanDream, countOfCheese);
                    add_salt(*pizzaAmericanDream, countOfSalt);
                    order.add(*pizzaAmericanDream);
                }
                    break;
                case 10: {
                    PizzaMexican *pizzaMexican = new PizzaMexican(size);
                    add_cheese(*pizzaMexican, countOfCheese);
                    add_salt(*pizzaMexican, countOfSalt);
                    order.add(*pizzaMexican);
                }
            }
        } else {
            count = 0;
        }
    }
    cout << "Ваш заказ:" << endl;
    order.print();
}
