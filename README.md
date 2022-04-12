## Description
Plugin for unreal engine 4 to get 'unique id' and 'nickname' of the user from the user's google play account. Also gives access to the auth token. Accessible in blueprints as well as c++.
You can use the unique id to store user's data on your server database/firebase.

Note: Only works when the user has signed in through google play (which is usually automatic if the user has not disabled it).

### Reason
There is no way to get a Unique User ID from google play login (in blueprints), so I made this very basic plugin which should help !

Useful in case where you don't want the user to login through an OAuth or even worse, email/pass. Users usually enable automatic sign-in into games when they create their Google Play account.

It allows access to UID, Nickname (aka Gamer Name) and Auth Token.

## Install Plugin

To add the plugin to your project, simply copy the downloaded folder into the 'Plugins' folder located in your project's root directory.

Make sure to enable the plugin in the plugins menu inside the engine.

## Enable Plugin

![](https://raw.githubusercontent.com/Hanzyusuf/extra_files_01/main/UE4_Plugins_GPUtils_Enable.png)
