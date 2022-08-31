# 💎  Container Identifier Guide 
# What is Resolver 👻
Resolver is an ultralight Dependency Injection / Service Locator framework for Swift 5.1 on iOS.
[Github guidelines for Resolver](https://github.com/hmlongco/Resolver) 

# 💎  Container Identifier Class 👻
Container Identifier helps you to **register** and **resolve** with a name in an easier way than expected.
All you need to do is:
1. Extend `ContainerIdentifier` struct 
2. Add your new identifier as a static object on it.

like the following snippet code:-

```
extension ContainerIdentifier {
    public static var local = ContainerIdentifier(id: "local")
    public static var remote = ContainerIdentifier(id: "remote")
    ......
}
```
### How to use it 👻👻

- 🍿 In case of Registertaion of the Container
    ```
    register( name: .local, factory: { LocalGraphQLApiManager() as NetworkManagerProtocol })
    register( name: .remote, factory: { RemoteGraphQLApiManager() as NetworkManagerProtocol })
    ```
- 🍿 In case of Resolveing the dependancy
    ```
    @Injected(name: .local) var localManger : GraphQLApiManager
    @LazyInjected(name: .remote) var remoteManger : GraphQLApiManager
    var localManger: GraphQLApiManager = Resolver.resolve( name: .local)
    var remoteManger: GraphQLApiManager = Resolver.resolve( name: .remote)
    ```
 🚀 AND VOILAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA




