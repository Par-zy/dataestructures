int vazia ( NO *ptr ) {
	if ( ptr == NULL)
 		return(1);
	else
 		return(0);
}

void enfileirar(NO **ptrfim, char *letra) {
	NO *ptmp;

	ptmp = malloc(sizeof(NO));
	if (ptmp != NULL) {
		ptmp->data = letra;
		ptmp->prox = *ptrfim;
	*ptrfim = ptmp;
	}
}

void desenfileirar(NO **ptrfim, char *letra) {
	NO *ptmp1, *ptmp2;
	ptmp1 = *ptrfim;
	if (vazio(ptmp1 )) {
		printf(“Erro !\n”);
		*letra = '\0';
	} else {
		ptmp2 = *ptrfim;
		while (ptmp2->prox != NULL ) {
			ptmp1 = ptmp2;
			p2 = p2->prox;
 		}
 		*letra = ptmp2->data;
 		ptmp1->prox = NULL;
 		free(ptmp2);
 		if (ptmp1 == ptmp2)
			*ptrfim = NULL;
 }}
