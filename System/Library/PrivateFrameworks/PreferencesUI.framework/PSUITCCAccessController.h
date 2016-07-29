/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>

@class NSString, HMHomeManager;

@interface PSUITCCAccessController : PSListController {

	NSString* _serviceKey;
	BOOL _iCloudURLIsReachable;
	NSString* _footer;
	NSString* _header;
	NSString* _explanation;
	HMHomeManager* _homeManager;
	SCNetworkReachabilityRef _reachability;

}

@property (nonatomic,copy) NSString * footer;                                    //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * header;                                    //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * explanation;                               //@synthesize explanation=_explanation - In the implementation block
@property (nonatomic,readonly) NSString * serviceKey;                            //@synthesize serviceKey=_serviceKey - In the implementation block
@property (nonatomic,retain) HMHomeManager * homeManager;                        //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic) SCNetworkReachabilityRef reachability;              //@synthesize reachability=_reachability - In the implementation block
@property (assign,nonatomic) BOOL iCloudURLIsReachable;                          //@synthesize iCloudURLIsReachable=_iCloudURLIsReachable - In the implementation block
+(BOOL)isServiceRestricted:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(NSString *)serviceKey;
-(NSString *)explanation;
-(void)updateSpecifiersForImposedSettings;
-(void)setExplanation:(NSString *)arg1 ;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(void)_confirmResetWillowData;
-(BOOL)iCloudURLIsReachable;
-(void)_resetWillowData;
-(void)setICloudURLIsReachable:(BOOL)arg1 ;
-(id)specifiers;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(SCNetworkReachabilityRef)reachability;
-(void)setReachability:(SCNetworkReachabilityRef)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end
