#include <bits/stdc++.h>
#include <iostream>
#include <chrono>
#include <sys/resource.h>

// Inicio função para obter o consumo de memória atual em KB
long getMemoryUsage() {
    long memoryUsage = 0;
    struct rusage usage;
    if (getrusage(RUSAGE_SELF, &usage) == 0) {
        memoryUsage = usage.ru_maxrss; // Em KB
    }
    return memoryUsage;
}
// Final função para obter o consumo de memória atual em KB

int main() {
    const int timeLimitMS = 2000; 
    const long memoryLimitKB = 1048576; 
    auto startTime = std::chrono::steady_clock::now();

    // INICIO CÓDIGO

        

    // FINAL CÓDIGO

    auto endTime = std::chrono::steady_clock::now();
    auto elapsedTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
    long memoryUsage = getMemoryUsage();

    // Verificando o tempo de execução
    if (elapsedTime > timeLimitMS) {
        std::cout << "Tempo de execucao excedido! " << elapsedTime << " ms!\n";
        return 1;
    }

    // Verificando o consumo de memória
    if (memoryUsage > memoryLimitKB) {
        std::cout << "Consumo de memoria excedido! " << memoryUsage << "kb!\n";
        return 1;
    }

    std::cout<<"Tempo: " << elapsedTime << "\n";
    std::cout<<"Memoria: " << memoryUsage << "\n";
    return 0;
}


// int main(){
//     int n,m,num;
//     std::cin>>n;
//     std::cin>>m;

//     std::vector<int> vec_price_tic;
//     for(int i = 0; i < n; i++){
//         std::cin>>num;
//         vec_price_tic.push_back(num);
//     }

//     std::vector<int> vec_bid;
//     for(int i = 0; i < m; i++){
//         std::cin>>num;
//         vec_bid.push_back(num);
//     }

//     std::sort(vec_price_tic.begin(), vec_price_tic.end());

//     for(int i = 0; i < n; i++){
//         if(vec_bid.at(i) )
//     }
// }

// int main(){
//     int n,m;
//     std::cin>>n;
//     std::cin>>m;
//     std::vector<int> vecn;
//     std::vector<int> vecm;

//     for(int i = 0; i < n; i++){
//         int num = 0;
//         std::cin>>num;
//         vecn.push_back(num);
//     }
    
//     for(int i = 0; i < m; i++){
//         int num = 0;
//         std::cin>>num;
//         vecm.push_back(num);
//     }

//     std::vector<int> vec;
//     vec.reserve(n + m);
//     std::merge(vecn.begin(), vecn.end(), vecm.begin(), vecm.end(), std::back_inserter(vec));
//     std::sort(vec.begin(),vec.end());

//     for (int i = 0; i < n; i++) {
//         auto it = std::lower_bound(vec.begin(), vec.end(), vecn[i]);
//         std::cout << it - vec.begin() + 1 << " ";
//     }
//     std::cout << "\n";
//     for (int i = 0; i < m; i++) {
//         auto it = std::lower_bound(vec.begin(), vec.end(), vecm[i]);
//         std::cout << it - vec.begin() + 1 << " ";
//     }
    
// }

// int main(){
//     int n;
//     std::cin>>n;

//     std::vector<std::vector<int>> vec(n);
//     int aux;
//     for(int i  = 0; i < n; i++){
//         std::cin>> aux;
//         for(int j = 0; j < aux; j++){
//             int num;
//             std::cin>>num;
//             vec[i].push_back(num);
//         }
//     }

//     int finalValue = 0;
//     std::cin>>finalValue;
//     std::map<int, int> ganhadores;

//     for(int i = 0; i < n;i++){
//         for(auto it1 = vec[i].begin(); it1 != vec[i].end(); it1++){
//             if(*it1 == finalValue){
//                 ganhadores[i] = vec[i].size();
//             }
//         }
//     }

//     for(auto it = ganhadores.begin(); it != ganhadores.end(); it++){
//         auto itaux = it;
//         ++itaux;
//         if(itaux == ganhadores.end()--){break;}
//         if((*it).second < (*itaux).second){
//             ganhadores.erase(it);
//         } else if((*it).second > (*itaux).second){
//             ganhadores.erase(itaux);
//         }
//     }

//     int cont = 0;
//     for(auto it = ganhadores.begin(); it != ganhadores.end(); it++){
//         cont +=1;
//     }
//     std::cout<<cont;
//     for(auto it = ganhadores.begin(); it != ganhadores.end(); it++){
//         auto aux = it;
//         aux++;
//         // if(aux == ganhadores.end()){
//         //     std::cout<<(*it).first+1;
//         // }else{
//             std::cout<<(*it).first;
//         // }
//     }
    
