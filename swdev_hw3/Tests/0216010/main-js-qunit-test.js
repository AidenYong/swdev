module('Button Test');
test( '測試result欄位的訊息是否同步', function(){
   $('#val9').trigger('click');
   $('#val9').trigger('click');
    equal($( '#value').text(), '9', '0 pass');
  
});