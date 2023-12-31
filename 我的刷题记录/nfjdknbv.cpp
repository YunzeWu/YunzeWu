<div id="main-page" class="plainlinks main-page">
{{/style|id=fp-1|contentid=fp-header|contentclass=fp-header|style=position:relative;|content=
<div id="fp-header-file" class="nomobile">[[File:Minecraft Wiki header.svg|300px|link=]]</div>
<div id="fp-header-links" class="list-style-none nomobile">
{{Columns-list|
* {{FrontPageLink|id=compass|Minecraft Wiki:????|????}}
* {{FrontPageLink|id=painting|Minecraft Wiki:??????|??????}}
* {{FrontPageLink|id=sign|Minecraft Wiki:Wiki??|Wiki??}}
* {{FrontPageLink|id=clock|Special:????|????}}
* {{FrontPageLink|id=oak-door|Special:????|????}}
* {{FrontPageLink|id=iron-pickaxe|Help:??|??????}}
* {{FrontPageLink|id=book-and-quill|Help:????|??????}}
* {{FrontPageLink|id=nether-star|Special:????|????}}
* {{FrontPageLink|id=book|Minecraft Wiki:????|????}}
* {{FrontPageLink|id=enchanted-book|Minecraft Wiki:????|????}}
* {{FrontPageLink|id=paper|Minecraft Wiki:????|????}}
* {{FrontPageLink|id=knowledge-book|Minecraft Wiki:?????|??????}}
}}
</div>
<div id="fp-header-text">[[Minecraft Wiki:???|??]]???????????????[[wzh:Wiki|Wiki]],[[Minecraft Wiki:??|??Minecraft Wiki]]???????????Minecraft????????????Minecraft???[[Special:????|{{NUMBEROFACTIVEUSERS}}]]?[[Special:????|????]]?[[Minecraft Wiki:????|?????]]?????[[Special:??|{{NUMBEROFARTICLES:R}}]]?[[Special:????|??]]????????Wiki[[Minecraft Wiki:????|????]]?</div>
<div id="fp-header-transfer"><div style="margin-top: 0.4em;">[[File:Mcdw.png|200px|class=nomobile|link=Minecraft Dungeons:Wiki]]<br>[[Minecraft Dungeons:Wiki|??Minecraft Dungeons Wiki]]</div></div>
}}

{{/style|id=fp-2|header=Minecraft??|content=
<div style="line-height:2em">[[File:Mclogo.svg|90px|Minecraft|link=Minecraft]](????)???[[wzh:????|???]]????,????[[Mojang Studios]]???[[Markus Persson|???·???]],?????«[[Infiniminer|????]]»?«[[wzh:????|????]]»?«[[wzh:??????|??????]]»????????[[Jens Bergensten|??·????]]??????????[[???|????]]???????????[[??]],???[[????|?????]]???????????[[????]],??????????,????????????,Minecraft?????????[[???|?????????]]? 

Minecraft????[[??]]???????????????[[wzh:???|???]]???[[??]]?????[[???|??]]???????,???????[[??]]?[[??]]?[[??]]?????????????[[??]]????[[??]]???[[??]]??[[??]]???????????????[[??]]????????????????????????????????????????????????????????????????[[????]]?[[??]]?[[??|??]],?????[[??]]????????,??????????[[????]]?????,???[[???]]?</div>
}}

