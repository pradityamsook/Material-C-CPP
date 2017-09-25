<template>
  <div class="hello">
    <h1>{{ msg }}</h1>
    <h2>Essential Links</h2>
    <div>	
    <ul>
      <li v-for ="userPrint in users">
	{{userPrint.firstname}} {{userPrint.lastname}}
	</li>
	</ul>
	</div>
	</hr>
	<div>
		<input type = "text" v-model = "input_val">
	</div>
	<div>
		Input Value: <span v-text = "input_val" ></span>
	</div>
	</hr>
	<div>
		<button class = "btn btn=primary" v-on:click = "count++">this clicked {{counter}} times</button>
	</div>
	</div>
						
</template>

<script>
export default {
  name: 'hello',
  data () {
    return {
      msg: 'Welcome to Your Vue.js App',
	users: [ 
		{firstname: 'Pradit', lastname: 'Yamsook'},
		{firstname: 'Nouget', lastname: 'Nets'},
		{firstname: 'Masmell', lastname: 'Gody'},
    	],
	input_val: ""
	counter: 0
  }
}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
h1, h2 {
  font-weight: normal;
}

ul {
  list-style-type: none;
  padding: 0;
}

li {
  display: inline-block;
  margin: 0 10px;
}

a {
  color: #42b983;
}
</style>
