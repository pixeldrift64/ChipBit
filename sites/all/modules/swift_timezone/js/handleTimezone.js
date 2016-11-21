jQuery( document ).ready(function() {

  var tz = jstz.determine();

  userTimezone = tz.name();
  console.log(userTimezone);

  document.cookie = "timezone="+userTimezone;

});
