OpenWebPage() {
	lr_start_transaction("OpenWebPage");
	
		web_set_sockets_option("SSL_VERSION", "AUTO");
	
		web_add_auto_header("DNT", 
			"1");
	
		web_add_header("Sec-Fetch-Dest", 
			"document");
	
		web_add_header("Sec-Fetch-Mode", 
			"navigate");
	
		web_add_header("Sec-Fetch-Site", 
			"none");
	
		web_add_header("Sec-Fetch-User", 
			"?1");
	
		web_add_header("Upgrade-Insecure-Requests", 
			"1");
	
		web_url("www.advantageonlineshopping.com", 
			"URL=https://www.advantageonlineshopping.com/", 
			"Resource=0", 
			"RecContentType=text/html", 
			"Referer=", 
			"Snapshot=t14.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_add_header("Sec-Fetch-Dest", 
			"style");
	
		web_add_header("Sec-Fetch-Mode", 
			"no-cors");
	
		web_add_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_concurrent_start(NULL);
	
		web_url("main.min.css", 
			"URL=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Resource=1", 
			"RecContentType=text/css", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t15.inf", 
			LAST);
	
		web_add_header("Sec-Fetch-Dest", 
			"image");
	
		web_add_header("Sec-Fetch-Mode", 
			"no-cors");
	
		web_add_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_url("Down_arrow.svg", 
			"URL=https://www.advantageonlineshopping.com/css/images/Down_arrow.svg", 
			"Resource=1", 
			"RecContentType=image/svg+xml", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t16.inf", 
			LAST);
	
		web_add_header("Sec-Fetch-Dest", 
			"script");
	
		web_add_header("Sec-Fetch-Mode", 
			"no-cors");
	
		web_add_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_url("require.js", 
			"URL=https://www.advantageonlineshopping.com/vendor/requirejs/require.js", 
			"Resource=1", 
			"RecContentType=application/javascript", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t18.inf", 
			LAST);
	
		web_add_header("Sec-Fetch-Dest", 
			"image");
	
		web_add_header("Sec-Fetch-Mode", 
			"no-cors");
	
		web_add_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_url("favicon.ico", 
			"URL=https://www.advantageonlineshopping.com/css/images/favicon.ico", 
			"Resource=1", 
			"RecContentType=image/x-icon", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t19.inf", 
			LAST);
	
		web_concurrent_end(NULL);
	
		web_add_header("Sec-Fetch-Dest", 
			"font");
	
		web_add_header("Sec-Fetch-Mode", 
			"cors");
	
		web_add_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_url("Roboto-Regular-webfont.woff", 
			"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", 
			"Resource=1", 
			"RecContentType=font/woff", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t17.inf", 
			LAST);
	
		web_add_header("Sec-Fetch-Dest", 
			"script");
	
		web_add_header("Sec-Fetch-Mode", 
			"no-cors");
	
		web_add_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_concurrent_start(NULL);
	
		web_url("main.min.js", 
			"URL=https://www.advantageonlineshopping.com/main.min.js", 
			"Resource=1", 
			"RecContentType=application/javascript", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t20.inf", 
			LAST);
	
		web_add_header("Sec-Fetch-Dest", 
			"image");
	
		web_add_header("Sec-Fetch-Mode", 
			"no-cors");
	
		web_add_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_url("logo.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/logo.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t21.inf", 
			LAST);
	
		web_add_header("Sec-Fetch-Dest", 
			"image");
	
		web_add_header("Sec-Fetch-Mode", 
			"no-cors");
	
		web_add_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_url("closeDark.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/closeDark.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t22.inf", 
			LAST);
	
		web_add_header("Sec-Fetch-Dest", 
			"empty");
	
		web_add_header("Sec-Fetch-Mode", 
			"cors");
	
		web_add_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_url("services.properties", 
			"URL=https://www.advantageonlineshopping.com/services.properties", 
			"Resource=1", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t23.inf", 
			LAST);
	
		web_add_header("Sec-Fetch-Dest", 
			"font");
	
		web_add_header("Sec-Fetch-Mode", 
			"cors");
	
		web_add_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_url("Roboto-Light-webfont.woff", 
			"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", 
			"Resource=1", 
			"RecContentType=font/woff", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t24.inf", 
			LAST);
	
		web_concurrent_end(NULL);
	
		web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");
	
		web_add_auto_header("Sec-Fetch-Dest", 
			"empty");
	
		web_add_auto_header("Sec-Fetch-Mode", 
			"cors");
	
		web_add_auto_header("Sec-Fetch-Site", 
			"same-origin");
	
		web_url("ALL", 
			"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t25.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_add_header("Origin", 
			"https://www.advantageonlineshopping.com");
	
		web_add_header("SOAPAction", 
			"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");
	
		web_add_header("X-Requested-With", 
			"XMLHttpRequest");
	
		web_custom_request("GetAccountConfigurationRequest", 
			"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
			"Method=POST", 
			"Resource=0", 
			"RecContentType=text/xml", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t26.inf", 
			"Mode=HTTP", 
			"EncType=text/xml; charset=UTF-8", 
			"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
			LAST);
	
		web_url("Roboto-Medium-webfont.woff", 
			"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", 
			"Resource=1", 
			"RecContentType=font/woff", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t27.inf", 
			LAST);
		
		web_reg_find("Text=\"categoryName\":\"LAPTOPS\"",
		LAST);

	
		web_url("categories", 
			"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t28.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_url("search", 
			"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t29.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_url("popularProducts.json", 
			"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t30.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_url("home-page.html", 
			"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
			"Resource=0", 
			"RecContentType=text/html", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t31.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_concurrent_start(NULL);
	
		web_url("GoUp.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/GoUp.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t32.inf", 
			LAST);
	
		web_url("Special-offer.jpg", 
			"URL=https://www.advantageonlineshopping.com/css/images/Special-offer.jpg", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t33.inf", 
			LAST);
	
		web_url("chat_logo.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/chat_logo.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t34.inf", 
			LAST);
	
		web_concurrent_end(NULL);
	
		web_concurrent_start(NULL);
	
		web_url("twitter.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/twitter.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t35.inf", 
			LAST);
	
		web_url("facebook.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/facebook.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t36.inf", 
			LAST);
	
		web_url("Roboto-Bold-webfont.woff", 
			"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", 
			"Resource=1", 
			"RecContentType=font/woff", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t37.inf", 
			LAST);
	
		web_url("fetchImage", 
			"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=speakers", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t38.inf", 
			LAST);
	
		web_url("Roboto-Thin-webfont.woff", 
			"URL=https://www.advantageonlineshopping.com/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", 
			"Resource=1", 
			"RecContentType=font/woff", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t39.inf", 
			LAST);
	
		web_url("arrow_right.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/arrow_right.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t40.inf", 
			LAST);
	
		web_url("fetchImage_2", 
			"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=tablets", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t41.inf", 
			LAST);
	
		web_url("Banner1.jpg", 
			"URL=https://www.advantageonlineshopping.com/css/images/Banner1.jpg", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t42.inf", 
			LAST);
	
		web_url("Banner2.jpg", 
			"URL=https://www.advantageonlineshopping.com/css/images/Banner2.jpg", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t43.inf", 
			LAST);
	
		web_url("fetchImage_3", 
			"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=headphones", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t44.inf", 
			LAST);
	
		web_url("fetchImage_4", 
			"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=laptops", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t45.inf", 
			LAST);
	
		web_url("fetchImage_5", 
			"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=mice", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t46.inf", 
			LAST);
	
		web_url("linkedin.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/linkedin.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t47.inf", 
			LAST);
	
		web_url("Banner3.jpg", 
			"URL=https://www.advantageonlineshopping.com/css/images/Banner3.jpg", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t48.inf", 
			LAST);
	
		web_url("Popular-item1.jpg", 
			"URL=https://www.advantageonlineshopping.com/css/images/Popular-item1.jpg", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t49.inf", 
			LAST);
	
		web_url("Popular-item3.jpg", 
			"URL=https://www.advantageonlineshopping.com/css/images/Popular-item3.jpg", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t50.inf", 
			LAST);
	
		web_url("Popular-item2.jpg", 
			"URL=https://www.advantageonlineshopping.com/css/images/Popular-item2.jpg", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t51.inf", 
			LAST);
	
		web_url("FacebookLogo.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/FacebookLogo.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
			"Snapshot=t52.inf", 
			LAST);
	
		web_concurrent_end(NULL);
		
		lr_end_transaction("OpenWebPage", LR_AUTO);

		return 0;
}

LogIn(){

	int i;

	int count;

	lr_start_transaction("logIn");
		
		web_reg_find("Text=<ns2:reason>Login Successful</ns2:reason>",
		LAST);

		web_reg_save_param_ex(
				"ParamName=t_authorization",
				"LB=<ns2:t_authorization>",
				"RB=</ns2:t_authorization>",
				SEARCH_FILTERS,
				LAST);
		
		web_reg_save_param_ex(
				"ParamName=userId",
				"LB=<ns2:userId>",
				"RB=</ns2:userId>",
				SEARCH_FILTERS,
				LAST);
	
		web_add_header("Origin", 
			"https://www.advantageonlineshopping.com");
	
		web_add_header("SOAPAction", 
			"com.advantage.online.store.accountserviceAccountLoginRequest");
	
		web_add_header("X-Requested-With", 
			"XMLHttpRequest");
	
		web_custom_request("AccountLoginRequest", 
			"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
			"Method=POST", 
			"Resource=0", 
			"RecContentType=text/xml", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t53.inf", 
			"Mode=HTTP", 
			"EncType=text/xml; charset=UTF-8", 
			"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>{password}</loginPassword><loginUser>{login}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
			LAST);
	
		web_reg_save_param_ex(
		"ParamName=productId",
		"LB=\"productId\":",
		"RB=,",
		"Ordinal=ALL",
		"Notfound=warning",
		SEARCH_FILTERS,
		LAST);
		
		web_reg_save_param_ex(
		"ParamName=hexColor",
		"LB=\"code\":\"",
		"RB=\",",
		"Ordinal=ALL",
		"Notfound=warning",
		SEARCH_FILTERS,
		LAST);

		
		web_reg_save_param_ex(
		"ParamName=quantity",
		"LB=\"quantity\":",
		"RB=,",
		"Ordinal=ALL",
		"Notfound=warning",
		SEARCH_FILTERS,
		LAST);
		
		web_set_sockets_option("INITIAL_AUTH", "BASIC");
		
		web_add_auto_header("Authorization", " Basic {t_authorization}");
		
		web_reg_save_param_ex(
		"ParamName=sessionId",
		"LB=\"sessionId\":\"",
		"RB=\"",
		SEARCH_FILTERS,
		LAST);

	
		web_url("userId", 
			"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t54.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_url("fetchImage_6", 
			"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=3300", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t55.inf", 
			LAST);
	
		web_add_header("Origin", 
			"https://www.advantageonlineshopping.com");
		
		web_add_auto_header("Content-Type", 
				"application/json;charset=utf-8");

		
		// count = atoi(lr_eval_string("{hexColor_count}"));
		
		// if(count){
		
		// lr_save_string(lr_paramarr_idx("hexColor", count), "hexColor_i");

		// lr_save_string(lr_paramarr_idx("productId", count), "productId_i");
		
		// lr_save_string(lr_paramarr_idx("quantity", count), "quantity_i");
		
		// web_custom_request("userId_2", 
		// 	"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}", 
		// 	"Method=PUT", 
		// 	"Resource=0", 
		// 	"RecContentType=application/json", 
		// 	"Referer=https://www.advantageonlineshopping.com/", 
		// 	"Snapshot=t56.inf", 
		// 	"Mode=HTTP", 
		// 	"Body=[{\"hexColor\":{hexColor_i},\"productId\":{productId_i},\"quantity\":{quantity_i}}]", 
		// 	LAST);
		// }
		
		lr_end_transaction("logIn",LR_AUTO);
	
		

	return 0;
}

CheckCart(){

	lr_start_transaction("checkCart");
		
		web_reg_find("Text=\"userId\":{userId},\"productsInCart\"",
		LAST);

	
		web_url("userId_3", 
			"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t57.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_url("shoppingCart.html", 
			"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
			"Resource=0", 
			"RecContentType=text/html", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t58.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_concurrent_start(NULL);
	
		web_url("Master_credit.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/Master_credit.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t59.inf", 
			LAST);
	
		web_url("SafePay.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/SafePay.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t60.inf", 
			LAST);
	
		web_concurrent_end(NULL);
	
		lr_end_transaction("checkCart",LR_AUTO);
		

	return 0;
}

LogOut(){

	lr_start_transaction("logOut");
		
		web_reg_find("Text=<ns2:reason>Logout Successful</ns2:reason>",
		LAST);

		web_add_header("Origin", 
			"https://www.advantageonlineshopping.com");
	
		web_add_header("SOAPAction", 
			"com.advantage.online.store.accountserviceAccountLogoutRequest");
	
		web_add_header("X-Requested-With", 
			"XMLHttpRequest");    

		web_custom_request("AccountLogoutRequest", 
			"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLogoutRequest", 
			"Method=POST", 
			"Resource=0", 
			"RecContentType=text/xml", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t61.inf", 
			"Mode=HTTP", 
			"EncType=text/xml; charset=UTF-8", 
			"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{userId}</loginUser><base64Token>Basic {t_authorization}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
			LAST);
	
		lr_end_transaction("logOut",LR_AUTO);

	return 0;
}

ClickCategory(){

	lr_start_transaction("clickCategory");
	
	web_reg_find("Text=\"categoryId\":{rndCategory},",
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=productIdToBuy",
		"LB=\"productId\":",
		"RB=,",
		"Ordinal=ALL",
		SEARCH_FILTERS,
		LAST);

	web_url("products", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{rndCategory}/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("attributes", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("category-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("Filter.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/Filter.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t47.inf", 
		LAST);

	web_url("fetchImage_6", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4700", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t48.inf", 
		LAST);

	web_url("fetchImage_7", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4400", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t49.inf", 
		LAST);

	web_url("fetchImage_8", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4200", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t50.inf", 
		LAST);

	web_url("fetchImage_9", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4600", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("fetchImage_10", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4100", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("fetchImage_11", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4300", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t53.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("DNT");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("DNT", 
		"1");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_concurrent_start(NULL);

	web_url("category_banner_4.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/category_banner_4.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t55.inf", 
		LAST);

	web_add_header("DNT", 
		"1");

	web_add_header("Sec-Fetch-Dest", 
		"image");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("fetchImage_12", 
		"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=4500", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t56.inf", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_url("fullHashes_find", 
		"URL=https://safebrowsing.googleapis.com/v4/fullHashes_find?$ct=application/x-protobuf&key=AIzaSyC7jsptDS3am4tPx4r3nxis7IMjBc5Dovo&$httpMethod=POST&$req=ChUKE25hdmNsaWVudC1hdXRvLWZmb3gSGwoNCAUQBhgBIgMwMDEwARC6_g4aAhgHa9HMNRouCAUQARoGCgTrEU4YGgYKBGujqkAaBgoErVIQXxoGCgSusT5EGgYKBLrC44EgAQ==", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t57.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("clickCategory",LR_AUTO);

	return 0;
}

ChooseProduct(){

	int id;
		
	lr_start_transaction("chooseProduct");
			
	
	lr_save_string(lr_paramarr_random("productIdToBuy"), "productIdToBuy_rnd");
	
	id = atoi(lr_eval_string("{productIdToBuy_rnd}"));

	if (id == 13){

		lr_save_string(lr_paramarr_random("productIdToBuy"), "productIdToBuy_rnd");
		
	};
	
	
	web_reg_find("Text=\"productId\":{productIdToBuy_rnd},\"categoryId\":{rndCategory}",
		LAST);

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
	web_reg_save_param_ex(
		"ParamName=color",
		"LB=\"colors\":[{\"code\":\"",
		"RB=\",",
		SEARCH_FILTERS,
		LAST);

	web_url("productIdToBuy", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/{productIdToBuy_rnd}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("products_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/{rndCategory}/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t59.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("all_data", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("product-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t61.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("reviewUser.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/reviewUser.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("review_right.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/review_right.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("review_Left_disabled.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/review_Left_disabled.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t64.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("chooseProduct",LR_AUTO);


	return 0;
}

AddToCart(){

	lr_start_transaction("addToCart");
	
	web_reg_find("Text=\"userId\":{userId},",
		LAST);

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_submit_data("DD3A5B",
		"Action=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}/product/{productIdToBuy_rnd}/color/{color}?quantity=1",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t65.inf",
		"Mode=HTTP",
		ITEMDATA,
		"Name=sessionId", "Value={sessionId}", ENDITEM,
		LAST);

	lr_end_transaction("addToCart",LR_AUTO);

	return 0;
}

GoToCheckout(){

	lr_start_transaction("goToCheckout");
	
	web_reg_find("Text=<ns2:id>{userId}</ns2:id>",
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountByIdRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t70.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {t_authorization}</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");
	
	web_reg_save_param_ex(
		"ParamName=homeAddress",
		"LB=<ns2:homeAddress>",
		"RB=</ns2:homeAddress>",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_ex(
		"ParamName=city",
		"LB=<ns2:cityName>",
		"RB=</ns2:cityName>",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=countryIso",
		"LB=<ns2:countryIsoName>",
		"RB=</ns2:countryIsoName>",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_save_param_ex(
		"ParamName=state",
		"LB=<ns2:stateProvince>",
		"RB=</ns2:stateProvince>",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_ex(
		"ParamName=zip",
		"LB=<ns2:zipcode>",
		"RB=</ns2:zipcode>",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_ex(
		"ParamName=phoneNumber",
		"LB=<ns2:mobilePhone>",
		"RB=</ns2:mobilePhone>",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_ex(
		"ParamName=firstName",
		"LB=<ns2:firstName>",
		"RB=</ns2:firstName>",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_ex(
		"ParamName=lastName",
		"LB=<ns2:lastName>",
		"RB=</ns2:lastName>",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_ex(
		"ParamName=countryCode",
		"LB=<ns2:countryId>",
		"RB=</ns2:countryId>",
		SEARCH_FILTERS,
		LAST);

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t71.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {t_authorization}</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");
	
	web_reg_save_param_ex(
		"ParamName=sessionId2",
		"LB=sessionId\":\"",
		"RB=\"",
		SEARCH_FILTERS,
		LAST);

	web_reg_save_param_ex(
		"ParamName=shippingPrice",
		"LB=\"price\":",
		"RB=,",
		SEARCH_FILTERS,
		LAST);

	web_url("userId_3", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_custom_request("shippingcost", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/shippingcost/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t73.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"{homeAddress}\",\"addressLine2\":\"\",\"city\":\"{city}\",\"country\":\"{countryIso}\",\"postalCode\":{zip},\"state\":\"{state}\"},\"secustomerName\":\"{firstName} {lastName}\",\"secustomerPhone\":\"{phoneNumber}\",\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"{sessionId2}\"}", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t74.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {t_authorization}</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("orderPayment-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t75.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("Shipex.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/Shipex.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("User.jpg", 
		"URL=https://www.advantageonlineshopping.com/css/images/User.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("Bell.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/Bell.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("Check.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/Check.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t79.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetCountriesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("goToCheckout",LR_AUTO);

	return 0;
}

PayWithSafePay(){

	lr_start_transaction("payWithSafePay");

	lr_save_string(lr_eval_string("{rnd}{rnd}"),"passwordRnd");
	
	lr_save_string(lr_eval_string("{rnd}"),"userRnd");
	
	
	
	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceUpdateSafePayMethodRequest");

	web_custom_request("UpdateSafePayMethodRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/UpdateSafePayMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t81.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><UpdateSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><userId>{userId}</userId><safePayUsername>{userRnd}</safePayUsername><safePayPassword>{passwordRnd}</safePayPassword><referenceId>1234567890</referenceId><base64Token>Basic "
		"{t_authorization}</base64Token></UpdateSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("X-Requested-With");
	
	web_reg_find("Text=\"order completed successfully\"",
		LAST);

	web_custom_request("userId_4",
		"URL=https://www.advantageonlineshopping.com/order/api/v1/orders/users/{userId}",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=https://www.advantageonlineshopping.com/",
		"Snapshot=t82.inf",
		"Mode=HTTP",
		"EncType=application/json",
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"{phoneNumber}\",\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"ASdasdasdd1\",\"Transaction_SafePay_UserName\":\"SAdsad\",\"Transaction_TransactionDate\":\"{dateNow}\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"{homeAddress}\",\"Shipping_Address_City\":\"{city}\",\"Shipping_Address_CountryCode\":{countryCode},\"Shipping_Address_CustomerName\":\"{firstName} {lastName}\",\"Shipping_Address_CustomerPhone\":\"{phoneNumber}\",\"Shipping_Address_PostalCode\":{zip},\"Shipping_Address_State\":\"{state}\",\"Shipping_Cost\":{shippingPrice},\"Shipping_NumberOfProducts\":1,\"Shipping_TrackingNu"
		"mber\":0},\"purchasedProducts\":[{\"hexColor\":\"{color}\",\"productId\":{productIdToBuy_rnd},\"quantity\":1,\"hasWarranty\":false}]}",
		LAST);

	web_custom_request("userId_5", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/{userId}", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t83.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("payWithSafePay",LR_AUTO);

	return 0;
}

CheckSpecialOffer(){

	lr_start_transaction("checkSpecialOffer");
		
		web_reg_find("Text=\"productStatus\":\"Active\"",
		LAST);

	
		web_url("3", 
			"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/3", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t39.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_url("all_data", 
			"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t40.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_url("products", 
			"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/1/products", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t41.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_url("product-page.html", 
			"URL=https://www.advantageonlineshopping.com/app/views/product-page.html", 
			"Resource=0", 
			"RecContentType=text/html", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t42.inf", 
			"Mode=HTTP", 
			LAST);
	
		web_concurrent_start(NULL);
	
		web_url("review_right.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/review_right.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t43.inf", 
			LAST);
	
		web_url("reviewUser.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/reviewUser.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t44.inf", 
			LAST);
	
		web_url("review_Left_disabled.png", 
			"URL=https://www.advantageonlineshopping.com/css/images/review_Left_disabled.png", 
			"Resource=1", 
			"RecContentType=image/png", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t46.inf", 
			LAST);
	
		web_concurrent_end(NULL);
	
		web_url("fetchImage_6", 
			"URL=https://www.advantageonlineshopping.com/catalog/fetchImage?image_id=1300", 
			"Resource=1", 
			"RecContentType=image/jpeg", 
			"Referer=https://www.advantageonlineshopping.com/", 
			"Snapshot=t45.inf", 
			LAST);

	
		lr_end_transaction("checkSpecialOffer",LR_AUTO);

	return 0;
}

ClickReg(){

	lr_start_transaction("clickReg");
	
	web_reg_find("Text=<section id=\"registerPage\">",
		LAST);

	web_url("register-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/user/views/register-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetCountriesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t41.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_concurrent_start(NULL);

	web_url("Bell.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/Bell.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("Check.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/Check.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/css/main.min.css", 
		"Snapshot=t43.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("clickReg",LR_AUTO);

	return 0;
}

Registration(){
	
	lr_start_transaction("registration");
	
	lr_save_string(lr_eval_string("{RndLet}{rndL}{rndL}{rndL}{rndL}"),"Name");
	lr_save_string(lr_eval_string("{RndLet}{rndL}{rndL}{rndL}{randomNumber}"),"loginName");
	lr_save_string(lr_eval_string("{RndLet}{rndL}{rndL}{rndL}{rndL}"),"state");
	lr_save_string(lr_eval_string("{RndLet}{rndL}{RndLet}{rndL}{randomNumber}"),"password");
	lr_save_string(lr_eval_string("{randomNumber}{randomNumber}"),"phone");
	lr_save_string(lr_eval_string("{RndLet}{rndL}{rndL}"),"City");
	lr_save_string(lr_eval_string("{RndLet}{rndL}{rndL}{rndL}{rndL}{rndL}{rndL}{rndL}"),"address");
	

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountCreateRequest");

	web_custom_request("AccountCreateRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountCreateRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t44.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address>{address}</address><allowOffersPromotion>false</allowOffersPromotion><cityName>{City}</cityName><countryId>Afganistan,af</countryId><email"
		">asldklaskdl@ashdhasd.ru</email><firstName>{Name}</firstName><lastName>{Name}</lastName><loginName>{loginName}</loginName><password>{password}</password><phoneNumber>{phone}</phoneNumber><stateProvince>{state}</stateProvince><zipcode>{phone}</zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");
	
	web_reg_find("Text=<ns2:reason>Login Successful</ns2:reason>",
		LAST);

		web_reg_save_param_ex(
				"ParamName=t_authorization",
				"LB=<ns2:t_authorization>",
				"RB==</ns2:t_authorization>",
				SEARCH_FILTERS,
				LAST);
		
		web_reg_save_param_ex(
				"ParamName=userId",
				"LB=<ns2:userId>",
				"RB=</ns2:userId>",
				SEARCH_FILTERS,
				LAST);

	web_custom_request("AccountLoginRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t45.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>asldklaskdl@ashdhasd.ru</email><loginPassword>Gold1</loginPassword><loginUser>Test3</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");
	
	web_add_auto_header("Authorization", " Basic {t_authorization}");

	web_url("339746039", 
		"URL=https://www.advantageonlineshopping.com/order/api/v1/carts/339746039", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t46.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("registration",LR_AUTO);

	return 0;
}


CheckProfile(){

	lr_start_transaction("checkProfile");
	
	web_reg_find("Text=<ns2:id>{userId}</ns2:id>",
		LAST);
	
	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t47.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {t_authorization}</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAddressesByAccountIdRequest");

	web_custom_request("GetAddressesByAccountIdRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAddressesByAccountIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t48.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAddressesByAccountIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {t_authorization}</base64Token></GetAddressesByAccountIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {t_authorization}</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_url("myAccount-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/account/views/myAccount-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t50.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("User.jpg", 
		"URL=https://www.advantageonlineshopping.com/css/images/User.jpg", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t51.inf", 
		LAST);

	web_url("SafePay.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/SafePay.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t52.inf", 
		LAST);

	web_url("Master_credit.png", 
		"URL=https://www.advantageonlineshopping.com/css/images/Master_credit.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t53.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("checkProfile",LR_AUTO);

	return 0;
}
