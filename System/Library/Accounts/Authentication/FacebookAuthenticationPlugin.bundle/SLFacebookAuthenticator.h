/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Accounts/Authentication/FacebookAuthenticationPlugin.bundle/FacebookAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, NSString;

@interface SLFacebookAuthenticator : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	/*^block*/id _completionHandler;
	NSString* _machineId;
	long long _retryCount;

}
-(void)signInWithCompletion:(/*^block*/id)arg1 ;
-(id)_machineId;
-(id)_machineIdFromResponseDictionary:(id)arg1 ;
-(void)_setMachineId:(id)arg1 ;
-(id)_sanitizeResponseForLogging:(id)arg1 ;
-(BOOL)_isLoginApprovalRequired:(int)arg1 ;
-(id)_errorForErrorCode:(int)arg1 ;
-(BOOL)_isErrorTemporary:(int)arg1 ;
-(id)_fetchMeInfoForAccount:(id)arg1 ;
-(void)_processResponseDictionary:(id)arg1 ;
-(id)initWithEmail:(id)arg1 password:(id)arg2 ;
-(id)initWithAccount:(id)arg1 ;
@end

