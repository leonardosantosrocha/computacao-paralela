# UPM - Faculdade de Computação e Informática

### Projeto - Tartaruga
> Leonardo Santos da Rocha | 32092261</br>
Vitor de Sousa Uema | 32028555</br>
Talyta Scaramuzzo | 32079915</br>
CC05D

</br>

## Pragma Omp Critical
> Quando implementamos um código onde temos uma variável global sendo acessada simultaneamente por duas ou mais threads sem a utilização de uma variável local dentro da função, como no caso do projeto tartaruga, podemos acabar gerando dependencias de processamento, dessa forma, mesmo com o código utilizando threads, forçaremos o programa a ser executado sequêncialmente. </br>
> Isso acontece, pois as threads tentarão interagir com o mesmo endereço de memória da variável global de modo síncrono, sendo assim, faz-se necessário a construção de uma variável local para armazenar o valor retornado pela função em questão, além do uso da diretiva "pragma omp critical" para realizar a sincronização dos resultados e evitar o sequenciamento do código. Dessa forma, conseguimos fazer com que todos os resultados estejam sincronizados antes de serem escritos na variável global na função main. </br>
