jQuery( document ).ready(function($) {

  $(document).on('click', '.listenLink', function(){

    window.open(this.href, 'mywin', 'left=20,top=20,width=350,height=600,toolbar=1,resizeable=0');
    return false;

  });

});