// }

// int main(){
//     int n;
//     std::cin>>n;
//     std::string str1;
//     std::string str2;

//     std::cin>>str1;
//     std::cin>>str2;

//     bool equal = true;


//     for(int i = 0; i < n; i++){
//         if(str1[i] == str2[i]){
//             //std::cout<<"rodada " << i << " == \n";
//             continue;
//         } else if((str1[i] == '0' && str2[i] == 'o')){
//             //std::cout<<"rodada " << i << " 1 ou 0 \n";
//             continue;
//         } else if((str2[i] == '0' && str1[i] == 'o')){
//             continue;
//         } else if((str1[i] == '1' && str2[i] == 'l')){
//             continue;
//         }else if((str2[i] == '1' && str1[i] == 'l')){
//             continue;
//         }else{
//             equal = false;
//             break;
//         }
        
//     }

//     if(equal == false){
//         std::cout<<"No";
//     }else{
//         std::cout<<"Yes";
//     }

// }

// int somaAlvo = 23;
// std::vector<int> numeros{};
// std::vector<int> solucao(5,0);

// void gerarCombinacao(int n){
//     if(n == so)
// }

// int main(){
//     int n = 0;
//     while(std::cin>>n){
//         numeros.push_back(n);
//     }

// }

// #include <iostream>
// #include <vector>
// #include <set>

// std::set<std::vector<int>> solucoes;

// bool isPrime(int n) {
//     if (n <= 1)
//         return false;
 
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0)
//             return false;
//     }
 
//     return true;
// }

// void func(int num, std::vector<int> aux, std::vector<int> vec) {
//     if (num == 0) {
//         for (size_t i = 0; i < aux.size(); ++i) {
//             if (!isPrime(aux[i] + aux[(i + 1) % aux.size()])) {
//                 return;
//             }
//         }
//         solucoes.insert(aux);
//     } else {
//         for (auto it = aux.rbegin(); it != aux.rend(); ++it) {
//             if (!isPrime(*it + aux.back())) {
//                 return;
//             }
//         }
//         for(int i = 0; i < num; i++){
//             std::vector<int> copy_aux = aux;
//             int value_to_add = vec[i];
//             copy_aux.push_back(value_to_add);

//             std::vector<int> copy_vec = vec;
//             copy_vec.erase(copy_vec.begin() + i);

//             func(num-1, copy_aux, copy_vec);
//         }
//     }
// }

// int main() {
//     int n = 0;
//     std::cin >> n;
//     std::vector<int> vec;
//     std::vector<int> aux;

//     for (int i = 2; i <= n; i++) {
//         vec.push_back(i);
//     }
//     vec.push_back(1);
    
//     func(n, aux, vec);

//     for (const auto& vec : solucoes) {
//         for (int item : vec) {
//             std::cout << item << " ";
//         }
//         std::cout << std::endl; 
//     }

//     return 0;
// }


//PRIME RING FINAL

// std::vector<int>

// void chamada(int tamanho, int faixas, int cont, std::vector<int> musicas){

//     for(int i = 0; i < faixas;i++){
//         if(tamanho == cont+musicas[i]){
//             return cont+musicas[i];
//         }else if(tamanho < cont+musicas[i]){
//             break;
//         }else{
//             cont+=musicas[i];
//             auto it = musicas.begin() + i;
//             musicas.erase(it);
//             chamada(tamanho, faixas-1, cont, musicas);
//         }
//     }
// }

// int main(){
//     int tamanho,faixas, n;
//     std::vector<int> musicas;

//     std::cin>>tamanho;
//     std::cin>>faixas;
    
//     for(int i = 0; i < faixas; i++){
//         std::cin>>n;
//         musicas.push_back(n);
//     }

//     std::cout<<chamada(tamanho, faixas,0,musicas);
// }

// #include <iostream>

// int soma(int n) {
//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }

// int funcao(int n) {
//     if (n < 10) {
//         return n;
//     } else {
//         return funcao(soma(n));
//     }
// }
// int main(){
//     int n;  
//     while(std::cin>>n){
//         if(n == 0){
//             break;
//         }else{
//             std::cout<<funcao(n)<<"\n";
//         }   
//     }

