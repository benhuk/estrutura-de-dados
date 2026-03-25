void atualizarSalario(int ids[], float salarios[], int quantidade, int id, float novoSalario){
    int i;
    for(i=0;i<quantidade;i++){
        if(ids[i] == id ){
            salarios[i] = novoSalario;
        }
    }
}
