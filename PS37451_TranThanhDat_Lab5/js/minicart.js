let openShopping = document.querySelector('.shopping');
let closeShopping = document.querySelector('.closeShopping');
let body = document.querySelector('body');


openShopping.addEventListener('click', ()=>{
    body.classList.add('active');
})

closeShopping.addEventListener('click', ()=>{
    body.classList.remove('active');
})

function Product(id, name, price, image) {
    this.id = id;
    this.name = name;
    this.price = price;
    this.image = image;
}

function Cart() {
    this.products = [];
}

var data = { "data": [{
    "product": {
      "id": 1,
      "name": "Cà Phê Gói 1",
      "price": 200,
      "image": "p1.png"
    },
    "quantity": 1
  },
  {
    "product": {
      "id": 2,
      "name": "Cà Phê Gói 2",
      "price": 300,
      "image": "p2.png"
    },
    "quantity": 1
  },
  {
    "product": {
      "id": 3,
      "name": "Cà Phê Gói 3",
      "price": 400,
      "image": "p3.png"
    },
    "quantity": 1
  }
]};

let renderItems = document.getElementsByClassName('list');

var myRenderHtml = '';
for (i = 0; i < data.data.length ; i++) {
  myRenderHtml += ` 
    <div class="item" >
    <img src="./img/${data.data[i].product.image}">
    <div class="title">${data.data[i].product.name}</div>
    <div class="price">${data.data[i].product.price}</div>
    <button class="BtnAdd" data-products="${data[i].data.product.id}***${data[i].data.product.name}***${data[i].data.product.price}***${data[i].data.product.img}" >Add To Card</button>
  </div>
`;
}

renderItems[0].innerHTML =  myRenderHtml;

function render() {

    let dataProducts = JSON.parse(localStorage.getItem("products"));
    if (dataProducts == null) {
        addItem();
    } else {
        newCart.products = dataProducts;
        newCart.renderMyCart();
        addItem();
    }
}

Cart.prototype.renderMyCart = function() {
    var listCard = document.getElementById('listCard');
    var cartNumber = document.getElementById('cartNumber');
    var total = document.getElementById('total')
    var totalprice = 0;
    var myhtml = '';
    console.log(JSON.parse("products"));

    for (var i = 0; i < this.products.length; i++) {
        myhtml += `
            <li>
                <div>
                    <div>${this.products[i].product.id}</div>
                    <img src="./img/${this.products[i].product.image}" alt="" />
                </div>
                <div>${this.products[i].product.name}</div>
                <div>${this.products[i].product.price}</div>
                <div>
                    <div>
                        <div class="quantity">${this.products[i].product.quantity}</div>
                    </div>
                    <div>
                        <button class="BtnRemove" style="margin: 0 15px;"onClick="remove(${this.products[i].product.id})>remove</button>
                    </div>
                </div>
            </li>
        `;
        totalprice += Number(this.products[i].product.price)*Number(this.products[i].quantity);
    }

    total.innerText = totalprice;
    listCard.innerHTML = myhtml;
    cartNumber.innerText = this.products.length;
};

var btnAddToCart = document.getElementsByClassName('BtnAdd');
var mycart = new Cart();

for (var i = 0; i < btnAddToCart.length; i++) {
    btnAddToCart[i].addEventListener('click', function() {
        let Data = this.getAttribute("data-products");
        productData = Data.split("***");
        let newProduct = new Product(Number(productData[0]), productData[1], productData[2], productData[3], productData[4]);
        mycart.addProduct(newProduct, 1);
    });
}

Cart.prototype.addProduct = function(product, quantity) {
    var productInCart = this.products.find(function(item) {
        return item.product.id === product.id;
    });

    if (productInCart) {
        productInCart.quantity += quantity;
    } else {
        this.products.push({ product: product, quantity: quantity });
    }
    var a = JSON.stringify(this.products);
    localStorage.setItem('products',a);
    this.renderMyCart();
};




render();