// }
// int funcao(int n, int contador, int maior){
//     if(n == 1){
//         if(contador>maior){
//             return contador;
//         }else{
//             return maior;
//         }
//     }else if(n%2==0){
//             contador++;
//             return funcao(n/2, contador, maior);
//     }else{
//         contador++;
//         return funcao(3*n+1, contador,maior);
//     }
// }

// int chama(int n, int m){
//     int maior = 0;
//     for (int i = n; i <= m; i++) {
//         int contador = 0;
//         int steps = funcao(i, contador, maior);
//         if (steps > maior) {
//             maior = steps;
//         }
//     }
//     return maior;
// }

// int main(){
//     int n,m;
//     std::cin>>n>>m;


//     int qnt = chama(n,m)+1;    

//     if(n > m){
//         std::cout<<n << " " << m << " " << qnt <<"\n";    
//     } else {
//         int qnt = chama(m,n)+1;
//     }

//     std::cout<<m << " " << n << " " << qnt <<"\n";
// }


// int main(){
//     int n;
//     std::cin>>n;
//     std::map<int,int> map;

//     for(int i = 1; i <= n; i++){
//         map[i] = 0;
//     }

//     int letra;
//     for(int i = 0; i < 3*n; i++){
//         std::cin>>letra;
//         map[letra]+=1;  
//     }

//     for(auto it1 = map.begin(); it1 != map.end(); it1++){
//         for(auto it2 = map.begin(); it2 != map.end(); it2++){
//             if(*it1 < *it2){
//                 auto it = it1;
//                 it1 = it2;
//                 it2 = it;
//             }
//         }
//     }
    
// }

// int main(){
//     int matriz[15][15] = {
//     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
//     {0,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
//     {0,1,0,0,0,0,0,0,0,0,0,0,0,1,0},
//     {0,1,0,1,1,1,1,1,1,1,1,1,0,1,0},
//     {0,1,0,1,0,0,0,0,0,0,0,1,0,1,0},
//     {0,1,0,1,0,1,1,1,1,1,0,1,0,1,0},
//     {0,1,0,1,0,1,0,0,0,1,0,1,0,1,0},
//     {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0},//meio
//     {0,1,0,1,0,1,0,0,0,1,0,1,0,1,0},
//     {0,1,0,1,0,1,1,1,1,1,0,1,0,1,0},
//     {0,1,0,1,0,0,0,0,0,0,0,1,0,1,0},
//     {0,1,0,1,1,1,1,1,1,1,1,1,0,1,0},
//     {0,1,0,0,0,0,0,0,0,0,0,0,0,1,0},
//     {0,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
//     {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},};

//     //preto = 0
//     //branco = 1
//     // int verificador = 0;

//     // for(int i = 0; i < 15; i++){
//     //     for(int j = 0; j < i; j++){
//     //         if(j%2 == 0){
//     //             matriz[i][j] = 0;
//     //             matriz[i][14-j] = 0;
//     //             verificador = 1;
//     //         } else{
//     //             matriz[i][j] = 1;
//     //             matriz[i][14-j] = 1;
//     //             verificador = 0;
//     //         }
//     //     }
//     //     for(int k = i+1; k < 15-(2*(i+1)); k++){
//     //         matriz[i][k]=verificador;
//     //     }
//     // }

//     // for(int i = 0; i < 15; i++){
//     //     for(int j = 0; j < 15; j++){
//     //         std::cout<<matriz[i][j];
//     //     }
//     //     std::cout<<"\n";
//     // }

//     int n, m;

//     std::cin>>n;
//     std::cin>>m;
//     if(matriz[n-1][m-1] == 0){
//         std::cout<<"black";
//     }else{
//         std::cout<<"white";
//     }
// }

// // int main(){
// //     int n = 0;
// //     std::cin>> n;

// //     std::string palavra = "";
// //     int afavor = 0;
// //     int contra = 0;

// //     for(int i = 0; i < n; i++){
// //         std::cin>>palavra;

// //         if(palavra == "Against"){
// //             contra++;
// //         }else{
// //             afavor++;
// //         }
// //     }

// //     if(contra > afavor){
// //         std::cout<<"No";
// //     }else{
// //         std::cout<<"Yes";
// //     }

// // }
// // int main(){
// //     std::string palavra;
// //     int num;

// //     std::cin >> num;
// //     std::cin >> palavra;
// //     std::map<std::string, int> mapa;
// //     std::string aux;
// //     for(int i = 0; i < palavra.size() - num + 1; i++){
// //         aux.append(palavra[i] + palavra[i+1] + palavra[i+2]);
// //         if(mapa.count(aux) == 0){
// //             mapa[aux] = 1;
// //             aux = "";
// //         }else{
// //             mapa[aux]+=1;
// //             aux = "";
// //         }   
// //     }

