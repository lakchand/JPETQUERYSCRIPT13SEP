Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("catalog", 
		"URL=https://jpetstore.cfapps.io/catalog", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(31);

	lr_start_transaction("Sign in transaction");

	web_link("Sign In", 
		"Text=Sign In", 
		"Snapshot=t93.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Sign in transaction",LR_AUTO);

	web_reg_find("Text=Welcome", 
		LAST);

	web_reg_find("Text=Welcome", 
		LAST);

	web_submit_form("login", 
		"Snapshot=t94.inf", 
		ITEMDATA, 
		"Name=username", "Value=user1", ENDITEM, 
		"Name=password", "Value=animals$123", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(67);

	lr_start_transaction("Selecting products transaction");

	lr_start_transaction("Fish Transaction");

	web_image("sm_fish.gif", 
		"Src=/images/sm_fish.gif", 
		"Snapshot=t95.inf", 
		LAST);

	web_link("FI-SW-01", 
		"Text=FI-SW-01", 
		"Snapshot=t96.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t97.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_submit_form("cart", 
		"Snapshot=t98.inf", 
		ITEMDATA, 
		"Name=lines[0].quantity", "Value=1", ENDITEM, 
		"Name=update", "Value=Update Cart", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Return to Main Menu", 
		"Text=Return to Main Menu", 
		"Snapshot=t99.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_image("sm_fish.gif_2", 
		"Src=/images/sm_fish.gif", 
		"Snapshot=t100.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("FI-SW-01_2", 
		"Text=FI-SW-01", 
		"Snapshot=t101.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_2", 
		"Text=Add to Cart", 
		"Ordinal=2", 
		"Snapshot=t102.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_2", 
		"Text=Return to Main Menu", 
		"Snapshot=t103.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Fish Transaction",LR_AUTO);

	lr_think_time(12);

	web_image("sm_dogs.gif", 
		"Src=/images/sm_dogs.gif", 
		"Snapshot=t104.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(8);

	lr_start_transaction("Dogs Transaction");

	web_link("K9-BD-01", 
		"Text=K9-BD-01", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("K9-BD-01_2", 
		"URL=https://jpetstore.cfapps.io/catalog/products/K9-BD-01", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/catalog/categories/DOGS", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_3", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t107.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_3", 
		"Text=Return to Main Menu", 
		"Snapshot=t108.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_image("sm_dogs.gif_2", 
		"Src=/images/sm_dogs.gif", 
		"Snapshot=t109.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("K9-BD-01_3", 
		"Text=K9-BD-01", 
		"Snapshot=t110.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_4", 
		"Text=Add to Cart", 
		"Ordinal=2", 
		"Snapshot=t111.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_4", 
		"Text=Return to Main Menu", 
		"Snapshot=t112.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_image("sm_dogs.gif_3", 
		"Src=/images/sm_dogs.gif", 
		"Snapshot=t113.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("K9-DL-01", 
		"Text=K9-DL-01", 
		"Snapshot=t114.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_5", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t115.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_5", 
		"Text=Return to Main Menu", 
		"Snapshot=t116.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_image("sm_dogs.gif_4", 
		"Src=/images/sm_dogs.gif", 
		"Snapshot=t117.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("K9-RT-02", 
		"Text=K9-RT-02", 
		"Snapshot=t118.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_6", 
		"Text=Add to Cart", 
		"Ordinal=3", 
		"Snapshot=t119.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_6", 
		"Text=Return to Main Menu", 
		"Snapshot=t120.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Dogs Transaction",LR_AUTO);

	web_image("sm_reptiles.gif", 
		"Src=/images/sm_reptiles.gif", 
		"Snapshot=t121.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(13);

	lr_start_transaction("Reptiles Transaction");

	web_link("RP-SN-01", 
		"Text=RP-SN-01", 
		"Snapshot=t122.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_7", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t123.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_7", 
		"Text=Return to Main Menu", 
		"Snapshot=t124.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_image("sm_reptiles.gif_2", 
		"Src=/images/sm_reptiles.gif", 
		"Snapshot=t125.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);
	

	web_link("RP-LI-02", 
		"Text=RP-LI-02", 
		"Snapshot=t126.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_8", 
		"Text=Add to Cart", 
		"Snapshot=t127.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Reptiles Transaction",LR_AUTO);

	lr_think_time(5);

	web_link("Return to Main Menu_8", 
		"Text=Return to Main Menu", 
		"Snapshot=t128.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	
	lr_start_transaction("Cats Transaction");

		web_image("sm_cats.gif", 
		"Src=/images/sm_cats.gif", 
		"Snapshot=t129.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("FL-DSH-01", 
		"Text=FL-DSH-01", 
		"Snapshot=t130.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_9", 
		"Text=Add to Cart", 
		"Ordinal=1", 
		"Snapshot=t131.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_9", 
		"Text=Return to Main Menu", 
		"Snapshot=t132.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_image("sm_cats.gif_2", 
		"Src=/images/sm_cats.gif", 
		"Snapshot=t133.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("FL-DLH-02", 
		"Text=FL-DLH-02", 
		"Snapshot=t134.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_10", 
		"Text=Add to Cart", 
		"Ordinal=2", 
		"Snapshot=t135.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);


	lr_end_transaction("Cats Transaction", LR_AUTO);

	lr_think_time(9);

	web_link("Return to Main Menu_10", 
		"Text=Return to Main Menu", 
		"Snapshot=t136.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("Birds Transaction");

		web_image("sm_birds.gif", 
		"Src=/images/sm_birds.gif", 
		"Snapshot=t137.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("AV-CB-01", 
		"Text=AV-CB-01", 
		"Snapshot=t138.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_11", 
		"Text=Add to Cart", 
		"Snapshot=t139.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Return to Main Menu_11", 
		"Text=Return to Main Menu", 
		"Snapshot=t140.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_image("sm_birds.gif_2", 
		"Src=/images/sm_birds.gif", 
		"Snapshot=t141.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("AV-SB-02", 
		"Text=AV-SB-02", 
		"Snapshot=t142.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_link("Add to Cart_12", 
		"Text=Add to Cart", 
		"Snapshot=t143.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);


	lr_end_transaction("Birds Transaction", LR_AUTO);
	
	lr_end_transaction("Selecting products transaction",LR_AUTO);

	web_link("Proceed to Checkout", 
		"Text=Proceed to Checkout", 
		"Snapshot=t144.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(28);

	lr_start_transaction("Payment transaction");

	web_submit_form("create", 
		"Snapshot=t145.inf", 
		ITEMDATA, 
		"Name=cardType", "Value=Visa", ENDITEM, 
		"Name=creditCard", "Value=7777777", ENDITEM, 
		"Name=expiryDate", "Value=12/2000", ENDITEM, 
		"Name=billToFirstName", "Value=user1", ENDITEM, 
		"Name=billToLastName", "Value=user1", ENDITEM, 
		"Name=billAddress1", "Value=user1", ENDITEM, 
		"Name=billAddress2", "Value=user1", ENDITEM, 
		"Name=billCity", "Value=user1", ENDITEM, 
		"Name=billState", "Value=user1", ENDITEM, 
		"Name=billZip", "Value=111111", ENDITEM, 
		"Name=billCountry", "Value=India", ENDITEM, 
		"Name=shippingAddressRequired", "Value=<OFF>", ENDITEM, 
		"Name=continue", "Value=Continue", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Payment transaction",LR_AUTO);

	lr_start_transaction("Order information");

	web_reg_find("Text=Thank you, your order has been submitted", 
		LAST);

	web_submit_form("create_2", 
		"Action=/my/orders/create", 
		"Snapshot=t146.inf", 
		ITEMDATA, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Order information",LR_AUTO);

	
	lr_start_transaction("Sign out transaction");

	web_link("Sign Out", 
		"Text=Sign Out", 
		"Snapshot=t147.inf", 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Sign out transaction",LR_AUTO);

	return 0;
}