{{/style|id=fp-3|header=????!|content=
<div class="edition-boxes" style="text-align: center; margin-bottom: 1em;">
	<div class="edition-group">
		{{/edition|background=#fce9d6|border=#ffcd99|min width=230px|header=[[Java?]]|content=
			<div>
				{{/platform|java|image=Computer.png|size=65|link=Java?|title=Java}}
				{{ #if: {{V|java-snap}} |
					<span style="color: #333;">????</span>
					{{/platform|java-snap|image=Computer.png|size=65|link=Java?|title=Java}}
				}}
			</div>
		}}
		
		{{/edition|background=#f7e6e8|border=#ff99be|min width=230px|header=[[???]]|content=
			<div>
				{{/platform|bedrock-android|image=Android logo.png|size=50|link=???|title=Android}}
				{{/platform|bedrock-ios|image=Apple iOS.png|size=50|link=???|title=iOS}}
				{{/platform|bedrock-win10|image=Windows 10.png|size=50|link=???|title=Windows 10}}
				{{#ifeq: {{v|bedrock-xbone|nolink=1}} | {{v|bedrock-switch|nolink=1}} 
					| {{#ifeq: {{v|bedrock-xbone|nolink=1}} | {{v|bedrock-switch|nolink=1}} 
						| {{/platform|bedrock-xbone|image=Gamepad icon.png|size=50|link=???|title=????}}
						|{{/platform|bedrock-xbone|image=Xbox One.png|size=50|link=???|title=Xbox One}}
						{{/platform|bedrock-switch|image=Nintendo Switch.png|size=50|link=???|title=Nintendo Switch}}
						{{/platform|bedrock-ps4|image=PS4.png|size=50|link=???|title=PlayStation 4}}
						}}
					|{{/platform|bedrock-xbone|image=Xbox One.png|size=50|link=???|title=Xbox One}}
					{{/platform|bedrock-switch|image=Nintendo Switch.png|size=50|link=???|title=Nintendo Switch}}
					{{/platform|bedrock-ps4|image=PS4.png|size=50|link=???|title=PlayStation 4}}
					}}
			    {{#ifeq: {{v|bedrock-win10mobile|nolink=1}} | {{v|bedrock-win10|nolink=1}} || {{/platform|bedrock-win10mobile|image=Windows 10 Mobile icon.png|size=50|link=???|title=Windows 10 Mobile}} }}
			</div>
			{{ #if: {{V|bedrock-beta}} |
				<div>
					<span style="color: #333">????</span>
					{{/platform|bedrock-beta|image=Android logo.png|size=50|link=???|title=Android|shrink=1}}<!--
				 -->{{/platform|bedrock-beta|image=Windows 10.png|size=50|link=???|title=Windows 10|shrink=1}}<!--
				 -->{{/platform|bedrock-beta|image=Xbox One.png|size=50|link=???|title=Xbox One|shrink=1}}<!--
				 -->{{ #if: {{v|bedrock-rtx}} | {{/platform|bedrock-rtx|size=x50|image=RTX.png|link=???|title=????|shrink=1}} }}
			</div>
			}}
		}}
	</div>
	<div class="edition-group">
		{{/edition|background=#fffcdb|border=#ffdd26|min width=230px|header=[[???]]|content=
			{{/platform|education-win|image=Windows 10.png|size=50|link=???|title=Windows}}
	    	{{/platform|education-mac|image=MacOS.png|size=50|link=???|title=Mac OS}}
	    	{{/platform|education-ios|image=Apple iOS.png|size=50|link=???|title=iOS}}

			{{#if: {{V|education-beta}} |
				<span style="color: #333;">????</span>
				{{/platform|education-beta|image=Windows 10.png|size=50|link=???|title=Windows}}
				{{/platform|education-beta|image=Apple iOS.png|size=50|link=???|title=iOS}}
			}}
		}}

		{{/edition|background=#d3ffd6|border=#0ad117|min width=230px|header=[[Minecraft Earth]]|content=
			{{/platform|earth-android|image=Android logo.png|size=50|link=Minecraft Earth|title=Android}}
	    	        {{/platform|earth-ios|image=Apple iOS.png|size=50|link=Minecraft Earth|title=iOS}}
		}}
	</div>
	<div class="edition-group">
		{{/edition|background=#eee|border=#ccc|min width=460px|header=[[:Template:Version#table|??]]|content=}}
	</div>
</div>
<!--??????????,?????? --><div style="-moz-columns: 200px; -webkit-columns: 200px; columns: 200px;">
* <li class="hlist"> ?????:
** {{tr|1=[https://play.google.com/store/apps/details?id=com.mojang.minecraftpe&hl=zh_CN Android]
       |2=[https://play.google.com/store/apps/details?id=com.mojang.minecraftpe&hl=zh_TW Android]}}
*** {{tr|1=[https://play.google.com/store/apps/details?id=com.mojang.minecrafttrialpe&hl=zh_CN ??]
        |2=[https://play.google.com/store/apps/details?id=com.mojang.minecrafttrialpe&hl=zh_TW ??]}}
** {{tr|1=[https://itunes.apple.com/cn/app/id479516143 iOS]
      |2=[https://itunes.apple.com/tw/app/id479516143 iOS]}}
** [http://www.amazon.com/Mojang-Minecraft-Pocket-Edition/dp/B00992CF6W/ ???FireOS]
** {{tr|1=[https://www.microsoft.com/zh-cn/store/p/minecraft-for-windows-10/9nblggh2jhxj Windows 10]
       |2=[https://www.microsoft.com/zh-tw/store/p/minecraft-for-windows-10/9nblggh2jhxj Windows 10]}}
*** {{tr|1=[https://www.microsoft.com/zh-cn/store/p/minecraft-for-windows-10-mobile/9wzdncrdzsbb Mobile]
        |2=[https://www.microsoft.com/zh-tw/store/p/minecraft-for-windows-10-mobile/9wzdncrdzsbb Mobile]}}
*** {{tr|1=[https://www.microsoft.com/zh-cn/p/minecraft-for-windows-10/9nblggh2jhxj ??]
        |2=[https://www.microsoft.com/zh-tw/p/minecraft-for-windows-10/9nblggh2jhxj ??]}}
** [https://oculus.com/experiences/gear-vr/1046887318709554/ ??Gear VR]
** [https://amazon.com/Mojang-Minecraft-Fire-TV-Edition/dp/B01NCJDPER ???Fire TV]
** {{tr|1=[https://www.microsoft.com/zh-cn/p/minecraft/9nblggh537bl Xbox One]
       |2=[https://www.microsoft.com/zh-tw/p/minecraft/9nblggh537bl Xbox One]}}
** [https://www.nintendo.com/games/detail/minecraft-switch Nintendo Switch]
** {{tr|1=[https://store.playstation.com/zh-hans-hk/product/EP4433-CUSA00265_00-ASIA0000FULLGAME PlayStation 4]
       |2=[https://store.playstation.com/zh-hant-hk/product/EP4433-CUSA00265_00-ASIA0000FULLGAME PlayStation 4]}}
*** {{tr|1=[https://store.playstation.com/zh-hans-cn/product/HP4433-CUSA02169_00-MINECRAFTPS40000 ??]
        |2=[https://store.playstation.com/zh-hant-tw/product/EP4433-CUSA00265_00-ASIA0000FULLGAME ??]}}
* ??{{tr|[https://minecraft.net/zh-hans/store/minecraft/ Java?]|[https://minecraft.net/zh-hant/store/minecraft/ Java?]}}!({{tr|1=[http://www.minecraft.net/zh-hans/demo ??]|2=[http://www.minecraft.net/zh-hant/demo ??]}})
* <li class="hlist">????????????:
** [http://marketplace.xbox.com/zh-tw/Product/Minecraft-Xbox-360-Edition/66acd000-77fe-1000-9115-d802584111f7 Xbox 360]
** [https://store.playstation.com/zh-hans-hk/product/EP4433-NPEB01899_00-ASIAFULLGAME0000 PlayStation 3]
*** [https://store.playstation.com/zh-hans-hk/product/EP4433-NPEB01899_00-ASIADEMO00000000 ??]
** [https://store.playstation.com/zh-hans-hk/product/EP4433-PCSB00560_00-ASIA0000FULLGAME PlayStation Vita]
*** [https://store.playstation.com/zh-hans-hk/product/EP4433-PCSB00560_00-ASIA00000000DEMO ??]
** [https://nintendo.com/games/detail/minecraft-wii-u-edition Wii U]
* <li class="hlist">??Minecraft Earth:
** [https://play.google.com/store/apps/details?id=com.mojang.minecraftearth Android]
** [https://apps.apple.com/app/minecraft-earth/id1467316099 iOS]
* ??[https://education.minecraft.net/get-started ???]!
* ??[http://mc.163.com/ ???]!
</div>
}}

{{/style|id=fp-4|header=????|content=
{{/weekly}}
}}

{{/style|id=fp-5|header=????|image=Gameplaycategory.png|content=
<p style="margin-bottom: 0;">'''[[????#????|????]]'''</p>
* {{FrontPageLink|id=heart|????}}
* {{FrontPageLink|id=crafting-table|????}}
* {{FrontPageLink|id=hardcore-heart|????}}
* {{FrontPageLink|id=iron-boots|????}}
* {{FrontPageLink|id=barrier|????}}
* {{FrontPageLink|id=clock|????|???}}

<p style="margin-bottom: 0;">'''[[??]]'''</p>
* {{FrontPageLink|id=brewing-stand|??}}
* {{FrontPageLink|id=crafting-table|??}}
* {{FrontPageLink|id=lit-furnace|??}}

<p style="margin-bottom: 0;">'''[[??/??|??]]'''</p>
* {{FrontPageLink|id=anvil|????}}
* {{FrontPageLink|id=enchanting-table|????}}
* {{FrontPageLink|id=redstone|????}}
* {{FrontPageLink|id=emerald|??}}

<p style="margin-bottom: 0;">'''[[??]]'''</p>
* {{FrontPageLink|id=player|??#????|??}}
* {{FrontPageLink|id=water|??#??|??}}
* {{FrontPageLink|id=apple|??#???|???}}
* {{FrontPageLink|id=creeper|??#??|??}}
* {{FrontPageLink|id=smoker|??#?????|?????}}
* {{FrontPageLink|id=block-of-redstone|??#??|??}}
* {{FrontPageLink|id=command-block|??#????|???}}
}}

{{/style|id=fp-6|header=????|image=Blockcategory.png|content=
; [[??]]
: Minecraft?????????????
; [[??]]
: Java??????????????
; [[??]]
: Minecraft?????????????
; [[??]]
: Minecraft?????????????
; [[????]]
: ????Minecraft?????????
; [[??]]
: ????Minecraft?????????
; [[????]]
: ??Minecraft??????????????????
; [[??]]
: ?????????????????
; [[??]]
: ??????,?[[??]]?????
; [[????]]
: ??????,????????????
; [[???]]
: ???????????????
; [[???]]
: ????????????????
}}

{{/style|id=fp-7|headerstyle=position:relative|header=?????
<div style="position:absolute; top:7px; right:8px; width:42px;">
<div style="color:white; font-size:9px; font-weight:normal; overflow:hidden; white-space:nowrap; user-select:none;">{{#time:Y-m|+8hours}}</div>
<div style="color:black; font-size:30px; font-weight:normal; line-height:30px; margin-top: -2px; user-select:none;">{{#time:j|+8hours}}</div>
</div>
|image=Calendar sheet.png|content=
{{:Minecraft Wiki/news}}
}}

{{/style|id=fp-8|header=????|image=Linkscategory.png|content=
<p style="margin-bottom: 0;">'''[[Help:????|????]]'''</p>
<div style="-moz-columns: 130px; -webkit-columns: 130px; columns: 130px;">
* [https://minecraft.net/ Minecraft????]
** {{tr|1=[https://education.minecraft.net/ ???]|2=[https://minecraft.education.jdcloud.com ???]}}
* [https://mojang.com/ Mojang??]
* [https://help.mojang.com/ Mojang????]
* [https://bugs.mojang.com/ Mojang?????]
* [https://feedback.minecraft.net/ Minecraft??]
* [https://twitter.com/Mojang Mojang Twitter] 
** [https://twitter.com/mojang/lists/mojang-employees ????]
* [https://www.youtube.com/user/TeamMojang Minecraft YouTube]
* [https://www.twitch.tv/Mojang Mojang Twitch]
* [https://www.twitch.tv/Minecraft Minecraft Twitch]
* [https://mixer.com/minecraft Minecraft Mixer]
* [https://www.minecraftforum.net/ Minecraft????]
* [https://www.facebook.com/minecraft Minecraft Facebook]
* [https://discordapp.com/invite/minecraft Minecraft??Discord]
* [https://discordapp.com/invite/fGdE5ZE/ Wiki Discord]
* [https://minecraft.net/en-us/realms/ Realms????]
* [https://www.minecraftshop.com ??Minecraft????]
* [https://www.thinkgeek.com/interests/minecraft ThinkGeek??]
* [https://www.instagram.com/minecraft Minecraft Instagram]
* [http://mc.163.com/ ???????(??)]
* [http://mcmall.163.com/ ????????(??)]
* [https://minecraft.education.jdcloud.com/cn/ ???????(???)]
</div>

<p style="margin-bottom:0">'''??????'''</p>
<div style="-moz-columns: 130px; -webkit-columns: 130px; columns: 130px;">
* [http://www.mcbbs.net Minecraft????]
* [http://forum.gamer.com.tw/A.php?bsn=18673 Minecraft{{tr|???|???}} - ????]
* [http://tieba.baidu.com/f?kw=minecraft Minecraft? - ????]
<!-- * [http://forum.minecraft-hk.com/ Minecraft????] ?????????Wiki??,????? -->
* [http://www.mcmod.cn/ MCmod??]
* [http://mineplugin.org/ Minecraft????]
</div>
}}

{{/style|id=fp-9|header=??????|image=Servericon.png|content=
; [[???]]
: ????????????????
; [[Realms|Minecraft Realms]]
: ??Mojang???Java????????????
; [[Realms Plus|Minecraft Realms Plus]]
: ??Mojang?????????????????
; [[?????|???????]]
: Mojang??????????
; [[????]]
: ??Minecraft?????????????????
; [[????????]]
: Minecraft??????????????
; [[?????]]
: ??????????????????????
}}

{{/style|id=fp-10|header=????|image=Developmentcategory.png|content=
<div class="list-style-none">
<p style="margin-bottom: 0;">'''[[????]]'''</p>
* <li class="hlist"> '''Java?''' 
** [[Java?????#???|???]]
** [[Java?????/????|????]]
** [[Java?????#Pre-classic|Pre-classic]]
** [[Java?????#Classic|Classic]]
** [[Java?????#Indev|Indev]]
** [[Java?????#Infdev|Infdev]]
** [[Java?????#Alpha|Alpha]]
** [[Java?????#Beta|Beta]]
* <li class="hlist"> '''???''' 
** [[???????#???|???]]
** [[???????/????|????]]
** [[???????#Alpha|Alpha]]
* <li class="hlist"> '''[[???????|???]]'''
----
<p style="margin-bottom: 0;">'''[[????]]'''</p>
* <li class="hlist"> '''[[????#Java?|Java?]]''' 
** [[Java?1.16.2]]
** [[????#????|????]]
* <li class="hlist"> '''[[????#???|???]]''' 
** [[???1.16.20]]
----
<p style="margin-bottom: 0;">'''????'''</p>
* <li class="hlist"> '''[[Java?????|Java?]]'''
* <li class="hlist"> '''[[???????|???]]'''
</div>
}}</div><div class="nomobile" style="margin-right: 0px; text-align: right; font-style: italic; font-size: 85%;">????????????,?[[Minecraft Wiki/editcopy|????]]?</div><!--
-->[[Category:Minecraft Wiki]]<!--

-->[[cs:Minecraft Wiki]]<!--
-->[[de:Minecraft Wiki]]<!--
-->[[el:Minecraft Wiki]]<!--
-->[[en:Minecraft Wiki]]<!--
-->[[es:Minecraft Wiki]]<!--
-->[[fr:Minecraft Wiki]]<!--
-->[[hu:Minecraft Wiki]]<!--
-->[[it:Minecraft Wiki]]<!--
-->[[ja:Minecraft Wiki]]<!--
-->[[ko:?????? ??]]<!--
-->[[nl:Minecraft Wiki]]<!--
-->[[pl:Strona glσwna]]<!--
-->[[pt:Minecraft Wiki]]<!--
-->[[ru:????????? ????????]]<!--
-->[[th:Minecraft Wiki]]<!--
-->[[tr:Minecraft Wiki]]<!--
-->[[uk:??????? ????????]]<!--

--><metadesc>??Minecraft Wiki???Minecraft???????????,????????????????????????????????????????????????????????????????????????????????????????????????Wiki?????</metadesc><metakeys>????, minecraft, minecraftwiki, wiki, ??, mc, ??, ??, ???, ??, ??, ??, ??, ??, ??, ??, ??, ??, ios, ??</metakeys>

