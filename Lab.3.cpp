struct Leg 
{
    int length;
};

struct Arm
{
    int power;
};

struct Person
{
    std::array<Leg, 2> legs; // Массив с типом Leg содержащий 2 экземпляра/объекта
    Arm arms[2];
};

int main()
{
    Person person; // Это объект типа Person. Он содержит в себе массив из 2х экземпляров типа Leg и 2х экземпляров типа Arm
}

// Представленные Типы: int, Leg, Arm, Person, std::array<Leg, 2>, Arm[2]
// Представленный Объект: person(main), в этом person есть 4 других объекта (2 legs и 2 arms), а в каждом из этих объекта по одному другому
// В обоих Legs по одному объекту length, а в двух arms есть по одному объекту power. Суммарно объектов - 9 объектов