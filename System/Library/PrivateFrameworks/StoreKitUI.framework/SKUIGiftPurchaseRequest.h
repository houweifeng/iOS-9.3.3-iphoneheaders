/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIURLConnectionRequest;

@interface SKUIGiftPurchaseRequest : NSObject {

	SKUIURLConnectionRequest* _request;

}
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)purchaseWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDonation:(id)arg1 configuration:(id)arg2 ;
-(id)_requestWithURL:(id)arg1 bodyDictionary:(id)arg2 ;
@end