// //     auto guarda = mapa.begin(); 
// //     for(auto it = mapa.begin(); it != mapa.end(); it++){
// //         auto it2 = it++;
// //         if(*it > *it2){
// //             guarda = it2; 
// //         }
// //     }
// //     std::cout << guarda->first;
    
// // }

// //      char N, M;
// //      std::cin >> N >> M;

// //      std::map<char, int> mapa;

// //      mapa['A'] = 0;
// //      mapa['B'] = 3;
// //      mapa['C'] = 4;
// //      mapa['D'] = 8;
// //      mapa['E'] = 9;
// //      mapa['F'] = 14;
// //      mapa['G'] = 23;

// //      if(mapa[N] > mapa[M]){
// //         std::cout << mapa[N] - mapa[M];
// //      } else{
// //         std::cout << mapa[M] - mapa[N];
// //      }


// // }
// //     std::cin >> N >> M;

// //     std::vector<std::string> sushi_colors(N);
// //     std::map<std::string, int> sushi_prices;

// //     for (int i = 0; i < N; ++i) {
// //         std::cin >> sushi_colors[i];
// //     }

// //     for (int i = 0; i < M; ++i) {
// //         std::string color;
// //         int price;
// //         std::cin >> color >> price;
// //         sushi_prices[color] = price;
// //     }

// //     int default_price;
// //     std::cin >> default_price;

// //     int total_price = 0;
// //     for (const auto& color : sushi_colors) {
// //         if (sushi_prices.find(color) != sushi_prices.end()) {
// //             total_price += sushi_prices[color];
// //         } else {
// //             total_price += default_price;
// //         }
// //     }

// //     std::cout << total_price << std::endl;

// //     return 0;
// // }


// // int main(){
// //     int n;
// //     std::cin>> n;
// //     std::map<std::string, int> mapa;
// //     std::string palavra;
// //     for(int i = 0; i < n; i++){
// //         std::cin>>palavra;
// //         if(mapa.find(palavra) == mapa.end()){
// //             mapa[palavra] += 1;
// //             std::cout<<"OK\n";
// //         } else{
// //             std::cout<<palavra+std::to_string(mapa[palavra])+"\n";
// //             mapa[palavra] += 1;
// //         }
// //     }
// // }

// // int main(){
// //     std::vector<int> veca;
// //     std::vector<int> vecb;
// //     std::vector<int> vecc;
// //     std::vector<int> vecd;

// //     std::set<int> somas;

// //     int n;
// //     int num;
// //     std::cin>>n;

// //     for(int i = 0; i < n; i++){
// //         std::cin>>num;
// //         veca.push_back(num);
// //     }
// //     std::cin>>n;

// //     for(int i = 0; i < n; i++){
// //         std::cin>>num;
// //         vecb.push_back(num);
// //     }
// //     std::cin>>n;

// //     for(int i = 0; i < n; i++){
// //         std::cin>>num;
// //         vecc.push_back(num);
// //     }
// //     std::cin>>n;

// //     for(int i = 0; i < n; i++){
// //         std::cin>>num;
// //         vecd.push_back(num);
// //     }

// //     for(int i = 0; i < veca.size(); i++){
// //         for (int j = 0; j < vecb.size(); j++){
// //             for(int k = 0; k <vecc.size(); k++){
// //                 somas.insert(veca[i]+vecb[j]+vecc[k]);
//             }
//         }
        
//     }

//     for(int i = 0; i < vecd.size();i++){
//         if(somas.count(vecd[i])!=0){
//             std::cout<<"Yes\n";
//         }else{
//             std::cout<<"No\n";
//         }
//     }


// }

// int main(){
//     int num;
//     std::cin>>num;

//     std::string palavra;

//     std::set<std::string> presentes;

//     for(int i = 0; i < num; i++){
//         std::cin>>palavra;
//         std::cout<<"entre";
//         if(presentes.count(palavra)==0){
//             presentes.insert(palavra);
//         }
//     }
//     std::cout<<presentes.size();

// }


// int main(){
//     std::string palavra;
//     std::cin>> palavra;
//     std::set<char> num = {'0','1','2','3','4','5','6','7','8','9'};
//     for(int i = 0; i < 10; i++){
//         if(num.count(palavra[i])!=0){
//             num.erase(palavra[i]);
//         }
//     }
//     std::cout<< *num.begin();
// }



//set<pair<int,int>>