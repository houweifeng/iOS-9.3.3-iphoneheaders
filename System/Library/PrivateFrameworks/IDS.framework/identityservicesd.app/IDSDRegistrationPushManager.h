/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSRegistrationPushHandler;

@interface IDSDRegistrationPushManager : NSObject {

	IDSRegistrationPushHandler* _pushHandler;

}
+(id)sharedInstance;
-(void)handler:(id)arg1 reregisterUserID:(id)arg2 style:(id)arg3 service:(id)arg4 ;
-(id)_accountsWithService:(id)arg1 ;
-(BOOL)_shouldReRegisterAccount:(id)arg1 ;
-(void)_hanleResponseForPushID:(id)arg1 withAction:(id)arg2 ;
-(void)_handleReIdentifyActionForAccount:(id)arg1 ;
-(void)_handleReProvisionActionForAccount:(id)arg1 ;
-(void)_handleReRegisterActionForAccount:(id)arg1 ;
-(void)_handleValidateCredentialsActionForAccount:(id)arg1 ;
-(void)fakeIncomingPushForUserID:(id)arg1 style:(id)arg2 service:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
@end
