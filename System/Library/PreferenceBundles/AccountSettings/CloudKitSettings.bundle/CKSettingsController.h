/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableDictionary, PSTableCell;

@interface CKSettingsController : PSListController {

	NSMutableDictionary* _enabledByAppID;
	PSTableCell* _serviceSectionCell;

}

@property (nonatomic,retain) NSMutableDictionary * enabledByAppID;              //@synthesize enabledByAppID=_enabledByAppID - In the implementation block
@property (nonatomic,retain) PSTableCell * serviceSectionCell;                  //@synthesize serviceSectionCell=_serviceSectionCell - In the implementation block
+(id)cloudKitNumAppGroups;
-(void)setServiceSectionCell:(PSTableCell *)arg1 ;
-(void)setEnabledByAppID:(NSMutableDictionary *)arg1 ;
-(PSTableCell *)serviceSectionCell;
-(NSMutableDictionary *)enabledByAppID;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(id)appPermissionEnabledForSpecifier:(id)arg1 ;
-(BOOL)_isApplicationHiddenFromSettings:(id)arg1 ;
-(void)setAppPermissionEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)specifiers;
@end

