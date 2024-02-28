//#include "Tests.h"
//
//void TestsProdus()
//{
//    unsigned int cod = 123;
//    float pret = 9.99;
//    std::string nume = "Product A";
//    Produs product(cod, pret, nume);
//
//    assert(product.GetCod() == cod);
//    assert(product.GetPret() == pret);
//    assert(product.GetNume() == nume);
//
//    float newPret = 14.99;
//    std::string newNume = "Updated Product A";
//
//    product.SetPret(newPret);
//    product.SetNume(newNume);
//
//    assert(product.GetPret() == newPret);
//    assert(product.GetNume() == newNume);
//
//    Produs equalProduct(cod, newPret, newNume);
//    assert(product == equalProduct);
//
//    Produs differentProduct(cod, pret, nume);
//    assert(!(product == differentProduct));
//}
//
//void TestsRepo()
//{
//    FileRepository repo("Produse.txt");
//
//    Produs product1(1, 9.99, "Product A");
//    Produs product2(2, 19.99, "Product B");
//    Produs product3(3, 14.99, "Product C");
//
//    repo.Add(product1);
//    repo.Add(product2);
//    repo.Add(product3);
//
//    std::vector<Produs> allProducts = repo.GetAll();
//    assert(allProducts.size() == 3);
//    assert(allProducts[0] == product1);
//    assert(allProducts[1] == product2);
//    assert(allProducts[2] == product3);
//
//    repo.RemoveByIndex(0);
//    allProducts = repo.GetAll();
//    assert(allProducts.size() == 2);
//    assert(allProducts[0] == product2);
//    assert(allProducts[1] == product3);
//
//    Produs modifiedProduct(2, 24.99, "Modified Product B");
//    repo.Modify(0, modifiedProduct);
//    allProducts = repo.GetAll();
//    assert(allProducts.size() == 2);
//    assert(allProducts[0] == modifiedProduct);
//    assert(allProducts[1] == product3);
//
//    repo.RemoveByValue(modifiedProduct);
//    allProducts = repo.GetAll();
//    assert(allProducts.size() == 1);
//    assert(allProducts[0] == product3);
//}
//
//void TestsService()
//{
//    FileRepository repo("Produse.txt");
//    Service service(repo);
//
//    Produs product1(1, 9.99, "Product A");
//    Produs product2(2, 19.99, "Product B");
//    Produs product3(3, 14.99, "Product C");
//
//    service.Add(product1);
//    service.Add(product2);
//    service.Add(product3);
//
//    std::vector<Produs> allProducts = service.GetAll();
//    assert(allProducts.size() == 3);
//    assert(allProducts[0] == product1);
//    assert(allProducts[1] == product2);
//    assert(allProducts[2] == product3);
//
//    service.RemoveByIndex(0);
//    allProducts = service.GetAll();
//    assert(allProducts.size() == 2);
//    assert(allProducts[0] == product2);
//    assert(allProducts[1] == product3);
//
//    Produs modifiedProduct(2, 24.99, "Modified Product B");
//    service.Modify(0, modifiedProduct);
//    allProducts = service.GetAll();
//    assert(allProducts.size() == 2);
//    assert(allProducts[0] == modifiedProduct);
//    assert(allProducts[1] == product3);
//
//    service.RemoveByValue(modifiedProduct);
//    allProducts = service.GetAll();
//    assert(allProducts.size() == 1);
//    assert(allProducts[0] == product3);
//}
//
//void TestsRunAll()
//{
//    TestsProdus();
//    TestsRepo();
//    TestsService();
//}