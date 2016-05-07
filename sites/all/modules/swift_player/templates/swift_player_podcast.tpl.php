<?php
$path = drupal_get_path('module', 'swift_player');

?>
<html>

<head>
  <title>Radio Player</title>
  <link rel="stylesheet" type="text/css" href="/<?=$path?>/css/swift_player.css" />
  <link rel="stylesheet" href="/<?=$path?>/jplayer/css/player.css">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.6.2/css/font-awesome.min.css">
  <script language="javascript" type="text/javascript" src="http://vps1.pixel-8.co:2199/system/streaminfo.js"></script>
  <script language="javascript" type="text/javascript" src="http://vps1.pixel-8.co:2199/system/recenttracks.js"></script>
  <script src="/<?=$path?>/jplayer/js/jquery-1.10.1.min.js"></script>
  <script type="text/javascript" src="/<?=$path?>/jplayer/js/jquery.jplayer.min.js"></script>
  <script type="text/javascript" src="/<?=$path?>/jplayer/js/jplayer.cleanskin.min.js"></script>
  <script type="text/javascript">
    $(document).ready(function() {

      $('.webPlayer').videoPlayer({
        name: "<?=$showName?>",
        media: {
          mp3: '<?=$podcastFile?>',
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
      <img class="NowPlayingImg" src="<?=$showLogo?>">
      <div class="nowPlayingPlayer"><p class="NowPlayingTitle">#<?=$podcastEpNo?> - <?=$podcastTitle?></p></div>
    </div>
  </div>

  <div id="uniquePlayer-1" class="webPlayer light audioPlayer">
    <div id="uniqueContainer-1" class="videoPlayer"></div>
  </div>

  <div class="podcastDetails">
    <p>First aired on <?=$podcastDate?></p>
    <p><?=$podcastDesc?></p>
    <p><a target="_blank" href="<?=$showItunes?>"><i class="fa fa-apple"></i>&nbsp;&nbsp;View in iTunes</a></br>
    <a href="<?=$podcastFile?>" download><i class="fa fa-cloud-download"></i> Download this podcast</a></p>
  </div>

</body>

</html>
