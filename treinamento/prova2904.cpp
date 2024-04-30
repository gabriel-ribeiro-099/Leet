

#include <bits/stdc++.h>

std::set<std::string> pal_set;

void recursion(std::string aux, std::string s1) {
    if (s1.length() == 1) {
        aux += s1;
        pal_set.insert(aux);
    } else {
        for (auto i = 0; i < s1.length(); i++) {
            std::string a = aux + s1[i];
            std::string remaining = s1;
            remaining.erase(i, 1);
            recursion(a, remaining);
        }
    }
}

int main() {
    std::string pal;
    int n;

    std::cin >> pal;
    std::cin >> n;
    std::string aux = "";

    for (int i = 0; i < pal.length(); i++) {
        aux += pal[i];
        std::string remaining = pal;
        remaining.erase(i, 1);
        recursion(aux, remaining);
    }

    int cont = 0;
    for (auto it = pal_set.begin(); it != pal_set.end(); it++) {
        cont += 1;
        if (cont == n) {
            std::cout << *it;
            break;
        }
    }
}


// std::set<std::string> pal_set;

// void recursion(std::string aux, std::string s1){
//     if(s1.length() == 1){
//         aux+=s1;
//         pal_set.insert(aux);
//     }else{
//         for(auto i = 0; i < s1.length(); i++){
//             std::string a = aux + s1[i];
//             std::string copia = s1;
//             recursion(a, copia.erase(i));
//         }
//     }
// }

// int main(){
//     std::string pal;
//     int n;

//     std::cin>>pal;
//     std::cin>>n;
//     std::string aux = "";

//     for(int i = 0; i < pal.length(); i++){
//         aux += pal[i];
//         std::string copia = pal;
//         recursion(aux, copia.erase(i));
//     }

//     int cont = 0;
//     for(auto it = pal_set.begin(); it != pal_set.end(); it++){
//         cont+=1;
//         if(cont == n){
//             std::cout<<*it << "\n";
//         }
//     }
    

// }

// bool isPalindrome(std::string a){

//     auto it1 = a.begin();
//     auto it2 = a.end()-1;

//     while(it1 != it2){
//         if(*it1 == *it2){
//             it1++;
//             it2--;
//         }else{
//             return false;
//         }
//     }
//     return true;

// }

// int main(){
//     int n;
//     std::cin>>n;

//     std::vector<std::string> vec;

//     for(int a = 0; a < n; a++){
//         std::string aux;
//         std::cin>>aux;
//         vec.push_back(aux);
//     }

//     std::set<std::string> seta;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n;j++){
//             if(i == j){
//                 continue;
//             }else{
//                 std::string pal = vec[i];
//                 pal+=vec[j];
//                 seta.insert(pal);
//                 }
//             }
//         }
    

//     for(auto it = seta.begin(); it != seta.end(); it++){
//         if(isPalindrome(*it)){
//                     std::cout<<"Yes";
//                     return 0;
//             }
//         }
//     std::cout<<"No";
// }

// int main(){
//     int n;
//     std::cin>>n;

//     if(n%5 == 0){
//         std::cout<<n;
//     }else{
//         int aux = n%5;
//         if(aux >= 3){
//             std::cout<<(n-aux)+5;
//         }else{
//             std::cout<<n-aux;
//         }
//     }
// }

// void quicksort(std::vector<int>& vec, int left, int right) {
//     if (left >= right) 
//         return;

//     int pivot = vec[(left + right) / 2]; 
//     int i = left, j = right;

//     while (i <= j) {
//         while (vec[i] < pivot) i++; 
//         while (vec[j] > pivot) j--; 
//         if (i <= j) { 
//             std::swap(vec[i], vec[j]);
//             i++;
//             j--;
//         }
//     }

//     quicksort(vec, left, j);
//     quicksort(vec, i, right);
// }

// int main(){
//     int alunos, x;
//     std::cin>>alunos;
//     std::cin>>x;

//     std::vector<int> vec_alunos;

//     int aux = 0;
//     for(int i = 0; i < alunos; i++){
//         std::cin>>aux;
//         vec_alunos.push_back(aux);
//     }

//     quicksort(vec_alunos, 0, vec_alunos.size() - 1);

//     std::vector<int> respostas;

//     for(int i = 0; i < x; i++){
//         std::cin>>aux;
//         auto a = std::lower_bound(vec_alunos.begin(),vec_alunos.end(),aux);
//         respostas.push_back(vec_alunos.end() - a);

//     }

//     for (auto i = respostas.begin(); i != respostas.end(); i++)
//     {
//         std::cout<<*i<<"\n";
//     }
    

// }