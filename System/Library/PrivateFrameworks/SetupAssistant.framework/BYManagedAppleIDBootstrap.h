/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@class AKAppleIDAuthenticationContext, UMUserSwitchContext, NSString;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate> {

	AKAppleIDAuthenticationContext* _authContext;
	UMUserSwitchContext* _userSwitchContext;

}

@property (nonatomic,copy,readonly) NSString * shortLivedToken; 
@property (nonatomic,readonly) BOOL passwordChangeFlowNeedsToRun; 
@property (nonatomic,readonly) UMUserSwitchContext * userSwitchContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateBundleIDsForManagedAccount;
+(BOOL)isMultiUser;
+(id)sharedManager;
-(BOOL)isLoginUser;
-(void)dealloc;
-(id)init;
-(NSString *)shortLivedToken;
-(UMUserSwitchContext *)userSwitchContext;
-(void)postUserSwitchContextHasBeenUsed;
-(void)recoverEMCSWithCompletion:(/*^block*/id)arg1 ;
-(void)_upgradeShortLivedTokenCompletion:(/*^block*/id)arg1 ;
-(BOOL)needsToUpgradeShortLivedToken;
-(BOOL)passwordChangeFlowNeedsToRun;
-(void)switchToLoginWindowDueToError:(id)arg1 ;
-(void)_runSilentLoginUpgradeWithCompletion:(/*^block*/id)arg1 ;
-(void)_createAppleAccountWithUsername:(id)arg1 password:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_languageConfigurationDictionary;
-(void)userSwitchContextHasBeenUsed;
-(void)ingestManagedBuddyData;
-(void)runSilentLoginUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)writeAccountConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
@end

