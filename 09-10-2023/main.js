const clientes = [];

clientes.push("Eduardo Saverin");
clientes.push("Mark Zuckerberg");
clientes.push("Bill Gates");
clientes.push("Steve Jobs");

//acesssar a lista de clientes
const lista = document.querySelector("#ListaClientes");

/*lista.innerHTML = ''
lista.innerHTML += '<li>${clientes[0]}</li>';
lista.innerHTML += '<li>${clientes[1]}</li>';
lista.innerHTML += '<li>${clientes[2]}</li>';
lista.innerHTML += '<li>${clientes[3]}</li>';*/

/*for(let cliente of clientes){
    const itemlista = document.createElement('li');
    itemlista.textContent = cliente;
    lista.appendChild(itemlista);
}*/

//for bom a nível de pleno
function renderizarClientes(clientesLista){
    lista.innerHTML = '';
    clientesLista.forEach(cliente => lista.innerHTML += `<li>${cliente}</li>`);
}
renderizarClientes(clientes);

buscar.addEventListener('keyup', (event) => {
    const filtrados = clientes.filter((cliente) => { return cliente.toLowerCase().includes(event.target.value.toLowerCase())});
    renderizarClientes(filtrados);
})