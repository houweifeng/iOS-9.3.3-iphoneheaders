/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBDiskSpaceAlertItem : SBAlertItem {

	long long _usageButtonIndex;

}
-(void)_showUsagePrefs;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)performUnlockAction;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInEmergencyCall;
@end

