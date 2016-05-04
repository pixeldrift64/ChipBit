<?php
$path = drupal_get_path('module', 'swift_player');

?>
<html>

<head>
  <title>Radio Player</title>
  <link rel="stylesheet" type="text/css" href="<?=$path?>/css/swift_player.css" />
  <link rel="stylesheet" href="<?=$path?>/jplayer/css/player.css">
  <script language="javascript" type="text/javascript" src="http://vps1.pixel-8.co:2199/system/streaminfo.js"></script>
  <script language="javascript" type="text/javascript" src="http://vps1.pixel-8.co:2199/system/recenttracks.js"></script>
  <script src="<?=$path?>/jplayer/js/jquery-1.10.1.min.js"></script>
  <script type="text/javascript" src="<?=$path?>/jplayer/js/jquery.jplayer.min.js"></script>
  <script type="text/javascript" src="<?=$path?>/jplayer/js/jplayer.cleanskin.min.js"></script>
  <script type="text/javascript">
    $(document).ready(function() {

      $('.webPlayer').videoPlayer({
        name: 'ChipBit Radio',
        media: {
          mp3: 'http://stream.chipbit.net:8000/live',
        },
        autoplay: 1,

      });

    });
  </script>
</head>

<body>

  <div id="nowplaying">
    <div class="container NowPlayingCont">
      <p class="NowPlayingText">Now Playing:</p>
      <img id="cc_strinfo_trackimageurl_chipbit" class="NowPlayingImg cc_streaminfo" src="http://chipbit.net/Images/squarelogo.png">
      <div class="nowPlayingPlayer"><p id="cc_strinfo_song_chipbit" class="cc_streaminfo NowPlayingTitle">Loading...</p></div>
    </div>
  </div>

  <div id="uniquePlayer-1" class="webPlayer light audioPlayer">
    <div id="uniqueContainer-1" class="videoPlayer"></div>
  </div>

</body>

</html>
