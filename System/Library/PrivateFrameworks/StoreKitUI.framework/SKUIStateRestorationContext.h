/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIClientContext;

@interface SKUIStateRestorationContext : NSObject {

	SKUIClientContext* _clientContext;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
+(id)sharedContext;
+(void)setSharedContext:(id)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

