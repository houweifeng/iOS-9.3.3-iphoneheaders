/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassbookSettingsOptionsDelegate <NSObject>
@required
-(id)defaultBillingAddressForPaymentPass:(id)arg1;
-(void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
-(id)defaultBillingAddresses;
-(id)defaultShippingAddress;
-(id)defaultContactEmail;
-(id)defaultContactPhone;
-(void)setDefaultShippingAddress:(id)arg1;
-(void)setDefaultContactEmail:(id)arg1;
-(void)setDefaultContactPhone:(id)arg1;

@end
