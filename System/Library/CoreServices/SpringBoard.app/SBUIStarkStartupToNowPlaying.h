/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkStartupToAppAnimation.h>

@class NSNumber;

@interface SBUIStarkStartupToNowPlaying : SBUIStarkStartupToAppAnimation {

	NSNumber* _activated;

}
-(void)_cleanupAnimation;
-(id)_createViewToAnimate;
-(void)_setupStartDependencies;
-(void)_willSetupStartDependencies;
-(id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3 ;
-(void)_startAnimation;
@end
